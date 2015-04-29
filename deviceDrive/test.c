/*
 *  驱动测试用
 *  lcd at jnu 
 *  lcdsdream@126.com
 *  20150428
 */

#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <sys/ioctl.h>


int main(int argc, char *argv[])
{
	int fd;
	int val;
	int key_value;

	fd = open("/dev/orientButton",0);
	if (fd<0)
	{
		printf("open error\n");
		return;
	}

	while (1)
	{
		/*对应驱动添加外部中断个数*/
		val = read(fd, (char*)&key_value, sizeof(key_value));
		
		printf("----------\n");
		if(val < 0)
		{
			printf("read error\n");
			continue;
		}
		if (key_value)
			printf("Keey pressed %d\n", key_value);
		
	}

	close(fd);
	return 0;
}
