/****************************************************************************
 ** object : 弹出菜单 -- TABLE1 修改项目
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#ifndef DIALOG_MODIFY_TABLE1_20150412_DEF
#define DIALOG_MODIFY_TABLE1_20150412_DEF

#include "ui_dialogModifyTable1.h"

class DialogModifyTable1 : public QDialog
{
	Q_OBJECT
public :
	DialogModifyTable1(QWidget *parent = 0);
	~DialogModifyTable1();
	QString getItemText(int num) const;
	void setItemText(const QString &string, int item);
	bool isVoiceRecordChecked();

public slots :
	void btQuitPushed();
	void btModifyConfirmPushed();
	void btRecordFinishedPushed();
	void btRecordStartPushed();
	void leChanged(const QString &text);
	void voiceRecordCheckChanged(int);

signals :
	void cancel();         //取消操作
	void operateConfirm(); //确定写入
	void startRecord();    //开始录音
	void finishRecord();   //结束录音
	
private:
	Ui::DialogModifyTable1 *ui;

};

#endif 

