/********************************************************************************
** Form generated from reading ui file 'localSet.ui'
**
** Created: Wed Apr 29 14:13:53 2015
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
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalSet
{
public:
    QPushButton *buttonQuit;
    QCheckBox *checkBoxRemoteSet;

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
        checkBoxRemoteSet = new QCheckBox(LocalSet);
        checkBoxRemoteSet->setObjectName(QString::fromUtf8("checkBoxRemoteSet"));
        checkBoxRemoteSet->setGeometry(QRect(70, 280, 171, 41));
        QFont font1;
        font1.setPointSize(18);
        checkBoxRemoteSet->setFont(font1);

        retranslateUi(LocalSet);

        QMetaObject::connectSlotsByName(LocalSet);
    } // setupUi

    void retranslateUi(QWidget *LocalSet)
    {
        LocalSet->setWindowTitle(QApplication::translate("LocalSet", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("LocalSet", "PushButton", 0, QApplication::UnicodeUTF8));
        checkBoxRemoteSet->setText(QApplication::translate("LocalSet", "\350\277\234\347\250\213\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LocalSet);
    } // retranslateUi

};

namespace Ui {
    class LocalSet: public Ui_LocalSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALSET_H
