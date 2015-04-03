/*******************************************************************************

********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "imageIden.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("WenQuanYi"));

	ImageIden ii;
	ii.show();
	return app.exec();
}
