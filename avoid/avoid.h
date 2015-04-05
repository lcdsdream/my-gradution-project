/***************************************************************************
 ** object : Avoid 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::Avoid : public Ui_Avoid {}
 ** Avoid 
 ****************************************************************************/
#ifndef AVOID_20150403_DEF
#define AVOID_20150403_DEF

#include "ui_avoid.h"
#include "TQInputMethod.h"
#include <QWSInputMethod>


class Avoid : public QTabWidget
{
	Q_OBJECT
public :
	explicit Avoid(QWidget *parent = 0);
	~Avoid();
	
	

public slots :
	void quitAvoid(); //退出
	
	void ctrlUp();
	void ctrlDown();
	void ctrlLeft();
	void ctrlRight();
	void ctrlStop();
	void ctrlSpin();

	void ctrlTrack();
	void ctrlVoiceTrack();
	void ctrlInit();
	
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

