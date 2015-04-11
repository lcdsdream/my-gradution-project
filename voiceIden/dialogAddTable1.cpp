/****************************************************************************
 ** object : 弹出菜单 -- TABLE1 添加添加一项
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#include <QtGui>
#include <iostream>
#include "dialogAddTable1.h"

using namespace std;

DialogAddTable1::DialogAddTable1(QWidget *parent):
	QDialog(parent),
	ui(new Ui::DialogAddTable1)//Ui namespace ,not this 
{
	ui->setupUi(this);

//	im = new TQInputMethod;
//	QWSServer::setCurrentInputMethod(im);
//	((TQInputMethod*)im)->setVisible(false);

	ui->btAddConfirm->setEnabled(false);
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(false);
	
	connect(ui->btQuit, SIGNAL(clicked()),
		this, SLOT(btQuitPushed()));
	connect(ui->btAddConfirm, SIGNAL(clicked()),
		this, SLOT(btAddConfirmPushed()));
	connect(ui->btRecordFinish, SIGNAL(clicked()),
		this, SLOT(btRecordFinishedPushed()));
	connect(ui->btRecordStart, SIGNAL(clicked()),
		this, SLOT(btRecordStartPushed()));
/*	connect(ui->lineEditItem1, SIGNAL(selectionChanged()),
		this, SLOT(leChanged()));
	connect(ui->lineEditItem2, SIGNAL(selectionChanged()),
		this, SLOT(leChanged()));
*/	connect(ui->lineEditItem0, SIGNAL(textChanged(const QString&)),
		this, SLOT(leChanged(const QString&)));
	connect(ui->lineEditItem1, SIGNAL(textChanged(const QString&)),
		this, SLOT(leChanged(const QString&)));

}

DialogAddTable1::~DialogAddTable1()
{
	delete ui;
}



QString DialogAddTable1::getItemText(int num) const
{
	QString str; 
	switch(num)
	{
		case 0 : str = ui->lineEditItem0->text();
			break;
		case 1 : str = ui->lineEditItem1->text();
			break;
		default : 
			break;
	}
	return str;
}

void DialogAddTable1::btQuitPushed()
{
	emit cancel();
}

void DialogAddTable1::btAddConfirmPushed()
{
	emit operateConfirm(); 
}

void DialogAddTable1::btRecordFinishedPushed()
{
	emit finishRecord();
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(true);
	ui->btAddConfirm->setEnabled(true);
}

void DialogAddTable1::btRecordStartPushed()
{
	emit startRecord();
	ui->btRecordFinish->setEnabled(true);
	ui->btRecordStart->setEnabled(false);
	ui->btAddConfirm->setEnabled(false);
}

void DialogAddTable1::leChanged(const QString &text)
{
	Q_UNUSED(text);
	if (ui->lineEditItem0->text().length() == 0 || 
		ui->lineEditItem1->text().length() == 0)
	{
		ui->btAddConfirm->setEnabled(false);
		ui->btRecordFinish->setEnabled(false);
		ui->btRecordStart->setEnabled(false);
	}	
	else
	{
		ui->btRecordStart->setEnabled(true);
	}

}

