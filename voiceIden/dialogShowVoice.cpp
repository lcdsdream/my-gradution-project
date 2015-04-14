/****************************************************************************
 ** object : 弹出菜单 -- 语音识别显示
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#include <QtGui>
#include <iostream>
#include "dialogShowVoice.h"

using namespace std;

DialogShowVoice::DialogShowVoice(QWidget *parent):
	QDialog(parent),
	ui(new Ui::DialogShowVoice)//Ui namespace ,not this 
{
	ui->setupUi(this);

	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(true);
	
	connect(ui->btRecordFinish, SIGNAL(clicked()),
		this, SLOT(btRecordFinishedPushed()));
	connect(ui->btRecordStart, SIGNAL(clicked()),
		this, SLOT(btRecordStartPushed()));
}


DialogShowVoice::~DialogShowVoice()
{
	delete ui;
}



void DialogShowVoice::setText(QString &string)
{
	ui->label->setText(string);
}


void DialogShowVoice::btRecordFinishedPushed()
{
	emit finishRecord();
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(true);
}


void DialogShowVoice::btRecordStartPushed()
{
	emit startRecord();
	ui->btRecordFinish->setEnabled(true);
	ui->btRecordStart->setEnabled(false);
}


