/****************************************************************************
 ** object : 弹出菜单 -- TABLE2 修改项目
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#include <QtGui>
#include <iostream>
#include "dialogModifyTable2.h"

using namespace std;

DialogModifyTable2::DialogModifyTable2(QWidget *parent):
	QDialog(parent),
	ui(new Ui::DialogModifyTable2)//Ui namespace ,not this 
{
	ui->setupUi(this);

	ui->checkBox->setCheckState(Qt::Checked);
	ui->btModifyConfirm->setEnabled(false);
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(false);
	
	connect(ui->btQuit, SIGNAL(clicked()),
		this, SLOT(btQuitPushed()));
	connect(ui->btModifyConfirm, SIGNAL(clicked()),
		this, SLOT(btModifyConfirmPushed()));
	connect(ui->btRecordFinish, SIGNAL(clicked()),
		this, SLOT(btRecordFinishedPushed()));
	connect(ui->btRecordStart, SIGNAL(clicked()),
		this, SLOT(btRecordStartPushed()));
	
	connect(ui->lineEditItem0, SIGNAL(textChanged(const QString&)),
		this, SLOT(leChanged(const QString&)));
	connect(ui->lineEditItem1, SIGNAL(textChanged(const QString&)),
		this, SLOT(leChanged(const QString&)));
	connect(ui->lineEditItem2, SIGNAL(textChanged(const QString&)),
		this, SLOT(leChanged(const QString&)));
	connect(ui->checkBox, SIGNAL(stateChanged(int)),
		this, SLOT(voiceRecordCheckChanged(int)));
}

DialogModifyTable2::~DialogModifyTable2()
{
	delete ui;
}



QString DialogModifyTable2::getItemText(int num) const
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

void DialogModifyTable2::setItemText(const QString &string, int item)
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

void DialogModifyTable2::btQuitPushed()
{
	emit cancel();
}

void DialogModifyTable2::btModifyConfirmPushed()
{
	emit operateConfirm(); 
}

void DialogModifyTable2::btRecordFinishedPushed()
{
	emit finishRecord();
	ui->btRecordFinish->setEnabled(false);
	ui->btRecordStart->setEnabled(true);
	ui->btModifyConfirm->setEnabled(true);
}

void DialogModifyTable2::btRecordStartPushed()
{
	emit startRecord();
	ui->btRecordFinish->setEnabled(true);
	ui->btRecordStart->setEnabled(false);
	ui->btModifyConfirm->setEnabled(false);
}

void DialogModifyTable2::leChanged(const QString &text)
{
	Q_UNUSED(text);
	if (ui->lineEditItem0->text().length() == 0 || 
		ui->lineEditItem1->text().length() == 0 ||
		ui->lineEditItem2->text().length() == 0)
	{
		ui->btModifyConfirm->setEnabled(false);
		ui->btRecordFinish->setEnabled(false);
		ui->btRecordStart->setEnabled(false);
	}	
	else
	{
		if (ui->checkBox->isChecked())	
			ui->btRecordStart->setEnabled(true);
		else
			ui->btModifyConfirm->setEnabled(true);		
	}
}


bool DialogModifyTable2::isVoiceRecordChecked()
{
	return ui->checkBox->isChecked();
}


void DialogModifyTable2::voiceRecordCheckChanged(int state)
{
	Q_UNUSED(state);
	if (ui->checkBox->isChecked())
	{
		ui->btRecordFinish->setEnabled(false);
		ui->btRecordStart->setEnabled(true);
	}
	else
	{
		ui->btRecordFinish->setEnabled(false);
		ui->btRecordStart->setEnabled(false);
		leChanged(NULL);
	}
}
