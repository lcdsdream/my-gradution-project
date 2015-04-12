/****************************************************************************
 ** object : PlanRoad 
 ** 毕业设计三级菜单　路径规划
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
	QMainWindow(parent),
	ui(new Ui::PlanRoad), //Ui namespace ,not this 
	m_getImg(new QImage)
{
	ui->setupUi(this);
	
	m_originCoords[0] = 0, m_originCoords[1] = 0;
	m_destinationCoords[0] = 100, m_destinationCoords[1] = 100;
	
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
	connect(ui->actionFromFile, SIGNAL(triggered()), this, SLOT(loadPicture()));
	connect(ui->actionBuildMap, SIGNAL(triggered()), this, SLOT(buildMap()));
	connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(btQuitPushed()));
	
	connect(ui->buttonQuit, SIGNAL(clicked()), this, SLOT(btQuitPushed()));
	connect(ui->btCreatePath, SIGNAL(clicked()), this, SLOT(btCreatePathPushed()));
	connect(ui->btSetBlock, SIGNAL(clicked()), this, SLOT(btSetBlockPushed()));
	connect(ui->btSetOrigin, SIGNAL(clicked()), this, SLOT(btSetOriginPushed()));
	connect(ui->btSetX, SIGNAL(clicked()), this, SLOT(btSetXPushed()));
	connect(ui->btDestination, SIGNAL(clicked()), this, SLOT(btDestinationPushed()));
	connect(ui->btFree, SIGNAL(clicked()), this, SLOT(btFreePushed()));
	connect(ui->btLocation, SIGNAL(clicked()), this, SLOT(btLocationPushed()));
	
	

	m_getImg->load("/opt/gb_ms/picture/dt.jpg");
	*m_getImg = m_getImg->scaled(QSize(300,350), Qt::IgnoreAspectRatio); //photo size
	ui->labelPicture->setPixmap(QPixmap::fromImage(*m_getImg));
	
}

PlanRoad::~PlanRoad()
{
	delete ui;
	delete m_getImg;

}

void PlanRoad::loadPicture()
{
	QString fileName;

	fileName = QFileDialog::getOpenFileName(this, trUtf8("选择图像"), "",
					tr("Images(*.png *.bmp *.jpg *.tif *.GIF)"));
	if (fileName.isEmpty())
		return;
	else
	{
		if ( !( m_getImg->load(fileName) ) )
		{
			QMessageBox::information(this,
					tr("Open img error"),
					tr("Open img error!"));
			return;
		}
		*m_getImg = m_getImg->scaled(QSize(300,350), Qt::IgnoreAspectRatio); //photo size
		ui->labelPicture->setPixmap(QPixmap::fromImage(*m_getImg));
	}
}

void PlanRoad::buildMap()
{
	cout << "bm" << endl;
}


void PlanRoad::btQuitPushed()
{
	emit returned();
	close();
}


void PlanRoad::btCreatePathPushed()
{
	cout << "cp" << endl;
}

void PlanRoad::btSetBlockPushed()
{
	cout << "sb" << endl;

}

void PlanRoad::btSetOriginPushed()
{
	cout << "so" << endl;

}

void PlanRoad::btSetXPushed()
{
	cout << "sx" << endl;

}


void PlanRoad::btDestinationPushed()
{
	cout << "d" << endl;
	m_destinationCoords[0] +=5;
	m_destinationCoords[1] +=10;
	QString st = "(";
	st.append(QString::number(m_destinationCoords[0]));
	st.append(",");
	st.append(QString::number(m_destinationCoords[1]));
	st.append(")");
	ui->labelDestination->setText(st);

}

void PlanRoad::btFreePushed()
{
	cout << "f" << endl;

}

void PlanRoad::btLocationPushed()
{
	cout << "l" << endl;
	m_originCoords[0] +=10;
	m_originCoords[1] +=5;
	QString st = "(";
	st.append(QString::number(m_originCoords[0]));
	st.append(",");
	st.append(QString::number(m_originCoords[1]));
	st.append(")");
	ui->labelOrigin->setText(st);
}



