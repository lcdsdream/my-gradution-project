/****************************************************************************
 ** object : ConfigureMainWindow 
 ** 毕业设计二级菜单　配置界面
 ** by luchaodong
 ** class ConfigureMainWindow: public Ui_ConfigureMainWindow {}
 ****************************************************************************/
#ifndef CONFIGURE_MAIN_WINDOW_201503_DEF
#define CONFIGURE_MAIN_WINDOW_201503_DEF
#include <QProcess>

#include "ui_configureMainWindow.h"

class ConfigureMainWindow : public QMainWindow
{
	Q_OBJECT
public :
	explicit ConfigureMainWindow(QWidget *parent = 0);
	~ConfigureMainWindow();
	
	void processLauncher(const QString &program, const QStringList &arguments);

public slots :
	void buttonVoicePressed();
	void buttonImagePressed();
	void buttonAvoidPressed();
	void buttonPlanPressed();
	void buttonRemotePressed();
	void buttonBA1Pressed();
	void buttonBA2Pressed();
	void buttonFileManagePressed();
	void buttonLocalPressed();
	void buttonQuitPressed();
	void buttonBA3Pressed();

	void processFinished(int exitCode, QProcess::ExitStatus exitStatus);

private:
	Ui::ConfigureMainWindow *ui;
	QProcess process;
};


#endif 

