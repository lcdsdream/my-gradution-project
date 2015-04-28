/*
 *	button 驱动程序TQ6410
 *	使用标准字符设备驱动编写方法
 * 	中断 EINT8  --> GPN8 
 * 	目标平台  : tq6410s
 *	luchaodong 20150428 JNU
 * 	lcdsdream@126.com
 */

#include <linux/kernel.h>  
#include <linux/module.h>  
#include <linux/init.h>  
#include <linux/fs.h>  
#include <linux/gpio.h>  
#include <linux/types.h>  
#include <linux/cdev.h>  
#include <linux/interrupt.h>  
#include <linux/sched.h>  
#include <linux/device.h>  
#include <linux/poll.h>  
#include <linux/semaphore.h>  
#include <linux/timer.h>

#include <asm/irq.h>  
#include <asm/uaccess.h>  
#include <mach/irqs.h>

#define DEVICE_NAME "orientButton" 
#define KEYNUM 1
dev_t devid;

//定义信号量
struct semaphore button_lock;  			//互斥锁 控制打开进程数 
static struct fasync_strcut *button_async;	
static struct timer_list button_timer;

struct button_irq_des
{
	int irq;
	int pin;
	unsigned long setting;
	char *name;
	
};

static struct button_irq_des button_irqs[] = 
{
	{IRQ_EINT(8), S3C64XX_GPN(8), IRQF_TRIGGER_FALLING, "Button1"},  	
};

/*
 等待队列,按钮中断, read时,没有按下挂起休眠,按下时中断唤醒
 */
static DECLARE_WAIT_QUEUE_HEAD(button_waitq);

/*中断事件标识 中断处理程序置1, read 清除*/
static volatile int ev_press = 0;
/*中断计数*/
static volatile int button_cnt[] = {0};


static irqreturn_t buttons_interrupt(int irq, void *dev_id)
{
	//对应中断程序注册传递的参数
	volatile int *button_cnt = (volatile int*) dev_id;
	*button_cnt = *button_cnt + 1;

	//延时10ms 执行定时器处理函数
	mod_timer(&button_timer, jiffies+HZ/100);
	//printk(KERN_ALERT "in irq\n");	
	return IRQ_RETVAL(IRQ_HANDLED);

}


/*定时器处理*/
static void buttons_timer_func(unsigned long data)
{
	ev_press = 1;

	//唤醒队列
	wake_up_interruptible(&button_waitq);
	kill_fasync(&button_async, SIGIO, POLL_IN);
}

static int button_fasync(int fd, struct file *filp, int on)
{
	printk(KERN_ALERT "Function button_fasync\n");
	return fasync_helper(fd, filp, on, &button_async);
}

/*
 * 用户调用select 函数,本函数被调用
 * 如果有按键数据, 则select立刻返回
 * 如果没有按键数据,本函数使用pool_wait等待
 */
static unsigned button_pool(struct file *file, poll_table *wait)
{
	unsigned int mask =0;
	//指明要使用的等待队列
	poll_wait(file, &button_waitq, wait);

	if (ev_press)
		mask |= POLL_IN | POLLRDNORM;

	printk(KERN_ALERT "Poll wait\n");
	return mask;
}


static int button_open(struct inode *inode, struct file *file)
{
	int num;
	int val;
	//非阻塞
	if (file->f_flags & O_NONBLOCK)
	{
		if (down_trylock(&button_lock)) return -EBUSY;
	}
	else
	{
		//第一次打开
		down(&button_lock);
	}

	//注册中断程序
	for (num=0; num<KEYNUM; ++num)
	{
		/* 中断号 中断处理函数, 中断设置, 中断名, 中断传递参数*/
		val = request_irq(button_irqs[num].irq, buttons_interrupt, button_irqs[num].setting, button_irqs[num].name, (void*)&button_cnt[num]);
		if (val !=0)
		{
			printk(KERN_ALERT "error while irq request\n");
		}

	}
	return 0;
}

static int button_close(struct inode *inode, struct file *file)
{
	int num;
	//释放中断号
	for (num=0; num<KEYNUM; ++num)
	{
		free_irq(button_irqs[num].irq, (void*)&button_cnt[num]);
	}
	up(&button_lock);
	
	printk(KERN_ALERT "Button_close\n");
	return 0;

}


static int button_read(struct file *filp, char __user *buff, size_t count, loff_t *offp)
{
	int val;
	/*判断阻塞与否*/
	if (filp->f_flags & O_NONBLOCK)
	{
		if (!ev_press) return -EAGAIN;
	}
	else
	{
		wait_event_interruptible(button_waitq, ev_press);
	}

	//阻塞结束,有按键
	ev_press = 0;

	val = copy_to_user(buff, (const void*)button_cnt, min(sizeof(button_cnt), count));
	memset((void*)button_cnt, 0, sizeof(button_cnt));
	return (count-val);
}


static struct file_operations button_ops = 
{
	.owner = THIS_MODULE,
	.open = button_open,
	.release = button_close,
	.read = button_read,
	.poll = button_pool,
	.fasync = button_fasync,
};

static struct cdev *cdev_button;
static struct class *button_class;


static int __init s3c6410_button_init(void)
{
	int val;

	//设置定时器
	init_timer(&button_timer);
	button_timer.function = buttons_timer_func;
	add_timer(&button_timer);

	//信号量
	sema_init(&button_lock, 1);
	
	//注册设备驱动
	val = alloc_chrdev_region(&devid, 0, 1, DEVICE_NAME);
	if (val)
	{
		printk(KERN_ALERT "Register Orient_Button error\n");
		return -1;
	}
	
	cdev_button = cdev_alloc();
	cdev_init(cdev_button, &button_ops);
	cdev_button->owner = THIS_MODULE;
	cdev_button->ops   = &button_ops;

	val = cdev_add(cdev_button, devid, 1);
	if (val)
	{
		printk(KERN_ALERT "add devicce error\n");
		return -1;
	}

	button_class = class_create(THIS_MODULE, DEVICE_NAME);
	device_create(button_class, NULL, devid, NULL, "%s",DEVICE_NAME);

	printk(KERN_ALERT "Button initialezed\n");
	return 0;
}

static void __exit s3c6410_button_exit(void)
{
	cdev_del(cdev_button);
	device_destroy(button_class, devid);
	class_destroy(button_class);
	unregister_chrdev_region(devid, 1);
}

module_init(s3c6410_button_init);
module_exit(s3c6410_button_exit);

MODULE_AUTHOR("Orient.Lu");
MODULE_DESCRIPTION("TQ6410s fro my gradutionproject-2015");
MODULE_LICENSE("GPL");


