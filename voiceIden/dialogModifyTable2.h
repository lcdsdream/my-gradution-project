/****************************************************************************
 ** object : 弹出菜单 -- TABLE2 修改项目
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#ifndef DIALOG_MODIFY_TABLE2_20150411_DEF
#define DIALOG_MODIFY_TABLE2_20150411_DEF

#include "ui_dialogModifyTable2.h"

class DialogModifyTable2 : public QDialog
{
	Q_OBJECT
public :
	DialogModifyTable2(QWidget *parent = 0);
	~DialogModifyTable2();
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
	Ui::DialogModifyTable2 *ui;

};

#endif 

