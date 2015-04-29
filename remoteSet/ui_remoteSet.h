/********************************************************************************
** Form generated from reading ui file 'remoteSet.ui'
**
** Created: Wed Apr 29 14:12:28 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_REMOTESET_H
#define UI_REMOTESET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteSet
{
public:
    QPushButton *buttonQuit;

    void setupUi(QWidget *RemoteSet)
    {
        if (RemoteSet->objectName().isEmpty())
            RemoteSet->setObjectName(QString::fromUtf8("RemoteSet"));
        RemoteSet->resize(800, 450);
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        RemoteSet->setFont(font);
        buttonQuit = new QPushButton(RemoteSet);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setGeometry(QRect(670, 380, 81, 32));

        retranslateUi(RemoteSet);

        QMetaObject::connectSlotsByName(RemoteSet);
    } // setupUi

    void retranslateUi(QWidget *RemoteSet)
    {
        RemoteSet->setWindowTitle(QApplication::translate("RemoteSet", "\350\277\234\347\250\213\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("RemoteSet", "PushButton", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(RemoteSet);
    } // retranslateUi

};

namespace Ui {
    class RemoteSet: public Ui_RemoteSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTESET_H
