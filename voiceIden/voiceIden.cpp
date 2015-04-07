/****************************************************************************
 ** object : VoiceIden 
 ** 毕业设计三级菜单　远程设置
 ** by luchaodong
 ** class Ui::VoiceIden : public Ui_VoiceIden {}
 ** VoiceIden 
 ****************************************************************************/

#include <QtGui>
#include <QPixmap>
#include <QRect>
#include <QApplication>
#include <QDesktopWidget> 
#include <QPalette>
#include <iostream>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>

#include "voiceIden.h"
using namespace std;

QSqlDatabase g_db;

VoiceIden::VoiceIden(QWidget *parent):
	QWidget(parent),
	ui(new Ui::VoiceIden),//Ui namespace ,not this 
	im(new TQInputMethod), m_newRow(0)
{
	ui->setupUi(this);

	ui->tableWidgetOne->setColumnWidth(0, 150);
	ui->tableWidgetOne->setColumnWidth(1, 200);

	ui->tableWidgetTwo->setColumnWidth(0, 110);
	ui->tableWidgetTwo->setColumnWidth(1, 110);
	ui->tableWidgetTwo->setColumnWidth(2, 110);

	
	//input
//	im = new TQInputMethod;
	QWSServer::setCurrentInputMethod(im);
	((TQInputMethod*)im)->setVisible(false);

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
	
	//信号 槽
	connect(ui->buttonQuit, SIGNAL(clicked()),
		this, SLOT(buttonQuitPushed()));
	
	connect(ui->buttonAdd, SIGNAL(clicked()),
		this, SLOT(buttonAddPushed()));

	connect(ui->buttonDelete, SIGNAL(clicked()),
		this, SLOT(buttonDeletePushed()));

	connect(ui->buttonEdit, SIGNAL(clicked()),
		this, SLOT(buttonEditPushed()));

	connect(ui->buttonSureWrite, SIGNAL(clicked()),
		this, SLOT(buttonSureWritePushed()));
//数据库建立连接
	g_db = QSqlDatabase::addDatabase("QSQLITE", "voiceIden");
	g_db.setDatabaseName("voice.db");
	if ( !g_db.open() )
	{
		QMessageBox::critical(NULL, QObject::trUtf8("无法打开数据库\n"),
			QObject::trUtf8("退出请按下yes"), QMessageBox::Yes,
				QMessageBox::No);
	}
	else
	{
		//read from database
		readDatabaseTableOne();
		readDatabaseTableTwo();
	}
}

VoiceIden::~VoiceIden()
{
	//disconnect with database 
	g_db.close();
	QString dbName = QSqlDatabase::database().connectionName();
	QSqlDatabase::removeDatabase(dbName);

	delete ui;
	delete im;
}

void VoiceIden::buttonQuitPushed()
{
	emit returned();
	close();
}

void VoiceIden::buttonAddPushed()
{
	cout << "add one item to WidgetTableOne" << endl; 
	
	m_newRow = ui->tableWidgetOne->rowCount();
	ui->tableWidgetOne->insertRow(m_newRow);
	ui->tableWidgetOne->setRowCount(m_newRow+1);	
	ui->tableWidgetOne->setCurrentCell(m_newRow, 0); //定位到新增加的行

}
	
void VoiceIden::buttonSureWritePushed()
{
	if (m_newRow == 0 || ui->tableWidgetOne->item(m_newRow, 0)->text().length() == 0 		|| ui->tableWidgetOne->item(m_newRow, 1)->text().length() == 0 )
	{
		return;
	}

	cout << "write the change to database's table1" << endl;
	//qDebug() << ui->tableWidgetOne->item(m_newRow, 0)->text() ;	
	//qDebug() << ui->tableWidgetOne->item(m_newRow, 1)->text() ;	
	
	QSqlQuery query(g_db);
	query.prepare("insert into table1 (Iden, shuoming) values(?,?)");
	query.bindValue(0, ui->tableWidgetOne->item(m_newRow, 0)->text());
	query.bindValue(1, ui->tableWidgetOne->item(m_newRow, 1)->text());
	query.exec();

	m_newRow = 0;
//	readDatabaseTableOne();
}


void VoiceIden::buttonDeletePushed()
{
	
	int r = QMessageBox::warning(this, tr("Confirm To Delete"), 
		tr("This execution will delete an item \n"
			"which you have choose from the database\n"
			"Are you sure ?"), QMessageBox::Yes | QMessageBox::No);
	
	if (r == QMessageBox::No)
		return;

	int iRow = ui->tableWidgetOne->currentRow();

	if (iRow < 0 || iRow >= ui->tableWidgetOne->rowCount())
	{
		QMessageBox::warning(this, tr("Edit Error"), 
			tr("No Item has been chose!"), QMessageBox::Yes);

		return;
	}

	cout << "delete one item from WidgettableOne and database's table one" << endl;
	QSqlQuery query(g_db);
	query.prepare("delete FROM table1 where Iden=?");
	query.bindValue(0,
			ui->tableWidgetOne->item(iRow, 0)->text());
	query.exec();
	ui->tableWidgetOne->removeRow(iRow);
}


void VoiceIden::buttonEditPushed()
{
	cout << "edit table two" << endl;

	
	int iRow = ui->tableWidgetTwo->currentRow();	
	//qDebug() << iRow;

	if (iRow < 0 || iRow >= ui->tableWidgetTwo->rowCount())
	{
		QMessageBox::warning(this, tr("Edit Error"), 
			tr("No Item has been chose!"), QMessageBox::Yes);

		return;
	}

	QSqlQuery query(g_db);
	query.prepare("update table2 set shibie1=?,hecheng=?,shibie2=? where id=?"); 
	query.bindValue(0, ui->tableWidgetTwo->item(iRow, 0)->text());
	query.bindValue(1, ui->tableWidgetTwo->item(iRow, 1)->text());
	query.bindValue(2, ui->tableWidgetTwo->item(iRow, 2)->text());
	query.bindValue(3, QString::number(iRow+1));	
	query.exec();

}


void VoiceIden::readDatabaseTableOne()
{
	QSqlQuery query(g_db);
	query.prepare("SELECT * FROM table1");
	if( query.exec())
	{
		int iRow = 0;
		//table's item 
		int iden = query.record().indexOf("Iden");
		int shuoming = query.record().indexOf("Shuoming");
		while( query.next())
		{
			ui->tableWidgetOne->setRowCount(iRow+1);

			ui->tableWidgetOne->setItem(iRow, 0,
				new QTableWidgetItem(query.value(iden).toString()));

			ui->tableWidgetOne->setItem(iRow, 1,
				new QTableWidgetItem(query.value(shuoming).toString()));
			
			iRow++;
		}
	}
}

void VoiceIden::readDatabaseTableTwo()
{
	QSqlQuery query(g_db);
	query.prepare("SELECT * FROM table2");
	if (query.exec())
	{
		int iRow = 0;
		int shibie_1 = query.record().indexOf("shibie1");
		int hecheng = query.record().indexOf("hecheng");
		int shibie_2 = query.record().indexOf("shibie2");
		while (query.next())
		{
			ui->tableWidgetTwo->setRowCount(iRow+1);
			ui->tableWidgetTwo->setItem(iRow, 0,
				new QTableWidgetItem(query.value(shibie_1).toString()));

			ui->tableWidgetTwo->setItem(iRow, 1,
				new QTableWidgetItem(query.value(hecheng).toString()));

			ui->tableWidgetTwo->setItem(iRow, 2,
				new QTableWidgetItem(query.value(shibie_2).toString()));
			
			iRow++;
		}
	}

}


