/********************************************************************************
** Form generated from reading ui file 'voiceIden.ui'
**
** Created: Wed Apr 22 19:11:00 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_VOICEIDEN_H
#define UI_VOICEIDEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoiceIden
{
public:
    QPushButton *buttonQuit;
    QTableWidget *tableWidgetOne;
    QTableWidget *tableWidgetTwo;
    QPushButton *buttonAddTable1;
    QPushButton *buttonDeleteTable1;
    QPushButton *buttonAddTable2;
    QLabel *labelOne;
    QLabel *labelTwo;
    QPushButton *buttonDeleteTable2;
    QLineEdit *lineEditSelectTwo;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditSelectOne;
    QPushButton *buttonVoiceShow;

    void setupUi(QWidget *VoiceIden)
    {
        if (VoiceIden->objectName().isEmpty())
            VoiceIden->setObjectName(QString::fromUtf8("VoiceIden"));
        VoiceIden->resize(800, 451);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font.setPointSize(10);
        VoiceIden->setFont(font);
        buttonQuit = new QPushButton(VoiceIden);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setGeometry(QRect(690, 400, 81, 32));
        tableWidgetOne = new QTableWidget(VoiceIden);
        if (tableWidgetOne->columnCount() < 4)
            tableWidgetOne->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetOne->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetOne->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetOne->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetOne->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetOne->setObjectName(QString::fromUtf8("tableWidgetOne"));
        tableWidgetOne->setGeometry(QRect(29, 50, 371, 281));
        tableWidgetTwo = new QTableWidget(VoiceIden);
        if (tableWidgetTwo->columnCount() < 5)
            tableWidgetTwo->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetTwo->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetTwo->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetTwo->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetTwo->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetTwo->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableWidgetTwo->setObjectName(QString::fromUtf8("tableWidgetTwo"));
        tableWidgetTwo->setGeometry(QRect(419, 50, 361, 281));
        buttonAddTable1 = new QPushButton(VoiceIden);
        buttonAddTable1->setObjectName(QString::fromUtf8("buttonAddTable1"));
        buttonAddTable1->setGeometry(QRect(40, 390, 111, 41));
        buttonDeleteTable1 = new QPushButton(VoiceIden);
        buttonDeleteTable1->setObjectName(QString::fromUtf8("buttonDeleteTable1"));
        buttonDeleteTable1->setGeometry(QRect(160, 390, 111, 41));
        buttonAddTable2 = new QPushButton(VoiceIden);
        buttonAddTable2->setObjectName(QString::fromUtf8("buttonAddTable2"));
        buttonAddTable2->setGeometry(QRect(440, 390, 111, 41));
        labelOne = new QLabel(VoiceIden);
        labelOne->setObjectName(QString::fromUtf8("labelOne"));
        labelOne->setGeometry(QRect(50, 10, 341, 31));
        QFont font1;
        font1.setPointSize(15);
        labelOne->setFont(font1);
        labelTwo = new QLabel(VoiceIden);
        labelTwo->setObjectName(QString::fromUtf8("labelTwo"));
        labelTwo->setGeometry(QRect(450, 10, 311, 31));
        labelTwo->setFont(font1);
        buttonDeleteTable2 = new QPushButton(VoiceIden);
        buttonDeleteTable2->setObjectName(QString::fromUtf8("buttonDeleteTable2"));
        buttonDeleteTable2->setGeometry(QRect(560, 390, 111, 41));
        lineEditSelectTwo = new QLineEdit(VoiceIden);
        lineEditSelectTwo->setObjectName(QString::fromUtf8("lineEditSelectTwo"));
        lineEditSelectTwo->setGeometry(QRect(540, 350, 141, 31));
        label = new QLabel(VoiceIden);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 350, 101, 31));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);
        label_2 = new QLabel(VoiceIden);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 350, 101, 31));
        label_2->setFont(font2);
        lineEditSelectOne = new QLineEdit(VoiceIden);
        lineEditSelectOne->setObjectName(QString::fromUtf8("lineEditSelectOne"));
        lineEditSelectOne->setGeometry(QRect(140, 350, 151, 31));
        buttonVoiceShow = new QPushButton(VoiceIden);
        buttonVoiceShow->setObjectName(QString::fromUtf8("buttonVoiceShow"));
        buttonVoiceShow->setGeometry(QRect(280, 390, 111, 41));

        retranslateUi(VoiceIden);

        QMetaObject::connectSlotsByName(VoiceIden);
    } // setupUi

    void retranslateUi(QWidget *VoiceIden)
    {
        VoiceIden->setWindowTitle(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("VoiceIden", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetOne->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VoiceIden", "\345\210\206\347\272\247", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetOne->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetOne->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\345\220\210\346\210\220\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetOne->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VoiceIden", "CODE_*", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTwo->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("VoiceIden", "ID_1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetTwo->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("VoiceIden", "\345\210\206\347\272\247", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetTwo->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetTwo->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\345\220\210\346\210\220\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetTwo->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("VoiceIden", "CODE_*", 0, QApplication::UnicodeUTF8));
        buttonAddTable1->setText(QApplication::translate("VoiceIden", "\345\242\236\345\212\240\350\241\250\344\270\200\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        buttonDeleteTable1->setText(QApplication::translate("VoiceIden", "\345\210\240\351\231\244\350\241\250\344\270\200\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        buttonAddTable2->setText(QApplication::translate("VoiceIden", "\345\242\236\345\212\240\350\241\250\344\272\214\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        labelOne->setText(QApplication::translate("VoiceIden", "\346\225\260\346\215\256\350\241\250-1", 0, QApplication::UnicodeUTF8));
        labelTwo->setText(QApplication::translate("VoiceIden", "\346\225\260\346\215\256\350\241\250-2 \345\234\250\350\257\206\345\210\253-1 \346\225\260\346\215\256\350\241\250-1", 0, QApplication::UnicodeUTF8));
        buttonDeleteTable2->setText(QApplication::translate("VoiceIden", "\345\210\240\351\231\244\350\241\250\344\272\214\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\350\257\206\345\210\253\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        buttonVoiceShow->setText(QApplication::translate("VoiceIden", "\350\257\255\351\237\263\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(VoiceIden);
    } // retranslateUi

};

namespace Ui {
    class VoiceIden: public Ui_VoiceIden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICEIDEN_H
