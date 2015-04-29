/********************************************************************************
** Form generated from reading ui file 'dialogShowVoice.ui'
**
** Created: Wed Apr 22 19:11:00 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOGSHOWVOICE_H
#define UI_DIALOGSHOWVOICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogShowVoice
{
public:
    QPushButton *btRecordStart;
    QPushButton *btRecordFinish;
    QLabel *label;

    void setupUi(QDialog *DialogShowVoice)
    {
        if (DialogShowVoice->objectName().isEmpty())
            DialogShowVoice->setObjectName(QString::fromUtf8("DialogShowVoice"));
        DialogShowVoice->resize(305, 134);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        DialogShowVoice->setFont(font);
        btRecordStart = new QPushButton(DialogShowVoice);
        btRecordStart->setObjectName(QString::fromUtf8("btRecordStart"));
        btRecordStart->setGeometry(QRect(50, 20, 87, 27));
        btRecordFinish = new QPushButton(DialogShowVoice);
        btRecordFinish->setObjectName(QString::fromUtf8("btRecordFinish"));
        btRecordFinish->setGeometry(QRect(180, 20, 87, 27));
        label = new QLabel(DialogShowVoice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 211, 41));

        retranslateUi(DialogShowVoice);

        QMetaObject::connectSlotsByName(DialogShowVoice);
    } // setupUi

    void retranslateUi(QDialog *DialogShowVoice)
    {
        DialogShowVoice->setWindowTitle(QApplication::translate("DialogShowVoice", "\350\257\255\351\237\263\345\233\236\346\230\276", 0, QApplication::UnicodeUTF8));
        btRecordStart->setText(QApplication::translate("DialogShowVoice", "\345\274\200\345\247\213\345\275\225\351\237\263", 0, QApplication::UnicodeUTF8));
        btRecordFinish->setText(QApplication::translate("DialogShowVoice", "\345\275\225\351\237\263\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogShowVoice", "\350\257\206\345\210\253\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DialogShowVoice);
    } // retranslateUi

};

namespace Ui {
    class DialogShowVoice: public Ui_DialogShowVoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHOWVOICE_H
