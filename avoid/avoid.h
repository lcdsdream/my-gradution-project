/***************************************************************************
 ** 	object : Avoid 
 **	��ҵ��������˵����˶�����ģ��
 ** by luchaodong
 ** class Ui::Avoid : public Ui_Avoid {}
 ** Avoid 
 ****************************************************************************/
#ifndef AVOID_20150403_DEF
#define AVOID_20150403_DEF

#include "TQInputMethod.h"
#include <QWSInputMethod>
#include "ui_avoid.h"


class Avoid : public QTabWidget
{
	Q_OBJECT
public :
	explicit Avoid(QWidget *parent = 0);
	~Avoid();
	
	

public slots :
	void quitAvoid(); //�˳�

	//�˶�����
	void ctrlUp();
	void ctrlDown();
	void ctrlLeft();
	void ctrlRight();
	void ctrlStop();
	void ctrlSpin();

	void ctrlTrack(); 	//Ŀ�����
	void ctrlVoiceTrack();  //��������
	void ctrlInit(); 	//ֹͣ/����
	
	void voiceCtrl();	//��������
	void wallTrack();	//��������
	void lineTrack();	//ѭ������
	void remoteCtrl();	//ң�ؿ���

	void setSpeed(); 
	void setDirectionAngle();
	void setSafeDistance();

	void loadProgram();
	void downloadProgram();
	void programEreasure();

signals :
 	void returned();

private:
	Ui::Avoid *ui;
	QWSInputMethod *im; //����ؼ�
	bool m_bKeyShow;    //������ʾ 
	QString m_loadFileName;
};


#endif 

