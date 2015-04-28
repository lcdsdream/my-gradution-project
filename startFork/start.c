/*
 *	配置菜单启动代码, 按钮触发启动
 *	启动运行,后台
 * 	lcd 20140428
 * 	lcdsdream@126.com
 */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <sys/wait.h>


int main(void)
{
	pid_t pid;
	int fd;
	int val, key_value;

	/*调用子进程参数和环境设置*/
	char *const ps_argv[] = {NULL};


	/*打开按钮驱动设备*/
	fd = open("/dev/orientButton", 0);
	if (fd <0)
	{
		perror("Unable to open the devive orientbutton");
		return -1;
	}

	
	while (1)
	{
		/*等待按钮驱动触发*/
		val = read(fd, (char*)&key_value, sizeof(key_value));
		if (val < 0)
		{
			printf("Read error\n");
			continue;
		}
		if (key_value)
		{
			/*按钮驱动触发,产生配置进程*/
			pid = fork(); //产生子进程
			if (pid < 0)
			{
				perror("Fork failed");
				continue;
			}
			
			if (pid == 0) //chiled;
			{
				/*启动配置菜当*/
				execv("/bin/lcdrs", ps_argv);
				perror("Exec ps error");
				continue;
			}
			else
			{
				//休眠,等待子进程退出
				wait(NULL); 

			}
	
		}
	}
	close(fd);
	return 0;
}
