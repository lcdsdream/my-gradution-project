/****************************************************************************
 ** object : LocalSet 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::LocalSet : public Ui_LocalSet {}
 ** LocalSet 
 ****************************************************************************/
#ifndef LOCALSET_20150403_DEF
#define LOCALSET_20150403_DEF

#include "ui_localSet.h"
#include <QWSInputMethod> 
#include "TQInputMethod.h" 

class LocalSet : public QWidget
{
	Q_OBJECT
public :
	explicit LocalSet(QWidget *parent = 0);
	~LocalSet();
	
	

public slots :
	void buttonQuitPushed();
	void RemoteSetCheckBoxStatusChanged(int state); //远程设置开关设置

signals :
	void returned();
	
	
private:
	Ui::LocalSet *ui;
	QWSInputMethod *im;
	void initRemoteSetStatus(); //读取设置远程开关初始状态

};


#endif 

