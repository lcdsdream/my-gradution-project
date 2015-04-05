/****************************************************************************
 ** object : PlanRoad 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::PlanRoad : public Ui_PlanRoad {}
 ** PlanRoad 
 ****************************************************************************/

#include <QtGui>
#include <QPixmap>
#include <QRect>
#include <QApplication>
#include <QDesktopWidget> 
#include <QPalette>
#include <iostream>
#include "planRoad.h"

using namespace std;

PlanRoad::PlanRoad(QWidget *parent):
	QWidget(parent),
	ui(new Ui::PlanRoad) //Ui namespace ,not this 
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
	ui->buttonQuit->setFixedSize(81,32);
	ui->buttonQuit->setIconSize(QSize(81,32));
	pix.load("/opt/gb_ms/picture/return.png", 0, Qt::AutoColor);
	pix = pix.scaled(81, 32, Qt::IgnoreAspectRatio);
	ui->buttonQuit->setIcon(QIcon(pix));

//signal and slots
	connect(ui->buttonQuit, SIGNAL(clicked()),
		this, SLOT(buttonQuitPushed()));
	connect(ui->buttonSetLocation, SIGNAL(clicked()),
		this, SLOT(buttonSetLocationPushed()));	
	connect(ui->buttonDestination, SIGNAL(clicked()),
		this, SLOT(buttonDestinationPushed()));
	connect(ui->buttonPath, SIGNAL(clicked()),
		this, SLOT(buttonPathPushed()));
	connect(ui->buttonBuildMap, SIGNAL(clicked()),
		this, SLOT(buttonBuildMapPushed()));
}

PlanRoad::~PlanRoad()
{
	delete ui;
}

void PlanRoad::buttonQuitPushed()
{
	emit returned();
	close();
}

void PlanRoad::buttonBuildMapPushed()
{
	cout << "Build Map" << endl;
}

void PlanRoad::buttonDestinationPushed()
{
	cout << "Destination" << endl;
}

void PlanRoad::buttonPathPushed()
{
	cout << "Path" << endl;
}

void PlanRoad::buttonSetLocationPushed()
{
	cout << "Set location" << endl;
}

