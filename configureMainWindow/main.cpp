/*******************************************************************************

********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "configureMainWindow.h"

extern "C"
{
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("WenQuanYi"));
	ConfigureMainWindow mw;
	
	int fd;
	int val;
	int key_value;
	fd = ::open("/dev/orientButton",0);
	if (fd<0)
	{
		printf("open error\n");
		return -1;
	}

	//按钮驱动
	while(1)
	{
		val = read(fd, (char*)&key_value, sizeof(key_value));
		if(val < 0)
		{
			printf("read error\n");
			continue;
		}
		if (key_value)
		{
			mw.show();
			app.exec();
		}
	}
	::close(fd);
	return 0;
}

}
