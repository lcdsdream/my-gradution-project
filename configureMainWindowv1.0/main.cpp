/*******************************************************************************

********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "configureMainWindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("WenQuanYi"));
	ConfigureMainWindow mw;
	mw.show();
	return app.exec();
}
