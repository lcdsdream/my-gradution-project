/***************************************************************************
 ** 	object : Avoid 
 **	毕业设计三级菜单　运动控制模块
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
	void quitAvoid(); //退出

	//运动控制
	void ctrlUp();
	void ctrlDown();
	void ctrlLeft();
	void ctrlRight();
	void ctrlStop();
	void ctrlSpin();

	void ctrlTrack(); 	//目标跟踪
	void ctrlVoiceTrack();  //声音跟随
	void ctrlInit(); 	//停止/继续
	
	void voiceCtrl();	//语音控制
	void wallTrack();	//贴壁行走
	void lineTrack();	//循迹行走
	void remoteCtrl();	//遥控控制

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
	QWSInputMethod *im; //输入控件
	bool m_bKeyShow;    //键盘显示 
	QString m_loadFileName;
};


#endif 

