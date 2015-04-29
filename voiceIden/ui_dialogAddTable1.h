/********************************************************************************
** Form generated from reading ui file 'dialogAddTable1.ui'
**
** Created: Wed Apr 22 19:11:00 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGADDTABLE1_H
#define UI_DIALOGADDTABLE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAddTable1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditItem0;
    QLineEdit *lineEditItem1;
    QPushButton *btRecordStart;
    QPushButton *btRecordFinish;
    QPushButton *btAddConfirm;
    QPushButton *btQuit;

    void setupUi(QDialog *DialogAddTable1)
    {
        if (DialogAddTable1->objectName().isEmpty())
            DialogAddTable1->setObjectName(QString::fromUtf8("DialogAddTable1"));
        DialogAddTable1->resize(321, 174);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        DialogAddTable1->setFont(font);
        label = new QLabel(DialogAddTable1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 101, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(DialogAddTable1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 101, 21));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);
        lineEditItem0 = new QLineEdit(DialogAddTable1);
        lineEditItem0->setObjectName(QString::fromUtf8("lineEditItem0"));
        lineEditItem0->setGeometry(QRect(120, 10, 191, 31));
        lineEditItem1 = new QLineEdit(DialogAddTable1);
        lineEditItem1->setObjectName(QString::fromUtf8("lineEditItem1"));
        lineEditItem1->setGeometry(QRect(120, 50, 191, 31));
        btRecordStart = new QPushButton(DialogAddTable1);
        btRecordStart->setObjectName(QString::fromUtf8("btRecordStart"));
        btRecordStart->setGeometry(QRect(30, 90, 87, 27));
        btRecordFinish = new QPushButton(DialogAddTable1);
        btRecordFinish->setObjectName(QString::fromUtf8("btRecordFinish"));
        btRecordFinish->setGeometry(QRect(160, 90, 87, 27));
        btAddConfirm = new QPushButton(DialogAddTable1);
        btAddConfirm->setObjectName(QString::fromUtf8("btAddConfirm"));
        btAddConfirm->setGeometry(QRect(90, 140, 87, 27));
        btQuit = new QPushButton(DialogAddTable1);
        btQuit->setObjectName(QString::fromUtf8("btQuit"));
        btQuit->setGeometry(QRect(190, 140, 87, 27));

        retranslateUi(DialogAddTable1);

        QMetaObject::connectSlotsByName(DialogAddTable1);
    } // setupUi

    void retranslateUi(QDialog *DialogAddTable1)
    {
        DialogAddTable1->setWindowTitle(QApplication::translate("DialogAddTable1", "\345\242\236\345\212\240\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAddTable1", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAddTable1", "\350\257\255\351\237\263\345\220\210\346\210\220\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        btRecordStart->setText(QApplication::translate("DialogAddTable1", "\345\274\200\345\247\213\345\275\225\351\237\263", 0, QApplication::UnicodeUTF8));
        btRecordFinish->setText(QApplication::translate("DialogAddTable1", "\345\275\225\351\237\263\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        btAddConfirm->setText(QApplication::translate("DialogAddTable1", "\347\241\256\345\256\232\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        btQuit->setText(QApplication::translate("DialogAddTable1", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogAddTable1);
    } // retranslateUi

};

namespace Ui {
    class DialogAddTable1: public Ui_DialogAddTable1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDTABLE1_H
