/********************************************************************************
** Form generated from reading ui file 'localSet.ui'
**
** Created: Wed Apr 29 17:27:45 2015
=======
** Created: Wed Apr 29 16:57:51 2015
>>>>>>> 1ae026cc08cfe80ffc2e86af4668dbf83e526e24
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOCALSET_H
#define UI_LOCALSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalSet
{
public:
    QPushButton *buttonQuit;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leIP1;
    QLabel *label_4;
    QLineEdit *leIP2;
    QLabel *label_5;
    QLineEdit *leIP3;
    QLabel *label_6;
    QLineEdit *leIP4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
   QLineEdit *leGW1;
    QLabel *label_7;
    QLineEdit *leGW2;
    QLabel *label_8;
    QLineEdit *leGW3;
    QLabel *label_9;
    QLineEdit *leGW4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
   QLineEdit *leCW1;
    QLabel *label_10;
    QLineEdit *leCW2;
    QLabel *label_11;
    QLineEdit *leCW3;
    QLabel *label_12;
    QLineEdit *leCW4;
    QCheckBox *checkBoxRemoteSet;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_13;
    QLabel *label_13;

    void setupUi(QWidget *LocalSet)
    {
        if (LocalSet->objectName().isEmpty())
            LocalSet->setObjectName(QString::fromUtf8("LocalSet"));
        LocalSet->resize(800, 450);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        LocalSet->setFont(font);
        buttonQuit = new QPushButton(LocalSet);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setGeometry(QRect(670, 380, 81, 32));
        groupBox = new QGroupBox(LocalSet);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 371, 271));
        QFont font1;
        font1.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font1.setPointSize(14);
        groupBox->setFont(font1);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 50, 341, 51));
       horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(90, 48));
       QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        leIP1 = new QLineEdit(horizontalLayoutWidget);
        leIP1->setObjectName(QString::fromUtf8("leIP1"));

        horizontalLayout->addWidget(leIP1);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(18);
        label_4->setFont(font3);

        horizontalLayout->addWidget(label_4);

        leIP2 = new QLineEdit(horizontalLayoutWidget);
        leIP2->setObjectName(QString::fromUtf8("leIP2"));

        horizontalLayout->addWidget(leIP2);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        horizontalLayout->addWidget(label_5);

        leIP3 = new QLineEdit(horizontalLayoutWidget);
        leIP3->setObjectName(QString::fromUtf8("leIP3"));

        horizontalLayout->addWidget(leIP3);

        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        horizontalLayout->addWidget(label_6);

        leIP4 = new QLineEdit(horizontalLayoutWidget);
        leIP4->setObjectName(QString::fromUtf8("leIP4"));

        horizontalLayout->addWidget(leIP4);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 100, 341, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 48));
        QFont font4;
        font4.setPointSize(12);
        label_3->setFont(font4);

        horizontalLayout_2->addWidget(label_3);
        leGW1 = new QLineEdit(horizontalLayoutWidget_2);
        leGW1->setObjectName(QString::fromUtf8("leGW1"));

        horizontalLayout_2->addWidget(leGW1);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        horizontalLayout_2->addWidget(label_7);

        leGW2 = new QLineEdit(horizontalLayoutWidget_2);
        leGW2->setObjectName(QString::fromUtf8("leGW2"));

        horizontalLayout_2->addWidget(leGW2);

        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        horizontalLayout_2->addWidget(label_8);

        leGW3 = new QLineEdit(horizontalLayoutWidget_2);
        leGW3->setObjectName(QString::fromUtf8("leGW3"));

        horizontalLayout_2->addWidget(leGW3);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        horizontalLayout_2->addWidget(label_9);

        leGW4 = new QLineEdit(horizontalLayoutWidget_2);
        leGW4->setObjectName(QString::fromUtf8("leGW4"));

        horizontalLayout_2->addWidget(leGW4);

        horizontalLayoutWidget_3 = new QWidget(groupBox);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 150, 341, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(90, 48));
        label_2->setFont(font4);

        horizontalLayout_3->addWidget(label_2);
        leCW1 = new QLineEdit(horizontalLayoutWidget_3);
        leCW1->setObjectName(QString::fromUtf8("leCW1"));

        horizontalLayout_3->addWidget(leCW1);

        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        horizontalLayout_3->addWidget(label_10);

        leCW2 = new QLineEdit(horizontalLayoutWidget_3);
        leCW2->setObjectName(QString::fromUtf8("leCW2"));

        horizontalLayout_3->addWidget(leCW2);

        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_3->addWidget(label_11);

        leCW3 = new QLineEdit(horizontalLayoutWidget_3);
        leCW3->setObjectName(QString::fromUtf8("leCW3"));

        horizontalLayout_3->addWidget(leCW3);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_3->addWidget(label_12);

        leCW4 = new QLineEdit(horizontalLayoutWidget_3);
        leCW4->setObjectName(QString::fromUtf8("leCW4"));

        horizontalLayout_3->addWidget(leCW4);

        checkBoxRemoteSet = new QCheckBox(groupBox);
        checkBoxRemoteSet->setObjectName(QString::fromUtf8("checkBoxRemoteSet"));
        checkBoxRemoteSet->setGeometry(QRect(0, 230, 171, 41));
        checkBoxRemoteSet->setFont(font3);
        groupBox_2 = new QGroupBox(LocalSet);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 50, 301, 211));
        lineEdit_13 = new QLineEdit(groupBox_2);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(110, 60, 161, 33));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 101, 49));
        QFont font5;
        font5.setPointSize(10);
        label_13->setFont(font5);
        retranslateUi(LocalSet);

        QMetaObject::connectSlotsByName(LocalSet);
    } // setupUi

    void retranslateUi(QWidget *LocalSet)
    {
        LocalSet->setWindowTitle(QApplication::translate("LocalSet", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("LocalSet", "PushButton", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LocalSet", "\347\275\221\347\273\234\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LocalSet", "IP          :", 0, QApplication::UnicodeUTF8));
       leIP1->setText(QApplication::translate("LocalSet", "192", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leIP2->setText(QApplication::translate("LocalSet", "168", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leIP3->setText(QApplication::translate("LocalSet", "199", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leIP4->setText(QApplication::translate("LocalSet", "140", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LocalSet", "\345\255\220\347\275\221\346\216\251\347\240\201 :", 0, QApplication::UnicodeUTF8));
       leGW1->setText(QApplication::translate("LocalSet", "192", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leGW2->setText(QApplication::translate("LocalSet", "168", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leGW3->setText(QApplication::translate("LocalSet", "199", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leGW4->setText(QApplication::translate("LocalSet", "1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LocalSet", "\347\275\221\345\205\263        :", 0, QApplication::UnicodeUTF8));
       leCW1->setText(QApplication::translate("LocalSet", "255", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leCW2->setText(QApplication::translate("LocalSet", "255", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leCW3->setText(QApplication::translate("LocalSet", "255", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("LocalSet", ".", 0, QApplication::UnicodeUTF8));
        leCW4->setText(QApplication::translate("LocalSet", "0", 0, QApplication::UnicodeUTF8));
        checkBoxRemoteSet->setText(QApplication::translate("LocalSet", "\350\277\234\347\250\213\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("LocalSet", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        lineEdit_13->setText(QApplication::translate("LocalSet", "\346\202\250\345\245\275,\346\210\221\346\230\257\345\256\266\345\261\205\346\234\272\345\231\250\344\272\272", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("LocalSet", "\345\274\200\346\234\272\346\254\242\350\277\216\350\257\255\345\217\245", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LocalSet);
    } // retranslateUi

};

namespace Ui {
    class LocalSet: public Ui_LocalSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALSET_H
