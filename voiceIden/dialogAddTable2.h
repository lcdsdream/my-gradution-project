/****************************************************************************
 ** object : 弹出菜单 -- TABLE2 添加添加一项
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#ifndef DIALOG_ADD_TABLE2_20150411_DEF
#define DIALOG_ADD_TABLE2_20150411_DEF

#include "ui_dialogAddTable2.h"
//#include "TQInputMethod.h"
//#include <QWSInputMethod>

class DialogAddTable2 : public QDialog
{
	Q_OBJECT
public :
	DialogAddTable2(QWidget *parent = 0);
	~DialogAddTable2();
	QString getItemText(int num) const;
	void setItemText(const QString &string, int item);
	
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
	Ui::DialogAddTable2 *ui;
//	QWSInputMethod *im;

};

#endif 

