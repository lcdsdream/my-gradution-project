/*
 *	���ò˵���������, ��ť��������
 *	��������,��̨
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

	/*�����ӽ��̲����ͻ�������*/
	char *const ps_argv[] = {NULL};


	/*�򿪰�ť�����豸*/
	fd = open("/dev/orientButton", 0);
	if (fd <0)
	{
		perror("Unable to open the devive orientbutton");
		return -1;
	}

	
	while (1)
	{
		/*�ȴ���ť��������*/
		val = read(fd, (char*)&key_value, sizeof(key_value));
		if (val < 0)
		{
			printf("Read error\n");
			continue;
		}
		if (key_value)
		{
			/*��ť��������,�������ý���*/
			pid = fork(); //�����ӽ���
			if (pid < 0)
			{
				perror("Fork failed");
				continue;
			}
			
			if (pid == 0) //chiled;
			{
				/*�������ò˵�*/
				execv("/bin/lcdrs", ps_argv);
				perror("Exec ps error");
				continue;
			}
			else
			{
				//����,�ȴ��ӽ����˳�
				wait(NULL); 

			}
	
		}
	}
	close(fd);
	return 0;
}
