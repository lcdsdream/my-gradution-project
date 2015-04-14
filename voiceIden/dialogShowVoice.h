/****************************************************************************
 ** object : 弹出菜单 -- 语音识别
 ** 毕业设计
 ** by luchaodong 
 ****************************************************************************/
#ifndef DIALOG_SHOWVOICE_20150414_DEF
#define DIALOG_SHOWVOICE_20150414_DEF

#include "ui_dialogShowVoice.h"

class DialogShowVoice : public QDialog
{
	Q_OBJECT
public :
	DialogShowVoice(QWidget *parent = 0);
	~DialogShowVoice();

	void setText(QString &string);

public slots :
	void btRecordFinishedPushed();
	void btRecordStartPushed();
signals :
	void startRecord();    //开始录音
	void finishRecord();   //结束录音
	
private:
	Ui::DialogShowVoice *ui;

};

#endif 

