/*******************************************************************************

********************************************************************************/

#include <QApplication>
#include <QTextCodec>
#include "planRoad.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);	

	app.setFont(QFont("wqy-microhei"));
	PlanRoad pr;
	pr.show();
	return app.exec();
}
