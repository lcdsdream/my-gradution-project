/*******************************************************************************
20150405 lcd
********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "remoteSet.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("wqy-microhei"));
	RemoteSet rs;
	rs.show();
	return app.exec();
}
