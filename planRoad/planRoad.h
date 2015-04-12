/****************************************************************************
 ** object : PlanRoad 
 ** 毕业设计三级菜单 路径规划
 ** by luchaodong
 ** class Ui::PlanRoad : public Ui_PlanRoad {}
 ** PlanRoad 
 ****************************************************************************/
#ifndef PLANROAD_20150412_DEF
#define PLANRODA_20150412_DEF
#include "ui_planRoad.h"

class PlanRoad : public QMainWindow
{
	Q_OBJECT
public :
	explicit PlanRoad(QWidget *parent = 0);
	~PlanRoad();
	
public slots :
	void loadPicture();
	void buildMap();
	
	void btQuitPushed();
	void btCreatePathPushed();
	void btSetBlockPushed();
	void btSetOriginPushed();
	void btSetXPushed();

	void btDestinationPushed();
	void btFreePushed();
	void btLocationPushed();


signals :
	void returned();

private:
	Ui::PlanRoad *ui;
	QImage *m_getImg;  //load picture from file
	int m_originCoords[2];
	int m_destinationCoords[2];

};

#endif 

