/****************************************************************************
 ** object : PlanRoad 
 ** 毕业设计三级菜单　图像识别
 ** by luchaodong
 ** class Ui::PlanRoad : public Ui_PlanRoad {}
 ** PlanRoad 
 ****************************************************************************/
#ifndef PLAN_ROAD_20150404_DEF
#define PLAN_ROAD_20150404_DEF

#include "ui_planRoad.h"

class PlanRoad : public QWidget
{
	Q_OBJECT
public :
	explicit PlanRoad(QWidget *parent = 0);
	~PlanRoad();
	

public slots :
	void buttonQuitPushed();
	void buttonBuildMapPushed();
	void buttonDestinationPushed();
	void buttonPathPushed();
	void buttonSetLocationPushed();

signals :
	void returned();


private:
	Ui::PlanRoad *ui;


};


#endif 

