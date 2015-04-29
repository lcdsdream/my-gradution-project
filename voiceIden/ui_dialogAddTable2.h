/********************************************************************************
** Form generated from reading ui file 'dialogAddTable2.ui'
**
** Created: Wed Apr 22 19:11:00 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGADDTABLE2_H
#define UI_DIALOGADDTABLE2_H

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

class Ui_DialogAddTable2
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
    QLineEdit *lineEditItem2;
    QLabel *label_3;

    void setupUi(QDialog *DialogAddTable2)
    {
        if (DialogAddTable2->objectName().isEmpty())
            DialogAddTable2->setObjectName(QString::fromUtf8("DialogAddTable2"));
        DialogAddTable2->resize(331, 210);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        DialogAddTable2->setFont(font);
        label = new QLabel(DialogAddTable2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 15, 61, 21));
        label_2 = new QLabel(DialogAddTable2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        lineEditItem0 = new QLineEdit(DialogAddTable2);
        lineEditItem0->setObjectName(QString::fromUtf8("lineEditItem0"));
        lineEditItem0->setGeometry(QRect(130, 10, 191, 31));
        lineEditItem1 = new QLineEdit(DialogAddTable2);
        lineEditItem1->setObjectName(QString::fromUtf8("lineEditItem1"));
        lineEditItem1->setGeometry(QRect(130, 50, 191, 31));
        btRecordStart = new QPushButton(DialogAddTable2);
        btRecordStart->setObjectName(QString::fromUtf8("btRecordStart"));
        btRecordStart->setGeometry(QRect(40, 130, 87, 27));
        btRecordFinish = new QPushButton(DialogAddTable2);
        btRecordFinish->setObjectName(QString::fromUtf8("btRecordFinish"));
        btRecordFinish->setGeometry(QRect(170, 130, 87, 27));
        btAddConfirm = new QPushButton(DialogAddTable2);
        btAddConfirm->setObjectName(QString::fromUtf8("btAddConfirm"));
        btAddConfirm->setGeometry(QRect(100, 170, 87, 27));
        btQuit = new QPushButton(DialogAddTable2);
        btQuit->setObjectName(QString::fromUtf8("btQuit"));
        btQuit->setGeometry(QRect(200, 170, 87, 27));
        lineEditItem2 = new QLineEdit(DialogAddTable2);
        lineEditItem2->setObjectName(QString::fromUtf8("lineEditItem2"));
        lineEditItem2->setGeometry(QRect(130, 90, 191, 31));
        label_3 = new QLabel(DialogAddTable2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 101, 31));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        retranslateUi(DialogAddTable2);

        QMetaObject::connectSlotsByName(DialogAddTable2);
    } // setupUi

    void retranslateUi(QDialog *DialogAddTable2)
    {
        DialogAddTable2->setWindowTitle(QApplication::translate("DialogAddTable2", "\345\242\236\345\212\240\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAddTable2", "ID_1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAddTable2", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        btRecordStart->setText(QApplication::translate("DialogAddTable2", "\345\274\200\345\247\213\345\275\225\351\237\263", 0, QApplication::UnicodeUTF8));
        btRecordFinish->setText(QApplication::translate("DialogAddTable2", "\345\275\225\351\237\263\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        btAddConfirm->setText(QApplication::translate("DialogAddTable2", "\347\241\256\345\256\232\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        btQuit->setText(QApplication::translate("DialogAddTable2", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogAddTable2", "\350\257\255\351\237\263\345\220\210\346\210\220\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogAddTable2);
    } // retranslateUi

};

namespace Ui {
    class DialogAddTable2: public Ui_DialogAddTable2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDTABLE2_H
