/****************************************************************************
 ** object : 弹出菜单 -- TABLE2 添加添加一项
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#include <QtGui>
#include <iostream>
#include "dialogAddTable2.h"

using namespace std;

DialogAddTable2::DialogAddTable2(QWidget *parent):
	QDialog(parent),
	ui(new Ui::DialogAddTable2)//Ui namespace ,not this 
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

DialogAddTable2::~DialogAddTable2()
{
	delete ui;
}



QString DialogAddTable2::getItemText(int num) const
{
	QString str; 
	switch(num)
	{
		case 0 : str = ui->lineEditItem0->text();
			break;
		case 1 : str = ui->lineEditItem1->text();
			break;
		case 2 : str = ui->lineEditItem2->text();
		default : 
			break;
	}
	return str;
}

void DialogAddTable2::setItemText(const QString &string, int item)
{
	switch(item)
	{
		case 0 : ui->lineEditItem0->setText(string);
			break;
		case 1 : ui->lineEditItem1->setText(string);
			break;
		case 2 : ui->lineEditItem2->setText(string);
		default : 
			break;
	}
}

void DialogAddTable2::btQuitPushed()
{
	emit cancel();
}

void DialogAddTable2::btAddConfirmPushed()
{
	emit operateConfirm(); 
}

void DialogAddTable2::btRecordFinishedPushed()
{
	emit finishRecord();
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(true);
	ui->btAddConfirm->setEnabled(true);
}

void DialogAddTable2::btRecordStartPushed()
{
	emit startRecord();
	ui->btRecordFinish->setEnabled(true);
	ui->btRecordStart->setEnabled(false);
	ui->btAddConfirm->setEnabled(false);
}

void DialogAddTable2::leChanged(const QString &text)
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



