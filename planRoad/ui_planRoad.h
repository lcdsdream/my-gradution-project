/********************************************************************************
** Form generated from reading ui file 'planRoad.ui'
**
** Created: Thu Apr 23 14:33:06 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PLANROAD_H
#define UI_PLANROAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanRoad
{
public:
    QAction *actionIden;
    QAction *actionZuoqu;
    QAction *actionXunliang;
    QAction *actionFromFile;
    QAction *actionCatch;
    QAction *actionTrain;
    QAction *actionFace;
    QAction *actionDigit;
    QAction *actionQuit;
    QAction *actionAa;
    QAction *actionBuildMap;
    QWidget *centralwidget;
    QPushButton *buttonQuit;
    QLabel *labelPicture;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btSetOrigin;
    QPushButton *btSetX;
    QPushButton *btSetBlock;
    QPushButton *btCreatePath;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btLocation;
    QPushButton *btDestination;
    QPushButton *btFree;
    QLabel *labelOrigin;
    QLabel *labelDestination;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *PlanRoad)
    {
        if (PlanRoad->objectName().isEmpty())
            PlanRoad->setObjectName(QString::fromUtf8("PlanRoad"));
        PlanRoad->resize(788, 450);
        PlanRoad->setMaximumSize(QSize(800, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        PlanRoad->setFont(font);
        actionIden = new QAction(PlanRoad);
        actionIden->setObjectName(QString::fromUtf8("actionIden"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        actionIden->setFont(font1);
        actionZuoqu = new QAction(PlanRoad);
        actionZuoqu->setObjectName(QString::fromUtf8("actionZuoqu"));
        actionXunliang = new QAction(PlanRoad);
        actionXunliang->setObjectName(QString::fromUtf8("actionXunliang"));
        actionFromFile = new QAction(PlanRoad);
        actionFromFile->setObjectName(QString::fromUtf8("actionFromFile"));
        actionFromFile->setFont(font1);
        actionCatch = new QAction(PlanRoad);
        actionCatch->setObjectName(QString::fromUtf8("actionCatch"));
        actionCatch->setFont(font1);
        actionTrain = new QAction(PlanRoad);
        actionTrain->setObjectName(QString::fromUtf8("actionTrain"));
        actionTrain->setFont(font1);
        actionFace = new QAction(PlanRoad);
        actionFace->setObjectName(QString::fromUtf8("actionFace"));
        actionFace->setCheckable(true);
        actionFace->setChecked(true);
        actionFace->setFont(font1);
        actionDigit = new QAction(PlanRoad);
        actionDigit->setObjectName(QString::fromUtf8("actionDigit"));
        actionDigit->setCheckable(true);
        actionDigit->setFont(font1);
        actionQuit = new QAction(PlanRoad);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setFont(font1);
        actionAa = new QAction(PlanRoad);
        actionAa->setObjectName(QString::fromUtf8("actionAa"));
        actionBuildMap = new QAction(PlanRoad);
        actionBuildMap->setObjectName(QString::fromUtf8("actionBuildMap"));
        actionBuildMap->setFont(font1);
        centralwidget = new QWidget(PlanRoad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonQuit = new QPushButton(centralwidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setGeometry(QRect(680, 350, 81, 32));
        QFont font2;
        font2.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font2.setBold(false);
        font2.setWeight(50);
        buttonQuit->setFont(font2);
        labelPicture = new QLabel(centralwidget);
        labelPicture->setObjectName(QString::fromUtf8("labelPicture"));
        labelPicture->setGeometry(QRect(20, 20, 300, 350));
        labelPicture->setFont(font2);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(360, 55, 131, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btSetOrigin = new QPushButton(verticalLayoutWidget);
        btSetOrigin->setObjectName(QString::fromUtf8("btSetOrigin"));
        btSetOrigin->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btSetOrigin);

        btSetX = new QPushButton(verticalLayoutWidget);
        btSetX->setObjectName(QString::fromUtf8("btSetX"));
        btSetX->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btSetX);

        btSetBlock = new QPushButton(verticalLayoutWidget);
        btSetBlock->setObjectName(QString::fromUtf8("btSetBlock"));
        btSetBlock->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btSetBlock);

        btCreatePath = new QPushButton(verticalLayoutWidget);
        btCreatePath->setObjectName(QString::fromUtf8("btCreatePath"));
        btCreatePath->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(btCreatePath);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(530, 50, 121, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btLocation = new QPushButton(verticalLayoutWidget_2);
        btLocation->setObjectName(QString::fromUtf8("btLocation"));
        btLocation->setMinimumSize(QSize(100, 50));

        verticalLayout_2->addWidget(btLocation);

        btDestination = new QPushButton(verticalLayoutWidget_2);
        btDestination->setObjectName(QString::fromUtf8("btDestination"));
        btDestination->setMinimumSize(QSize(100, 50));

        verticalLayout_2->addWidget(btDestination);

        btFree = new QPushButton(verticalLayoutWidget_2);
        btFree->setObjectName(QString::fromUtf8("btFree"));
        btFree->setMinimumSize(QSize(100, 50));

        verticalLayout_2->addWidget(btFree);

        labelOrigin = new QLabel(centralwidget);
        labelOrigin->setObjectName(QString::fromUtf8("labelOrigin"));
        labelOrigin->setGeometry(QRect(660, 90, 121, 41));
        QFont font3;
        font3.setPointSize(17);
        labelOrigin->setFont(font3);
        labelDestination = new QLabel(centralwidget);
        labelDestination->setObjectName(QString::fromUtf8("labelDestination"));
        labelDestination->setGeometry(QRect(660, 170, 121, 41));
        labelDestination->setFont(font3);
        PlanRoad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PlanRoad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 788, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        PlanRoad->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionFromFile);
        menuFile->addAction(actionBuildMap);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(PlanRoad);

        QMetaObject::connectSlotsByName(PlanRoad);
    } // setupUi

    void retranslateUi(QMainWindow *PlanRoad)
    {
        PlanRoad->setWindowTitle(QApplication::translate("PlanRoad", "\350\267\257\345\276\204\350\247\204\345\210\222", 0, QApplication::UnicodeUTF8));
        actionIden->setText(QApplication::translate("PlanRoad", "\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionZuoqu->setText(QApplication::translate("PlanRoad", "zhuqu", 0, QApplication::UnicodeUTF8));
        actionXunliang->setText(QApplication::translate("PlanRoad", "xunliang", 0, QApplication::UnicodeUTF8));
        actionFromFile->setText(QApplication::translate("PlanRoad", "\350\275\275\345\205\245\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
        actionCatch->setText(QApplication::translate("PlanRoad", "\346\215\225\350\216\267", 0, QApplication::UnicodeUTF8));
        actionTrain->setText(QApplication::translate("PlanRoad", "\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        actionFace->setText(QApplication::translate("PlanRoad", "\344\272\272\350\204\270\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionFace->setIconText(QApplication::translate("PlanRoad", "\344\272\272\350\204\270\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionDigit->setText(QApplication::translate("PlanRoad", "\346\225\260\345\255\227\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("PlanRoad", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        actionAa->setText(QApplication::translate("PlanRoad", "aa", 0, QApplication::UnicodeUTF8));
        actionBuildMap->setText(QApplication::translate("PlanRoad", "\345\212\250\346\200\201\345\234\260\345\233\276", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("PlanRoad", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        labelPicture->setText(QString());
        btSetOrigin->setText(QApplication::translate("PlanRoad", "\350\256\276\347\275\256\345\216\237\347\202\271", 0, QApplication::UnicodeUTF8));
        btSetX->setText(QApplication::translate("PlanRoad", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264", 0, QApplication::UnicodeUTF8));
        btSetBlock->setText(QApplication::translate("PlanRoad", "\350\256\276\347\275\256\351\232\234\347\242\215\347\211\251", 0, QApplication::UnicodeUTF8));
        btCreatePath->setText(QApplication::translate("PlanRoad", "\347\224\237\346\210\220\350\267\257\347\272\277", 0, QApplication::UnicodeUTF8));
        btLocation->setText(QApplication::translate("PlanRoad", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
        btDestination->setText(QApplication::translate("PlanRoad", "\347\233\256\347\232\204\345\234\260", 0, QApplication::UnicodeUTF8));
        btFree->setText(QApplication::translate("PlanRoad", "\350\207\252\347\224\261", 0, QApplication::UnicodeUTF8));
        labelOrigin->setText(QApplication::translate("PlanRoad", "(0, 1)", 0, QApplication::UnicodeUTF8));
        labelDestination->setText(QApplication::translate("PlanRoad", "(20,90)", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("PlanRoad", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlanRoad: public Ui_PlanRoad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANROAD_H
