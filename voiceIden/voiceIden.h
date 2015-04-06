/****************************************************************************
 ** object : VoiceIden 
 ** 毕业设计三级菜单　语音识别
 ** by luchaodong
 ** class Ui::VoiceIden : public Ui_VoiceIden {}
 ** VoiceIden 
 ****************************************************************************/
#ifndef VOICEIDEN_20150403_DEF
#define VOICEIDEN_20150403_DEF

#include "ui_voiceIden.h"
#include "TQInputMethod.h"
#include <QWSInputMethod>


class VoiceIden : public QWidget
{
	Q_OBJECT
	public :
	explicit VoiceIden(QWidget *parent = 0);
	~VoiceIden();
	
	

public slots :
	void buttonQuitPushed();  
	void buttonAddPushed(); 
	void buttonDeletePushed();
	void buttonEditPushed();
	void buttonSureWritePushed(); 
signals :
	void returned();
	
	
private:
	Ui::VoiceIden *ui;
	QWSInputMethod *im;
	int m_newRow;
	void readDatabaseTableOne();
	void readDatabaseTableTwo();

};


#endif 

