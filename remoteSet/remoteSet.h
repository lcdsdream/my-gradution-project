/****************************************************************************
 ** object : RemoteSet 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::RemoteSet : public Ui_RemoteSet {}
 ** RemoteSet 
 ****************************************************************************/
#ifndef LOCALSET_20150403_DEF
#define LOCALSET_20150403_DEF

#include "ui_remoteSet.h"

class RemoteSet : public QWidget
{
	Q_OBJECT
public :
	explicit RemoteSet(QWidget *parent = 0);
	~RemoteSet();
	
	

public slots :
	void buttonQuitPushed();

signals :
	void returned();
	
	
private:
	Ui::RemoteSet *ui;


};


#endif 

