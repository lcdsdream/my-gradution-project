/*******************************************************************************
20150403 lcd 
********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "avoid.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	//app.setFont(QFont("WenQuanYi"));
	Avoid ad;
	ad.show();
	return app.exec();
}
