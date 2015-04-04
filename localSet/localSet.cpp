/****************************************************************************
 ** object : LocalSet 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::LocalSet : public Ui_LocalSet {}
 ** LocalSet 
 ****************************************************************************/

#include <QtGui>
#include <QPixmap>
#include <QRect>
#include <QApplication>
#include <QDesktopWidget> 
#include <QPalette>
#include <iostream>
#include "localSet.h"


using namespace std;
LocalSet::LocalSet(QWidget *parent):
	QMainWindow(parent),
	ui(new Ui::LocalSet) //Ui namespace ,not this 
{
	ui->setupUi(this);
	
	//设置背景图
	QRect screen_size = QApplication::desktop()->screenGeometry(); //get window size
	QPixmap pix("/opt/gb_ms/picture/background_1.jpg", 0, Qt::AutoColor);
	pix = pix.scaled(screen_size.width(), screen_size.height(), Qt::IgnoreAspectRatio); //photo size
	QPalette palette;
	palette.setBrush(backgroundRole(), QBrush(pix));
	setPalette(palette);

//按钮背景
	ui->buttonQuit->setText("");
	ui->buttonQuit->setFixedSize(100,100);
	ui->buttonQuit->setIconSize(QSize(100,100));
	pix.load("/opt/gb_ms/picture/return.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 100, Qt::IgnoreAspectRatio);
	ui->buttonQuit->setIcon(QIcon(pix));
	





}

LocalSet::~LocalSet()
{
	delete ui;
}

