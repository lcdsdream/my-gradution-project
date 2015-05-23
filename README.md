
 *		 	机器人图形菜单系统
 ========
 *  	陆潮东 2015年毕业设计<br> 
 * 	20150204<br> 
 */
主要说明：
----------
(1).平台基于qt开发<br> 
	具体版本： Qt 4.5.0<br> 
(2).最终移植嵌入式平台<br> 
	TQ6410<br> 

文件说明 ：
----------
	configureMainWindow           #主界面， 用于装载子模块<br> 
	configureMainWindowv1.0	      #附带驱动触发，测试用<br> 
	avoid			      #运动控制模块<br> 
	imageIden		      #图形识别模块<br> 
	localSet		      #系统设置模块<br> 
	planRoad		      #运动控制模块<br> 
	useByTaoImageIden	      #华滔图像采集系统用<br> 
	voiceIden	              #语音识别模块<br> 
	deviceDrive		      #按钮驱动<br> 
	startFork		      #按钮中断触发启动配置界面程序<br> 
	lcdrs			      #arm qt启动配置脚本<br> 
	libTQInputMethod.so	      #天嵌键盘库<br> 
	TQInputMethod.h		      #天嵌键盘头文件<br> 
	wqy-microhei.ttc              #字体库<br> 
	picture			      #图片资源<br> 
	.gitignore		      #git 过滤<br> 
	README.md		      #说明文档 即本文<br> 
	tags			      #ctags 记录<br> 
	
如何使用 ：
----------
	系统通过主配置界面模块读取可执行文件创建进程的形式启动其他子模块，每一个模块单独编译一个可执行文件，系统设置目录/opt/gb_ms/（具体见configureMainWindow文件目录下configureMainWindow.cpp）<br> 
	
	目标平台/opt/gb_ms/picture放置图片资源，/opt/gb_ms/app/放置可执行文件，其他qt库文件等童年tq环境一致，通过脚本lcdrs可以启动系统<br> 
	
	模块编译 ：
	文件中附带修改过的工程文件.pro，若添加其他文件，可以对应修改工程文件中。
	执行 ：qmake   # qmake是对应嵌入式平台的qmake，生成平台的makefile
	执行 ：make    # 生成可执行文件， 复制到对应目录即可
	
	驱动编译 ：
	参考TQ手册，加入内核树， make module 即可
	开机insmod 加载，无需手动创建设备文件。
	
	
/********************************************************************************************************/









