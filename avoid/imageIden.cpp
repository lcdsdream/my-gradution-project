/****************************************************************************
 ** object : ImageIden 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::ImageIden : public Ui_ImageIden {}
 ** ImageIden 
 ****************************************************************************/

#include <QtGui>
#include <QPixmap>
#include <QRect>
#include <QApplication>
#include <QDesktopWidget> 
#include <QPalette>
#include <iostream>
#include "configureMainWindow.h"
using namespace std;
ImageIden::ImageIden(QWidget *parent):
	QMainWindow(parent),
	ui(new Ui::ImageIden) //Ui namespace ,not this 
{
	ui->setupUi(this);
	
	//设置背景图
	QRect screen_size = QApplication::desktop()->screenGeometry(); //get window size
	QPixmap pix("../picture/background.jpg", 0, Qt::AutoColor);
	pix = pix.scaled(screen_size.width(), screen_size.height(), Qt::IgnoreAspectRatio); //photo size
	QPalette palette;
	palette.setBrush(backgroundRole(), QBrush(pix));
	setPalette(palette);

//按钮背景
	ui->buttonQuit->setText("");
	ui->buttonQuit->setFixedSize(100,100);
	ui->buttonQuit->setIconSize(QSize(100,100));
	pix.load("../picture/quit.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 100, Qt::IgnoreAspectRatio);
	ui->buttonQuit->setIcon(QIcon(pix));
	
//备用按钮失能
	ui->buttonBA1->setEnabled(false);
	ui->buttonBA2->setEnabled(false);
	ui->buttonBA3->setEnabled(false);

/*
//set button font color
	palette.setColor(QPalette::ButtonText, Qt::white);
	ui->buttonVoice->setPalette(palette);
	ui->buttonVoice->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::white);
	ui->buttonImage->setPalette(palette);
	ui->buttonImage->setFlat(true);
	
	palette.setColor(QPalette::ButtonText, Qt::white);
	ui->buttonAvoid->setPalette(palette);
	ui->buttonAvoid->setFlat(true);
	
	palette.setColor(QPalette::ButtonText, Qt::white);
	ui->buttonPlan->setPalette(palette);
	ui->buttonPlan->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonRemote->setPalette(palette);
	ui->buttonRemote->setFlat(true);
	
	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonBA1->setPalette(palette);
	ui->buttonBA1->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonBA2->setPalette(palette);
	ui->buttonBA2->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonFileManage->setPalette(palette);
	ui->buttonFileManage->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonLocal->setPalette(palette);
	ui->buttonLocal->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonQuit->setPalette(palette);
	ui->buttonQuit->setFlat(true);

	palette.setColor(QPalette::ButtonText, Qt::black);
	ui->buttonBA3->setPalette(palette);
	ui->buttonBA3->setFlat(true);
*/
	palette.setColor(QPalette::WindowText, Qt::white);
	ui->label->setPalette(palette);

//signal and slots
	connect(ui->buttonVoice, SIGNAL(clicked()),
		this, SLOT(buttonVoicePressed()));

	connect(&process, SIGNAL(finished(int, QProcess::ExitStatus)),
		this, SLOT(processFinished(int, QProcess::ExitStatus)));


}

ImageIden::~ImageIden()
{
	delete ui;
}

