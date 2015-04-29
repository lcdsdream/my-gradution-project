/********************************************************************************
** Form generated from reading ui file 'dialogModifyTable1.ui'
**
** Created: Wed Apr 22 19:11:00 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGMODIFYTABLE1_H
#define UI_DIALOGMODIFYTABLE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogModifyTable1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditItem0;
    QLineEdit *lineEditItem1;
    QPushButton *btModifyConfirm;
    QPushButton *btQuit;
    QGroupBox *groupBox;
    QPushButton *btRecordStart;
    QPushButton *btRecordFinish;
    QCheckBox *checkBox;

    void setupUi(QDialog *DialogModifyTable1)
    {
        if (DialogModifyTable1->objectName().isEmpty())
            DialogModifyTable1->setObjectName(QString::fromUtf8("DialogModifyTable1"));
        DialogModifyTable1->resize(324, 256);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        DialogModifyTable1->setFont(font);
        label = new QLabel(DialogModifyTable1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 101, 21));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(DialogModifyTable1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 59, 101, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        lineEditItem0 = new QLineEdit(DialogModifyTable1);
        lineEditItem0->setObjectName(QString::fromUtf8("lineEditItem0"));
        lineEditItem0->setGeometry(QRect(120, 10, 191, 31));
        lineEditItem1 = new QLineEdit(DialogModifyTable1);
        lineEditItem1->setObjectName(QString::fromUtf8("lineEditItem1"));
        lineEditItem1->setGeometry(QRect(120, 50, 191, 31));
        btModifyConfirm = new QPushButton(DialogModifyTable1);
        btModifyConfirm->setObjectName(QString::fromUtf8("btModifyConfirm"));
        btModifyConfirm->setGeometry(QRect(100, 210, 87, 27));
        btQuit = new QPushButton(DialogModifyTable1);
        btQuit->setObjectName(QString::fromUtf8("btQuit"));
        btQuit->setGeometry(QRect(190, 210, 87, 27));
        groupBox = new QGroupBox(DialogModifyTable1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 261, 101));
        btRecordStart = new QPushButton(groupBox);
        btRecordStart->setObjectName(QString::fromUtf8("btRecordStart"));
        btRecordStart->setGeometry(QRect(60, 60, 87, 27));
        btRecordFinish = new QPushButton(groupBox);
        btRecordFinish->setObjectName(QString::fromUtf8("btRecordFinish"));
        btRecordFinish->setGeometry(QRect(160, 60, 87, 27));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 30, 181, 23));

        retranslateUi(DialogModifyTable1);

        QMetaObject::connectSlotsByName(DialogModifyTable1);
    } // setupUi

    void retranslateUi(QDialog *DialogModifyTable1)
    {
        DialogModifyTable1->setWindowTitle(QApplication::translate("DialogModifyTable1", "\344\277\256\346\224\271\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogModifyTable1", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogModifyTable1", "\350\257\255\351\237\263\345\220\210\346\210\220\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        btModifyConfirm->setText(QApplication::translate("DialogModifyTable1", "\347\241\256\345\256\232\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        btQuit->setText(QApplication::translate("DialogModifyTable1", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogModifyTable1", "\345\275\225\351\237\263\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        btRecordStart->setText(QApplication::translate("DialogModifyTable1", "\345\274\200\345\247\213\345\275\225\351\237\263", 0, QApplication::UnicodeUTF8));
        btRecordFinish->setText(QApplication::translate("DialogModifyTable1", "\345\275\225\351\237\263\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("DialogModifyTable1", "\346\233\264\346\226\260\345\275\225\351\237\263", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogModifyTable1);
    } // retranslateUi

};

namespace Ui {
    class DialogModifyTable1: public Ui_DialogModifyTable1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFYTABLE1_H
