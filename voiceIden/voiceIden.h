/****************************************************************************
 ** object : VoiceIden 
 ** 毕业设计三级菜单　语音识别
 ** by luchaodong
 ** class Ui::VoiceIden : public Ui_VoiceIden {}
 ** VoiceIden 
 ****************************************************************************/
#ifndef VOICEIDEN_20150403_DEF
#define VOICEIDEN_20150403_DEF

#include "TQInputMethod.h"
#include <QWSInputMethod>
#include "ui_voiceIden.h"

class DialogAddTable1;
class DialogAddTable2;
class DialogModifyTable1;
class DialogModifyTable2;
class DialogShowVoice;

class VoiceIden : public QWidget
{
	Q_OBJECT
	public :
	explicit VoiceIden(QWidget *parent = 0);
	~VoiceIden();
	
public slots :
	void btQuitPushed();  
	void btAddTable1Pushed(); 
	void btDeleteTable1Pushed();
	void btAddTable2Pushed(); 
	void btDeleteTable2Pushed();
	void btVoiceShowPushed();
	void modifyTable1(int, int);
	void modifyTable2(int, int);
	void updateTable2(int currentRow,int currentColumn,int previousRow,int previousColumn);
	
	void setTableOneSelectItem(const QString&);
	void setTableTwoSelectItem(const QString&);

	//数据表操作函数
	void dialogAddTable1Comfirn();
	void dialogAddTable1Cancel();	
	
	void dialogAddTable2Comfirn();
	void dialogAddTable2Cancel();	

	void dialogModifyTable1Comfirn();
	void dialogModifyTable1Cancel();
	
	void dialogModifyTable2Comfirn();
	void dialogModifyTable2Cancel();
	
	//录音操作
	void startedRecordVoice();
	void finishedRecordVoice();

signals :
	void returned();
	
	
private:
	Ui::VoiceIden *ui;
	QWSInputMethod *im;	
	DialogAddTable1 *m_dat1;
	DialogAddTable2 *m_dat2;
	DialogModifyTable1 *m_dmt1;
	DialogModifyTable2 *m_dmt2;
	bool m_isVoiseSource;  //录音资源是否可用
	QString m_currentTable2Name;
	
	void readDatabaseTable1();
	void readDatabaseTable2(QString &tableName);

};


#endif 

