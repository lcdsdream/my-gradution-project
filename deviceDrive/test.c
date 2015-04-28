
#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <sys/ioctl.h>

int main(int argc, char *argv[])
{
	int fd;
	int val;
	int i;
	int key_value;

	fd = open("/dev/orientButton",0);
	if (fd<0)
	{
		printf("open error\n");
		return;
	}

	while (1)
	{
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
