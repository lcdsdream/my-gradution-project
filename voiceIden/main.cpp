/*******************************************************************************
20150405 lcd
********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "voiceIden.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("wqy-microhei"));
	VoiceIden vi;
	vi.show();
	return app.exec();
}
