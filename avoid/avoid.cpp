/****************************************************************************
 ** object : Avoid 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::Avoid : public Ui_Avoid {}
 ** Avoid 
 ****************************************************************************/

#include <QtGui>
#include <QPixmap>
#include <QRect>
#include <QApplication>
#include <QDesktopWidget> 
#include <QPalette>
#include <iostream>
#include "avoid.h"
using namespace std;
Avoid::Avoid(QWidget *parent):
	QTabWidget(parent),
	ui(new Ui::Avoid) //Ui namespace ,not this 
{
	ui->setupUi(this);
	
	m_bKeyShow = false;
	im = new TQInputMethod; //输入发
	QWSServer::setCurrentInputMethod(im);
	((TQInputMethod*) im)->setVisible(m_bKeyShow);

	//设置背景图
	QRect screen_size = QApplication::desktop()->screenGeometry(); //get window size
	QPixmap pix("/opt/gb_ms/picture/background_1.jpg", 0, Qt::AutoColor);
	pix = pix.scaled(screen_size.width(), screen_size.height(), Qt::IgnoreAspectRatio); //photo size
	QPalette palette;
	palette.setBrush(backgroundRole(), QBrush(pix));
	setPalette(palette);

//按钮背景
	ui->buttonQuit1->setText("");
	ui->buttonQuit1->setFixedSize(81,32);
	ui->buttonQuit1->setIconSize(QSize(81,32));
	pix.load("/opt/gb_ms/picture/return.png", 0, Qt::AutoColor);
	pix = pix.scaled(81, 32, Qt::IgnoreAspectRatio);
	ui->buttonQuit1->setIcon(QIcon(pix));

	ui->buttonQuit2->setText("");
	ui->buttonQuit2->setFixedSize(81,32);
	ui->buttonQuit2->setIconSize(QSize(81,32));
	pix.load("/opt/gb_ms/picture/return.png", 0, Qt::AutoColor);
	pix = pix.scaled(81, 32, Qt::IgnoreAspectRatio);
	ui->buttonQuit2->setIcon(QIcon(pix));

	ui->buttonUp->setText("");
	ui->buttonUp->setFixedSize(100,60);
	ui->buttonUp->setIconSize(QSize(100,60));
	pix.load("/opt/gb_ms/picture/button_up.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 60, Qt::IgnoreAspectRatio);
	ui->buttonUp->setIcon(QIcon(pix));

	ui->buttonDown->setText("");
	ui->buttonDown->setFixedSize(100,60);
	ui->buttonDown->setIconSize(QSize(100,60));
	pix.load("/opt/gb_ms/picture/button_down.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 60, Qt::IgnoreAspectRatio);
	ui->buttonDown->setIcon(QIcon(pix));

	ui->buttonRight->setText("");
	ui->buttonRight->setFixedSize(100,60);
	ui->buttonRight->setIconSize(QSize(100,60));
	pix.load("/opt/gb_ms/picture/button_right.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 60, Qt::IgnoreAspectRatio);
	ui->buttonRight->setIcon(QIcon(pix));

	ui->buttonLeft->setText("");
	ui->buttonLeft->setFixedSize(100,60);
	ui->buttonLeft->setIconSize(QSize(100,60));
	pix.load("/opt/gb_ms/picture/button_left.png", 0, Qt::AutoColor);
	pix = pix.scaled(100, 60, Qt::IgnoreAspectRatio);
	ui->buttonLeft->setIcon(QIcon(pix));


	ui->buttonSetSpeed->setText("");
	ui->buttonSetSpeed->setFixedSize(75, 45);
	ui->buttonSetSpeed->setIconSize(QSize(75, 45));
	pix.load("/opt/gb_ms/picture/confirm.png", 0, Qt::AutoColor);
	pix = pix.scaled(75, 45, Qt::IgnoreAspectRatio);
	ui->buttonSetSpeed->setIcon(QIcon(pix));

	ui->buttonSetDirectionAngle->setText("");
	ui->buttonSetDirectionAngle->setFixedSize(75, 45);
	ui->buttonSetDirectionAngle->setIconSize(QSize(75, 45));
	pix.load("/opt/gb_ms/picture/confirm.png", 0, Qt::AutoColor);
	pix = pix.scaled(75, 45, Qt::IgnoreAspectRatio);
	ui->buttonSetDirectionAngle->setIcon(QIcon(pix));

	ui->buttonSetSafeDis->setText("");
	ui->buttonSetSafeDis->setFixedSize(75, 45);
	ui->buttonSetSafeDis->setIconSize(QSize(75, 45));
	pix.load("/opt/gb_ms/picture/confirm.png", 0, Qt::AutoColor);
	pix = pix.scaled(75, 45, Qt::IgnoreAspectRatio);
	ui->buttonSetSafeDis->setIcon(QIcon(pix));

	ui->buttonLoad->setText("");
	ui->buttonLoad->setFixedSize(75, 45);
	ui->buttonLoad->setIconSize(QSize(75, 45));
	pix.load("/opt/gb_ms/picture/read.png", 0, Qt::AutoColor);
	pix = pix.scaled(75, 45, Qt::IgnoreAspectRatio);
	ui->buttonLoad->setIcon(QIcon(pix));

	ui->buttonDownload->setText("");
	ui->buttonDownload->setFixedSize(75, 45);
	ui->buttonDownload->setIconSize(QSize(75, 45));
	pix.load("/opt/gb_ms/picture/down.png", 0, Qt::AutoColor);
	pix = pix.scaled(75, 45, Qt::IgnoreAspectRatio);
	ui->buttonDownload->setIcon(QIcon(pix));

//signal and slots
	connect(ui->buttonQuit1, SIGNAL(clicked()),
		this, SLOT(quitAvoid()) );
	connect(ui->buttonQuit2, SIGNAL(clicked()),
		this, SLOT(quitAvoid()) );

	connect(ui->buttonUp, SIGNAL(clicked()),
		this, SLOT(ctrlUp()) );
	connect(ui->buttonDown, SIGNAL(clicked()),
		this, SLOT(ctrlDown()) );
	connect(ui->buttonLeft,  SIGNAL(clicked()),
		this, SLOT(ctrlLeft()) );
	connect(ui->buttonRight, SIGNAL(clicked()),
		this, SLOT(ctrlRight()) );

	connect(ui->buttonStop, SIGNAL(clicked()),
		this, SLOT(ctrlStop()) );
	connect(ui->buttonSpin, SIGNAL(clicked()),
		this, SLOT(ctrlSpin()) );

	connect(ui->buttonTrack, SIGNAL(clicked()),
		this, SLOT(ctrlTrack()) );
	connect(ui->buttonVoiceTrack, SIGNAL(clicked()),
		this, SLOT(ctrlVoiceTrack()) );
	connect(ui->buttonInit, SIGNAL(clicked()),
		this, SLOT(ctrlInit()) );


	connect(ui->buttonSetSpeed, SIGNAL(clicked()),
		this, SLOT(setSpeed()) );
	connect(ui->buttonSetDirectionAngle, SIGNAL(clicked()),
		this, SLOT(setDirectionAngle()) );

	connect(ui->buttonSetSafeDis, SIGNAL(clicked()),
		this, SLOT(setSafeDistance()) );
	connect(ui->buttonLoad, SIGNAL(clicked()),
		this, SLOT(loadProgram()) );
	connect(ui->buttonDownload, SIGNAL(clicked()),
		this, SLOT(downloadProgram()) );
	connect(ui->buttonEreasure, SIGNAL(clicked()),
		this, SLOT(programEreasure()) );
	

}

Avoid::~Avoid()
{
	delete ui;
	delete im;
}

void Avoid::quitAvoid()
{
	emit returned();
	close();
}
	
void Avoid::ctrlUp()
{
	cout << "Up" << endl;

}

void Avoid::ctrlDown()
{
	cout << "Down" << endl;

}

void Avoid::ctrlLeft()
{
	cout << "Left" << endl;

}

void Avoid::ctrlRight()
{
	cout << "Right" << endl;

}

void Avoid::ctrlStop()
{
	cout << "Stop" << endl;

}

void Avoid::ctrlSpin()
{
	cout << "Spin" << endl;

}

void Avoid::ctrlTrack()
{
	cout << "Track" << endl;

}

void Avoid::ctrlVoiceTrack()
{
	cout << "Voide Track" << endl;

}

void Avoid::ctrlInit()
{
	cout << "Init " << endl;

}


void Avoid::setSpeed()
{
	cout << "SetSpeed" << endl;
	int leftSpeed, rightSpeed;
	leftSpeed = ui->spinBoxLeftSpeed->value();
	rightSpeed = ui->spinBoxRightSpeed->value();

	cout << leftSpeed  << "  " << rightSpeed << endl; 



}


//设置方向角
void Avoid::setDirectionAngle()
{
	cout << "setDirection Angle" << endl;
	int dirAngle = ui->spinBoxDirectionAngle->value();
	cout << dirAngle << endl;


}

//设置安全距离
void Avoid::setSafeDistance()
{
	cout << "setSafeDistance" << endl;
	int safeDis = ui->spinBoxSafeDis->value();
	cout << safeDis << endl;
}

void Avoid::loadProgram()
{
	cout << "Load Program" << endl;
	m_loadFileName = QFileDialog::getOpenFileName(this, tr("Open download file"), "", 
							tr("BIN(*.bin *.hex *)"));
	
	if (m_loadFileName.isEmpty())
		return;
	ui->lineEditLoadFilePath->setText(m_loadFileName);

}

void Avoid::downloadProgram()
{
	cout << "Download" << endl;
}

void Avoid::programEreasure()
{
	cout << "Ereasure" << endl;
}
