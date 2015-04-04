/*******************************************************************************
20150403 lcd
********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "localSet.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("WenQuanYi"));
	LocalSet ls;
	ls.show();
	return app.exec();
}
