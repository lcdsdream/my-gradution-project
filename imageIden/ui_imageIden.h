/********************************************************************************
** Form generated from reading ui file 'imageIden.ui'
**
** Created: Wed Apr 29 14:13:40 2015
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_IMAGEIDEN_H
#define UI_IMAGEIDEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageIden
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
    QWidget *centralwidget;
    QPushButton *buttonQuit;
    QLabel *labelPicture;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonCatch;
    QPushButton *buttonIden;
    QPushButton *buttonTrain;
    QPushButton *buttonDelete;
    QLabel *labelInputID;
    QLabel *labelIndentID;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxID;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEditShowIdentId;
    QLCDNumber *lcdNumber;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPattern;
    QMenu *menuCommand;

    void setupUi(QMainWindow *ImageIden)
    {
        if (ImageIden->objectName().isEmpty())
            ImageIden->setObjectName(QString::fromUtf8("ImageIden"));
        ImageIden->resize(788, 450);
        ImageIden->setMaximumSize(QSize(800, 480));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        ImageIden->setFont(font);
        actionIden = new QAction(ImageIden);
        actionIden->setObjectName(QString::fromUtf8("actionIden"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        actionIden->setFont(font1);
        actionZuoqu = new QAction(ImageIden);
        actionZuoqu->setObjectName(QString::fromUtf8("actionZuoqu"));
        actionXunliang = new QAction(ImageIden);
        actionXunliang->setObjectName(QString::fromUtf8("actionXunliang"));
        actionFromFile = new QAction(ImageIden);
        actionFromFile->setObjectName(QString::fromUtf8("actionFromFile"));
        actionFromFile->setFont(font1);
        actionCatch = new QAction(ImageIden);
        actionCatch->setObjectName(QString::fromUtf8("actionCatch"));
        actionCatch->setFont(font1);
        actionTrain = new QAction(ImageIden);
        actionTrain->setObjectName(QString::fromUtf8("actionTrain"));
        actionTrain->setFont(font1);
        actionFace = new QAction(ImageIden);
        actionFace->setObjectName(QString::fromUtf8("actionFace"));
        actionFace->setCheckable(true);
        actionFace->setChecked(true);
        actionFace->setFont(font1);
        actionDigit = new QAction(ImageIden);
        actionDigit->setObjectName(QString::fromUtf8("actionDigit"));
        actionDigit->setCheckable(true);
        actionDigit->setFont(font1);
        actionQuit = new QAction(ImageIden);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setFont(font1);
        actionAa = new QAction(ImageIden);
        actionAa->setObjectName(QString::fromUtf8("actionAa"));
        centralwidget = new QWidget(ImageIden);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonQuit = new QPushButton(centralwidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setGeometry(QRect(660, 330, 81, 32));
        QFont font2;
        font2.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font2.setBold(false);
        font2.setWeight(50);
        buttonQuit->setFont(font2);
        labelPicture = new QLabel(centralwidget);
        labelPicture->setObjectName(QString::fromUtf8("labelPicture"));
        labelPicture->setGeometry(QRect(40, 30, 250, 330));
        labelPicture->setFont(font2);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(360, 80, 131, 241));
        verticalLayoutWidget->setFont(font2);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonCatch = new QPushButton(verticalLayoutWidget);
        buttonCatch->setObjectName(QString::fromUtf8("buttonCatch"));
        buttonCatch->setFont(font2);

        verticalLayout->addWidget(buttonCatch);

        buttonIden = new QPushButton(verticalLayoutWidget);
        buttonIden->setObjectName(QString::fromUtf8("buttonIden"));
        buttonIden->setFont(font2);

        verticalLayout->addWidget(buttonIden);

        buttonTrain = new QPushButton(verticalLayoutWidget);
        buttonTrain->setObjectName(QString::fromUtf8("buttonTrain"));
        buttonTrain->setFont(font2);

        verticalLayout->addWidget(buttonTrain);

        buttonDelete = new QPushButton(verticalLayoutWidget);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setFont(font2);

        verticalLayout->addWidget(buttonDelete);

        labelInputID = new QLabel(centralwidget);
        labelInputID->setObjectName(QString::fromUtf8("labelInputID"));
        labelInputID->setGeometry(QRect(500, 110, 81, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        labelInputID->setFont(font3);
        labelIndentID = new QLabel(centralwidget);
        labelIndentID->setObjectName(QString::fromUtf8("labelIndentID"));
        labelIndentID->setGeometry(QRect(500, 220, 81, 21));
        labelIndentID->setFont(font3);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(590, 100, 191, 141));
        verticalLayoutWidget_2->setFont(font2);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxID = new QComboBox(verticalLayoutWidget_2);
        comboBoxID->setObjectName(QString::fromUtf8("comboBoxID"));
        comboBoxID->setFont(font2);

        verticalLayout_2->addWidget(comboBoxID);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        lineEditShowIdentId = new QLineEdit(verticalLayoutWidget_2);
        lineEditShowIdentId->setObjectName(QString::fromUtf8("lineEditShowIdentId"));
        lineEditShowIdentId->setFont(font2);

        verticalLayout_2->addWidget(lineEditShowIdentId);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(540, 40, 151, 231));
        lcdNumber->setFont(font2);
        lcdNumber->setNumDigits(1);
        ImageIden->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ImageIden);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ImageIden->setStatusBar(statusbar);
        menubar = new QMenuBar(ImageIden);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 788, 30));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPattern = new QMenu(menubar);
        menuPattern->setObjectName(QString::fromUtf8("menuPattern"));
        menuPattern->setGeometry(QRect(324, 231, 177, 116));
        menuCommand = new QMenu(menubar);
        menuCommand->setObjectName(QString::fromUtf8("menuCommand"));
        ImageIden->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPattern->menuAction());
        menubar->addAction(menuCommand->menuAction());
        menuFile->addAction(actionFromFile);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuPattern->addAction(actionFace);
        menuPattern->addSeparator();
        menuPattern->addAction(actionDigit);
        menuCommand->addAction(actionIden);
        menuCommand->addSeparator();
        menuCommand->addAction(actionCatch);
        menuCommand->addAction(actionTrain);

        retranslateUi(ImageIden);

        QMetaObject::connectSlotsByName(ImageIden);
    } // setupUi

    void retranslateUi(QMainWindow *ImageIden)
    {
        ImageIden->setWindowTitle(QApplication::translate("ImageIden", "\345\233\276\345\203\217\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionIden->setText(QApplication::translate("ImageIden", "\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionZuoqu->setText(QApplication::translate("ImageIden", "zhuqu", 0, QApplication::UnicodeUTF8));
        actionXunliang->setText(QApplication::translate("ImageIden", "xunliang", 0, QApplication::UnicodeUTF8));
        actionFromFile->setText(QApplication::translate("ImageIden", "\350\275\275\345\205\245\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        actionCatch->setText(QApplication::translate("ImageIden", "\346\215\225\350\216\267", 0, QApplication::UnicodeUTF8));
        actionTrain->setText(QApplication::translate("ImageIden", "\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        actionFace->setText(QApplication::translate("ImageIden", "\344\272\272\350\204\270\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionFace->setIconText(QApplication::translate("ImageIden", "\344\272\272\350\204\270\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionDigit->setText(QApplication::translate("ImageIden", "\346\225\260\345\255\227\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("ImageIden", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        actionAa->setText(QApplication::translate("ImageIden", "aa", 0, QApplication::UnicodeUTF8));
        buttonQuit->setText(QApplication::translate("ImageIden", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        labelPicture->setText(QString());
        buttonCatch->setText(QApplication::translate("ImageIden", "\346\215\225\350\216\267", 0, QApplication::UnicodeUTF8));
        buttonIden->setText(QApplication::translate("ImageIden", "\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        buttonTrain->setText(QApplication::translate("ImageIden", "\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        buttonDelete->setText(QApplication::translate("ImageIden", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        labelInputID->setText(QApplication::translate("ImageIden", "\350\276\223\345\205\245ID", 0, QApplication::UnicodeUTF8));
        labelIndentID->setText(QApplication::translate("ImageIden", "\350\257\206\345\210\253ID", 0, QApplication::UnicodeUTF8));
        comboBoxID->clear();
        comboBoxID->insertItems(0, QStringList()
         << QApplication::translate("ImageIden", "id-2011051600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageIden", "id-2011051601", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageIden", "id-2011051602", 0, QApplication::UnicodeUTF8)
        );
        lineEditShowIdentId->setText(QString());
        menuFile->setTitle(QApplication::translate("ImageIden", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menuPattern->setTitle(QApplication::translate("ImageIden", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        menuCommand->setTitle(QApplication::translate("ImageIden", "\345\221\275\344\273\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageIden: public Ui_ImageIden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEIDEN_H
