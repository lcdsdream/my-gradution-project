/********************************************************************************
** Form generated from reading ui file 'avoid.ui'
**
** Created: Wed Apr 15 20:14:13 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_AVOID_H
#define UI_AVOID_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Avoid
{
public:
    QWidget *tabCtrl;
    QPushButton *buttonQuit1;
    QLabel *labelTitleCtrl;
    QPushButton *buttonUp;
    QPushButton *buttonDown;
    QPushButton *buttonLeft;
    QPushButton *buttonRight;
    QPushButton *buttonStop;
    QPushButton *buttonSpin;
    QPushButton *buttonTrack;
    QPushButton *buttonVoiceTrack;
    QPushButton *buttonInit;
    QPushButton *buttonRemoteCtrl;
    QPushButton *buttonWallTrack;
    QPushButton *buttonLineTrack;
    QPushButton *buttonVoiceCtrl;
    QWidget *tabSet;
    QPushButton *buttonQuit2;
    QLabel *labelTitleSet;
    QGroupBox *groupBoxSet;
    QSpinBox *spinBoxLeftSpeed;
    QLabel *labelLeftSpeed;
    QLabel *labelRightSpeed;
    QSpinBox *spinBoxRightSpeed;
    QPushButton *buttonSetSpeed;
    QLabel *labelDirectionAngle;
    QPushButton *buttonSetDirectionAngle;
    QPushButton *buttonSetSafeDis;
    QSpinBox *spinBoxDirectionAngle;
    QSpinBox *spinBoxSafeDis;
    QLabel *labelSafeDis;
    QGroupBox *groupBoxDownload;
    QPushButton *buttonLoad;
    QPushButton *buttonDownload;
    QPushButton *buttonEreasure;
    QLabel *labelLoadFile;
    QLineEdit *lineEditLoadFilePath;
    QGroupBox *groupBox;
    QRadioButton *rbt1;
    QRadioButton *rbt2;
    QRadioButton *rbt3;
    QRadioButton *rbt4;
    QRadioButton *rbt5;
    QRadioButton *rbt6;

    void setupUi(QTabWidget *Avoid)
    {
        if (Avoid->objectName().isEmpty())
            Avoid->setObjectName(QString::fromUtf8("Avoid"));
        Avoid->resize(789, 450);
        QFont font;
        font.setPointSize(18);
        Avoid->setFont(font);
        Avoid->setAcceptDrops(false);
        tabCtrl = new QWidget();
        tabCtrl->setObjectName(QString::fromUtf8("tabCtrl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabCtrl->sizePolicy().hasHeightForWidth());
        tabCtrl->setSizePolicy(sizePolicy);
        buttonQuit1 = new QPushButton(tabCtrl);
        buttonQuit1->setObjectName(QString::fromUtf8("buttonQuit1"));
        buttonQuit1->setGeometry(QRect(670, 320, 81, 32));
        buttonQuit1->setFont(font);
        buttonQuit1->setIconSize(QSize(25, 25));
        labelTitleCtrl = new QLabel(tabCtrl);
        labelTitleCtrl->setObjectName(QString::fromUtf8("labelTitleCtrl"));
        labelTitleCtrl->setGeometry(QRect(290, 10, 241, 51));
        labelTitleCtrl->setFont(font);
        buttonUp = new QPushButton(tabCtrl);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));
        buttonUp->setGeometry(QRect(170, 90, 100, 60));
        buttonDown = new QPushButton(tabCtrl);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));
        buttonDown->setGeometry(QRect(170, 190, 100, 60));
        buttonLeft = new QPushButton(tabCtrl);
        buttonLeft->setObjectName(QString::fromUtf8("buttonLeft"));
        buttonLeft->setGeometry(QRect(60, 140, 100, 60));
        buttonRight = new QPushButton(tabCtrl);
        buttonRight->setObjectName(QString::fromUtf8("buttonRight"));
        buttonRight->setGeometry(QRect(280, 140, 100, 60));
        buttonStop = new QPushButton(tabCtrl);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setGeometry(QRect(60, 250, 100, 60));
        buttonSpin = new QPushButton(tabCtrl);
        buttonSpin->setObjectName(QString::fromUtf8("buttonSpin"));
        buttonSpin->setGeometry(QRect(280, 250, 100, 60));
        buttonTrack = new QPushButton(tabCtrl);
        buttonTrack->setObjectName(QString::fromUtf8("buttonTrack"));
        buttonTrack->setGeometry(QRect(440, 90, 141, 60));
        buttonVoiceTrack = new QPushButton(tabCtrl);
        buttonVoiceTrack->setObjectName(QString::fromUtf8("buttonVoiceTrack"));
        buttonVoiceTrack->setGeometry(QRect(440, 160, 141, 60));
        buttonInit = new QPushButton(tabCtrl);
        buttonInit->setObjectName(QString::fromUtf8("buttonInit"));
        buttonInit->setGeometry(QRect(440, 300, 141, 60));
        buttonRemoteCtrl = new QPushButton(tabCtrl);
        buttonRemoteCtrl->setObjectName(QString::fromUtf8("buttonRemoteCtrl"));
        buttonRemoteCtrl->setGeometry(QRect(590, 230, 141, 60));
        buttonWallTrack = new QPushButton(tabCtrl);
        buttonWallTrack->setObjectName(QString::fromUtf8("buttonWallTrack"));
        buttonWallTrack->setGeometry(QRect(590, 90, 141, 60));
        buttonLineTrack = new QPushButton(tabCtrl);
        buttonLineTrack->setObjectName(QString::fromUtf8("buttonLineTrack"));
        buttonLineTrack->setGeometry(QRect(590, 160, 141, 60));
        buttonVoiceCtrl = new QPushButton(tabCtrl);
        buttonVoiceCtrl->setObjectName(QString::fromUtf8("buttonVoiceCtrl"));
        buttonVoiceCtrl->setGeometry(QRect(440, 230, 141, 60));
        Avoid->addTab(tabCtrl, QString());
        tabSet = new QWidget();
        tabSet->setObjectName(QString::fromUtf8("tabSet"));
        buttonQuit2 = new QPushButton(tabSet);
        buttonQuit2->setObjectName(QString::fromUtf8("buttonQuit2"));
        buttonQuit2->setGeometry(QRect(670, 350, 81, 31));
        labelTitleSet = new QLabel(tabSet);
        labelTitleSet->setObjectName(QString::fromUtf8("labelTitleSet"));
        labelTitleSet->setGeometry(QRect(260, 10, 271, 51));
        labelTitleSet->setFont(font);
        groupBoxSet = new QGroupBox(tabSet);
        groupBoxSet->setObjectName(QString::fromUtf8("groupBoxSet"));
        groupBoxSet->setGeometry(QRect(40, 80, 381, 251));
        spinBoxLeftSpeed = new QSpinBox(groupBoxSet);
        spinBoxLeftSpeed->setObjectName(QString::fromUtf8("spinBoxLeftSpeed"));
        spinBoxLeftSpeed->setGeometry(QRect(150, 40, 81, 31));
        labelLeftSpeed = new QLabel(groupBoxSet);
        labelLeftSpeed->setObjectName(QString::fromUtf8("labelLeftSpeed"));
        labelLeftSpeed->setGeometry(QRect(10, 40, 141, 31));
        labelRightSpeed = new QLabel(groupBoxSet);
        labelRightSpeed->setObjectName(QString::fromUtf8("labelRightSpeed"));
        labelRightSpeed->setGeometry(QRect(10, 80, 141, 31));
        spinBoxRightSpeed = new QSpinBox(groupBoxSet);
        spinBoxRightSpeed->setObjectName(QString::fromUtf8("spinBoxRightSpeed"));
        spinBoxRightSpeed->setGeometry(QRect(150, 80, 81, 31));
        buttonSetSpeed = new QPushButton(groupBoxSet);
        buttonSetSpeed->setObjectName(QString::fromUtf8("buttonSetSpeed"));
        buttonSetSpeed->setGeometry(QRect(260, 60, 75, 45));
        labelDirectionAngle = new QLabel(groupBoxSet);
        labelDirectionAngle->setObjectName(QString::fromUtf8("labelDirectionAngle"));
        labelDirectionAngle->setGeometry(QRect(10, 150, 141, 31));
        buttonSetDirectionAngle = new QPushButton(groupBoxSet);
        buttonSetDirectionAngle->setObjectName(QString::fromUtf8("buttonSetDirectionAngle"));
        buttonSetDirectionAngle->setGeometry(QRect(260, 140, 75, 45));
        buttonSetSafeDis = new QPushButton(groupBoxSet);
        buttonSetSafeDis->setObjectName(QString::fromUtf8("buttonSetSafeDis"));
        buttonSetSafeDis->setGeometry(QRect(260, 200, 75, 45));
        spinBoxDirectionAngle = new QSpinBox(groupBoxSet);
        spinBoxDirectionAngle->setObjectName(QString::fromUtf8("spinBoxDirectionAngle"));
        spinBoxDirectionAngle->setGeometry(QRect(150, 150, 81, 31));
        spinBoxSafeDis = new QSpinBox(groupBoxSet);
        spinBoxSafeDis->setObjectName(QString::fromUtf8("spinBoxSafeDis"));
        spinBoxSafeDis->setGeometry(QRect(150, 210, 81, 31));
        labelSafeDis = new QLabel(groupBoxSet);
        labelSafeDis->setObjectName(QString::fromUtf8("labelSafeDis"));
        labelSafeDis->setGeometry(QRect(10, 210, 141, 31));
        groupBoxDownload = new QGroupBox(tabSet);
        groupBoxDownload->setObjectName(QString::fromUtf8("groupBoxDownload"));
        groupBoxDownload->setGeometry(QRect(440, 60, 321, 281));
        buttonLoad = new QPushButton(groupBoxDownload);
        buttonLoad->setObjectName(QString::fromUtf8("buttonLoad"));
        buttonLoad->setGeometry(QRect(20, 230, 75, 45));
        buttonDownload = new QPushButton(groupBoxDownload);
        buttonDownload->setObjectName(QString::fromUtf8("buttonDownload"));
        buttonDownload->setGeometry(QRect(120, 230, 75, 45));
        buttonEreasure = new QPushButton(groupBoxDownload);
        buttonEreasure->setObjectName(QString::fromUtf8("buttonEreasure"));
        buttonEreasure->setGeometry(QRect(220, 230, 75, 45));
        labelLoadFile = new QLabel(groupBoxDownload);
        labelLoadFile->setObjectName(QString::fromUtf8("labelLoadFile"));
        labelLoadFile->setGeometry(QRect(17, 30, 111, 31));
        QFont font1;
        font1.setPointSize(16);
        labelLoadFile->setFont(font1);
        lineEditLoadFilePath = new QLineEdit(groupBoxDownload);
        lineEditLoadFilePath->setObjectName(QString::fromUtf8("lineEditLoadFilePath"));
        lineEditLoadFilePath->setGeometry(QRect(20, 60, 291, 31));
        groupBox = new QGroupBox(groupBoxDownload);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 100, 281, 121));
        QFont font2;
        font2.setPointSize(13);
        groupBox->setFont(font2);
        rbt1 = new QRadioButton(groupBox);
        rbt1->setObjectName(QString::fromUtf8("rbt1"));
        rbt1->setGeometry(QRect(20, 30, 107, 23));
        rbt1->setChecked(true);
        rbt2 = new QRadioButton(groupBox);
        rbt2->setObjectName(QString::fromUtf8("rbt2"));
        rbt2->setGeometry(QRect(20, 60, 107, 23));
        rbt3 = new QRadioButton(groupBox);
        rbt3->setObjectName(QString::fromUtf8("rbt3"));
        rbt3->setGeometry(QRect(20, 90, 107, 23));
        rbt4 = new QRadioButton(groupBox);
        rbt4->setObjectName(QString::fromUtf8("rbt4"));
        rbt4->setGeometry(QRect(160, 30, 107, 23));
        rbt5 = new QRadioButton(groupBox);
        rbt5->setObjectName(QString::fromUtf8("rbt5"));
        rbt5->setGeometry(QRect(160, 60, 107, 23));
        rbt6 = new QRadioButton(groupBox);
        rbt6->setObjectName(QString::fromUtf8("rbt6"));
        rbt6->setGeometry(QRect(160, 90, 107, 23));
        Avoid->addTab(tabSet, QString());

        retranslateUi(Avoid);

        Avoid->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Avoid);
    } // setupUi

    void retranslateUi(QTabWidget *Avoid)
    {
        Avoid->setWindowTitle(QApplication::translate("Avoid", "\350\277\220\345\212\250\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        buttonQuit1->setText(QApplication::translate("Avoid", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        labelTitleCtrl->setText(QApplication::translate("Avoid", " \346\234\272\345\231\250\344\272\272\350\277\220\345\212\250\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        buttonUp->setText(QApplication::translate("Avoid", "\345\220\221\345\211\215", 0, QApplication::UnicodeUTF8));
        buttonDown->setText(QApplication::translate("Avoid", " \345\220\221\345\220\216", 0, QApplication::UnicodeUTF8));
        buttonLeft->setText(QApplication::translate("Avoid", "\345\220\221\345\267\246", 0, QApplication::UnicodeUTF8));
        buttonRight->setText(QApplication::translate("Avoid", "\345\220\221\345\217\263", 0, QApplication::UnicodeUTF8));
        buttonStop->setText(QApplication::translate("Avoid", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        buttonSpin->setText(QApplication::translate("Avoid", "\346\227\213\350\275\254", 0, QApplication::UnicodeUTF8));
        buttonTrack->setText(QApplication::translate("Avoid", "\347\233\256\346\240\207\350\267\237\350\270\252", 0, QApplication::UnicodeUTF8));
        buttonVoiceTrack->setText(QApplication::translate("Avoid", "\345\243\260\351\237\263\350\267\237\351\232\217", 0, QApplication::UnicodeUTF8));
        buttonInit->setText(QApplication::translate("Avoid", "\345\201\234\346\255\242/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        buttonRemoteCtrl->setText(QApplication::translate("Avoid", "\351\201\245\346\216\247\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        buttonWallTrack->setText(QApplication::translate("Avoid", "\350\264\264\345\243\201\350\241\214\350\265\260", 0, QApplication::UnicodeUTF8));
        buttonLineTrack->setText(QApplication::translate("Avoid", "\345\276\252\350\277\271\350\241\214\350\265\260", 0, QApplication::UnicodeUTF8));
        buttonVoiceCtrl->setText(QApplication::translate("Avoid", "\350\257\255\351\237\263\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        Avoid->setTabText(Avoid->indexOf(tabCtrl), QApplication::translate("Avoid", "\345\237\272\346\234\254\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        buttonQuit2->setText(QApplication::translate("Avoid", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        labelTitleSet->setText(QApplication::translate("Avoid", " \346\234\272\345\231\250\344\272\272\350\277\220\345\212\250\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBoxSet->setTitle(QApplication::translate("Avoid", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        labelLeftSpeed->setText(QApplication::translate("Avoid", "\345\267\246\350\275\256\351\200\237\345\272\246 :", 0, QApplication::UnicodeUTF8));
        labelRightSpeed->setText(QApplication::translate("Avoid", "\345\217\263\350\275\256\351\200\237\345\272\246 :", 0, QApplication::UnicodeUTF8));
        buttonSetSpeed->setText(QApplication::translate("Avoid", "\345\206\231\345\205\245\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        labelDirectionAngle->setText(QApplication::translate("Avoid", "\346\226\271\345\220\221\350\247\222    :", 0, QApplication::UnicodeUTF8));
        buttonSetDirectionAngle->setText(QApplication::translate("Avoid", "\345\206\231\345\205\245\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        buttonSetSafeDis->setText(QApplication::translate("Avoid", "\345\206\231\345\205\245\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        labelSafeDis->setText(QApplication::translate("Avoid", "\345\256\211\345\205\250\350\267\235\347\246\273 :", 0, QApplication::UnicodeUTF8));
        groupBoxDownload->setTitle(QApplication::translate("Avoid", "\347\250\213\345\272\217\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        buttonLoad->setText(QApplication::translate("Avoid", "\350\257\273\345\217\226\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        buttonDownload->setText(QApplication::translate("Avoid", "\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        buttonEreasure->setText(QApplication::translate("Avoid", "\346\223\246\351\231\244", 0, QApplication::UnicodeUTF8));
        labelLoadFile->setText(QApplication::translate("Avoid", "\347\203\247\345\206\231\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        lineEditLoadFilePath->setText(QApplication::translate("Avoid", "\350\257\267\350\257\273\345\217\226\347\203\247\345\206\231\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Avoid", "\347\203\247\345\206\231\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        rbt1->setText(QApplication::translate("Avoid", "\345\237\272\346\234\254\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        rbt2->setText(QApplication::translate("Avoid", "\351\200\237\345\272\246\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        rbt3->setText(QApplication::translate("Avoid", "\346\226\271\345\220\221\350\247\222\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        rbt4->setText(QApplication::translate("Avoid", "\347\233\256\346\240\207\350\267\237\350\270\252", 0, QApplication::UnicodeUTF8));
        rbt5->setText(QApplication::translate("Avoid", "\345\233\272\344\273\2661", 0, QApplication::UnicodeUTF8));
        rbt6->setText(QApplication::translate("Avoid", "\345\233\272\344\273\2662", 0, QApplication::UnicodeUTF8));
        Avoid->setTabText(Avoid->indexOf(tabSet), QApplication::translate("Avoid", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Avoid);
    } // retranslateUi

};

namespace Ui {
    class Avoid: public Ui_Avoid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVOID_H
