/********************************************************************************
** Form generated from reading ui file 'configureMainWindow.ui'
**
** Created: Thu Apr 2 15:53:27 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CONFIGUREMAINWINDOW_H
#define UI_CONFIGUREMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureMainWindow
{
public:
    QAction *action;
    QAction *action_4;
    QWidget *centralwidget;
    QPushButton *buttonVoice;
    QPushButton *buttonImage;
    QPushButton *buttonAvoid;
    QPushButton *buttonPlan;
    QPushButton *buttonRemote;
    QPushButton *buttonBA1;
    QPushButton *buttonBA2;
    QPushButton *buttonFileManage;
    QPushButton *buttonLocal;
    QPushButton *buttonQuit;
    QLabel *label;
    QPushButton *buttonBA3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConfigureMainWindow)
    {
        if (ConfigureMainWindow->objectName().isEmpty())
            ConfigureMainWindow->setObjectName(QString::fromUtf8("ConfigureMainWindow"));
        ConfigureMainWindow->resize(798, 478);
        action = new QAction(ConfigureMainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_4 = new QAction(ConfigureMainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        centralwidget = new QWidget(ConfigureMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonVoice = new QPushButton(centralwidget);
        buttonVoice->setObjectName(QString::fromUtf8("buttonVoice"));
        buttonVoice->setEnabled(true);
        buttonVoice->setGeometry(QRect(120, 120, 100, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        buttonVoice->setFont(font);
        buttonVoice->setIconSize(QSize(24, 24));
        buttonImage = new QPushButton(centralwidget);
        buttonImage->setObjectName(QString::fromUtf8("buttonImage"));
        buttonImage->setGeometry(QRect(250, 120, 100, 60));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        buttonImage->setFont(font1);
        buttonImage->setIconSize(QSize(24, 24));
        buttonAvoid = new QPushButton(centralwidget);
        buttonAvoid->setObjectName(QString::fromUtf8("buttonAvoid"));
        buttonAvoid->setGeometry(QRect(310, 220, 100, 60));
        buttonAvoid->setFont(font1);
        buttonAvoid->setIconSize(QSize(24, 24));
        buttonPlan = new QPushButton(centralwidget);
        buttonPlan->setObjectName(QString::fromUtf8("buttonPlan"));
        buttonPlan->setGeometry(QRect(50, 220, 100, 60));
        buttonPlan->setFont(font1);
        buttonPlan->setIconSize(QSize(24, 24));
        buttonRemote = new QPushButton(centralwidget);
        buttonRemote->setObjectName(QString::fromUtf8("buttonRemote"));
        buttonRemote->setGeometry(QRect(490, 120, 100, 60));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonRemote->sizePolicy().hasHeightForWidth());
        buttonRemote->setSizePolicy(sizePolicy);
        buttonRemote->setFont(font1);
        buttonRemote->setIconSize(QSize(24, 24));
        buttonBA1 = new QPushButton(centralwidget);
        buttonBA1->setObjectName(QString::fromUtf8("buttonBA1"));
        buttonBA1->setEnabled(true);
        buttonBA1->setGeometry(QRect(620, 120, 100, 60));
        buttonBA1->setFont(font1);
        buttonBA1->setIconSize(QSize(24, 24));
        buttonBA2 = new QPushButton(centralwidget);
        buttonBA2->setObjectName(QString::fromUtf8("buttonBA2"));
        buttonBA2->setEnabled(true);
        buttonBA2->setGeometry(QRect(620, 220, 100, 60));
        buttonBA2->setFont(font1);
        buttonBA2->setIconSize(QSize(24, 24));
        buttonFileManage = new QPushButton(centralwidget);
        buttonFileManage->setObjectName(QString::fromUtf8("buttonFileManage"));
        buttonFileManage->setGeometry(QRect(120, 320, 100, 60));
        buttonFileManage->setFont(font1);
        buttonFileManage->setIconSize(QSize(24, 24));
        buttonLocal = new QPushButton(centralwidget);
        buttonLocal->setObjectName(QString::fromUtf8("buttonLocal"));
        buttonLocal->setGeometry(QRect(250, 320, 100, 60));
        buttonLocal->setFont(font1);
        buttonLocal->setIconSize(QSize(24, 24));
        buttonQuit = new QPushButton(centralwidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setEnabled(true);
        buttonQuit->setGeometry(QRect(550, 300, 100, 100));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        buttonQuit->setFont(font2);
        buttonQuit->setIconSize(QSize(24, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 30, 231, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Serif"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label->setFont(font3);
        buttonBA3 = new QPushButton(centralwidget);
        buttonBA3->setObjectName(QString::fromUtf8("buttonBA3"));
        buttonBA3->setEnabled(true);
        buttonBA3->setGeometry(QRect(490, 220, 100, 60));
        buttonBA3->setFont(font1);
        buttonBA3->setIconSize(QSize(24, 24));
        ConfigureMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ConfigureMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConfigureMainWindow->setStatusBar(statusbar);

        retranslateUi(ConfigureMainWindow);

        QMetaObject::connectSlotsByName(ConfigureMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigureMainWindow)
    {
        ConfigureMainWindow->setWindowTitle(QApplication::translate("ConfigureMainWindow", "JNU-EE", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("ConfigureMainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("ConfigureMainWindow", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        buttonVoice->setText(QApplication::translate("ConfigureMainWindow", "\350\257\255\351\237\263\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        buttonImage->setText(QApplication::translate("ConfigureMainWindow", "\345\233\276\345\203\217\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        buttonAvoid->setText(QApplication::translate("ConfigureMainWindow", "\350\277\220\345\212\250\351\201\277\351\232\234", 0, QApplication::UnicodeUTF8));
        buttonPlan->setText(QApplication::translate("ConfigureMainWindow", "\350\267\257\345\276\204\350\247\204\345\210\222", 0, QApplication::UnicodeUTF8));
        buttonRemote->setText(QApplication::translate("ConfigureMainWindow", "\350\277\234\347\250\213\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        buttonBA1->setText(QApplication::translate("ConfigureMainWindow", "\345\244\207\347\224\2501.0", 0, QApplication::UnicodeUTF8));
        buttonBA2->setText(QApplication::translate("ConfigureMainWindow", "\345\244\207\347\224\2502.0", 0, QApplication::UnicodeUTF8));
        buttonFileManage->setText(QApplication::translate("ConfigureMainWindow", "\346\226\207\344\273\266\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        buttonLocal->setText(QApplication::translate("ConfigureMainWindow", "\346\234\254\345\234\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("ConfigureMainWindow", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConfigureMainWindow", "\345\244\232\345\212\237\350\203\275\346\234\272\345\231\250\344\272\272", 0, QApplication::UnicodeUTF8));
        buttonBA3->setText(QApplication::translate("ConfigureMainWindow", "\345\244\207\347\224\2503.0", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ConfigureMainWindow);
    } // retranslateUi

};

namespace Ui {
    class ConfigureMainWindow: public Ui_ConfigureMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREMAINWINDOW_H
