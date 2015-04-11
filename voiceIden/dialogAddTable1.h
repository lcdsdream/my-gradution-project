/****************************************************************************
 ** object : 弹出菜单 -- TABLE1 添加添加一项
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#ifndef DIALOG_ADD_TABLE1_20150409_DEF
#define DIALOG_ADD_TABLE1_20150409_DEF

#include "ui_dialogAddTable1.h"
//#include "TQInputMethod.h"
//#include <QWSInputMethod>

class DialogAddTable1 : public QDialog
{
	Q_OBJECT
public :
	DialogAddTable1(QWidget *parent = 0);
	~DialogAddTable1();
	QString getItemText(int num) const;
	
public slots :
	void btQuitPushed();
	void btAddConfirmPushed();
	void btRecordFinishedPushed();
	void btRecordStartPushed();
	void leChanged(const QString &text);
signals :
	void cancel();         //取消操作
	void operateConfirm(); //确定写入
	void startRecord();    //开始录音
	void finishRecord();   //结束录音
	
private:
	Ui::DialogAddTable1 *ui;
//	QWSInputMethod *im;

};

#endif 

