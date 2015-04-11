/****************************************************************************
 ** object : ConfigureMainWindow 
 ** 毕业设计二级菜单　配置界面
 ** by luchaodong
 ** class Ui::ConfigureMainWindow: public Ui_ConfigureMainWindow {}
 ** ConfigureMainWindow 
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

ConfigureMainWindow::ConfigureMainWindow(QWidget *parent):
	QMainWindow(parent),
	ui(new Ui::ConfigureMainWindow) //Ui namespace ,not this 
{
	ui->setupUi(this);

  im = new TQInputMethod;
  QWSServer::setCurrentInputMethod(im);
  ((TQInputMethod*)im)->setVisible(false);

	//设置背景图
	QRect screen_size = QApplication::desktop()->screenGeometry(); //get window size
	QPixmap pix("/opt/gb_ms/picture/background.jpg", 0, Qt::AutoColor);
	pix = pix.scaled(screen_size.width(), screen_size.height(), Qt::IgnoreAspectRatio); //photo size
	QPalette palette;
	palette.setBrush(backgroundRole(), QBrush(pix));
	setPalette(palette);

//按钮背景
	ui->buttonQuit->setText("");
	ui->buttonQuit->setFixedSize(81,32);
	ui->buttonQuit->setIconSize(QSize(81,32));
	pix.load("/opt/gb_ms/picture/exit.png", 0, Qt::AutoColor);
	pix = pix.scaled(81, 32, Qt::IgnoreAspectRatio);
	ui->buttonQuit->setIcon(QIcon(pix));
	
//备用按钮失能
	ui->buttonBA0->setEnabled(false);
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
	connect(ui->buttonImage, SIGNAL(clicked()),
		this, SLOT(buttonImagePressed()));
	connect(ui->buttonAvoid, SIGNAL(clicked()),
		this, SLOT(buttonAvoidPressed()));
	connect(ui->buttonPlan, SIGNAL(clicked()),
		this, SLOT(buttonPlanPressed()));
	connect(ui->buttonBA0, SIGNAL(clicked()),
		this, SLOT(buttonBA0Pressed()));
	connect(ui->buttonBA1, SIGNAL(clicked()),
		this, SLOT(buttonBA1Pressed()));
	connect(ui->buttonBA2, SIGNAL(clicked()),
		this, SLOT(buttonBA2Pressed()));
	connect(ui->buttonFileManage, SIGNAL(clicked()),
		this, SLOT(buttonFileManagePressed()));
	connect(ui->buttonLocal, SIGNAL(clicked()),
		this, SLOT(buttonLocalPressed()));
	connect(ui->buttonQuit, SIGNAL(clicked()),
		this, SLOT(buttonQuitPressed()));
	connect(ui->buttonBA3, SIGNAL(clicked()),
		this, SLOT(buttonBA3Pressed()));

	connect(&process, SIGNAL(finished(int, QProcess::ExitStatus)),
		this, SLOT(processFinished(int, QProcess::ExitStatus)));

	process.setProcessChannelMode(QProcess::ForwardedChannels);
	qDebug() << process.workingDirectory();
	process.setWorkingDirectory("/opt/gb_ms/app/");
}

ConfigureMainWindow::~ConfigureMainWindow()
{
	delete ui;
	delete im;
}

void ConfigureMainWindow::buttonVoicePressed()
{
	cout << "voiceIden" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/voiceIden", argList);
}

void ConfigureMainWindow::buttonImagePressed()
{
	cout << "imageIden" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/imageIden", argList);

}

void ConfigureMainWindow::buttonAvoidPressed()
{
	cout << "avoid" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/avoid", argList);

}

void ConfigureMainWindow::buttonPlanPressed()
{
	cout << "planRoad" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/planRoad", argList);

}

void ConfigureMainWindow::buttonBA0Pressed()
{
	cout << "BA0" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/ba0", argList);

}

void ConfigureMainWindow::buttonBA1Pressed()
{
	cout << "ba1" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/ba1", argList);
}

void ConfigureMainWindow::buttonBA2Pressed()
{
	cout << "ba2" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/ba2", argList);

}

void ConfigureMainWindow::buttonFileManagePressed()
{
	cout << "fileManage" << endl;
	QStringList argList;
	processLauncher("/opt/gb_ms/app/fileManage", argList);
}

void ConfigureMainWindow::buttonLocalPressed()
{
	cout << "localSet" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/localSet", argList);

}

void ConfigureMainWindow::buttonQuitPressed()
{
	emit quited();
	close();
}

void ConfigureMainWindow::buttonBA3Pressed()
{
	cout << "ba3" << endl;
	QStringList argList;
	//argList << "-al";
	processLauncher("/opt/gb_ms/app/ba3", argList);

}


void ConfigureMainWindow::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
	Q_UNUSED(exitCode);
	Q_UNUSED(exitStatus);
	show();
}

void ConfigureMainWindow::processLauncher(const QString &program, const QStringList &arguments)
{
	
	process.start(program, arguments);
	if ( process.waitForStarted(10000) != true )
	{
		QMessageBox::warning(this, tr("Process Error"), tr("Can\'t start the process"), QMessageBox::Yes);
		show();
		return;
	}
	
	hide();
//	process.waitForFinished(-1);  //block until the process is finished, never timeout
}


