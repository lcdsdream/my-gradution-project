/****************************************************************************
** Meta object code from reading C++ file 'configureMainWindow.h'
**
** Created: Wed Apr 8 00:23:30 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "configureMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configureMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigureMainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   20,   20,   20, 0x0a,
      51,   20,   20,   20, 0x0a,
      72,   20,   20,   20, 0x0a,
      93,   20,   20,   20, 0x0a,
     113,   20,   20,   20, 0x0a,
     139,   20,   20,   20, 0x0a,
     160,   20,   20,   20, 0x0a,
     180,   20,   20,   20, 0x0a,
     199,   20,   20,   20, 0x0a,
     218,   20,   20,   20, 0x0a,
     237,   20,   20,   20, 0x0a,
     276,  256,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConfigureMainWindow[] = {
    "ConfigureMainWindow\0\0quited()\0"
    "buttonVoicePressed()\0buttonImagePressed()\0"
    "buttonAvoidPressed()\0buttonPlanPressed()\0"
    "buttonFileManagePressed()\0"
    "buttonLocalPressed()\0buttonQuitPressed()\0"
    "buttonBA3Pressed()\0buttonBA0Pressed()\0"
    "buttonBA1Pressed()\0buttonBA2Pressed()\0"
    "exitCode,exitStatus\0"
    "processFinished(int,QProcess::ExitStatus)\0"
};

const QMetaObject ConfigureMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ConfigureMainWindow,
      qt_meta_data_ConfigureMainWindow, 0 }
};

const QMetaObject *ConfigureMainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *ConfigureMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureMainWindow))
        return static_cast<void*>(const_cast< ConfigureMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ConfigureMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: quited(); break;
        case 1: buttonVoicePressed(); break;
        case 2: buttonImagePressed(); break;
        case 3: buttonAvoidPressed(); break;
        case 4: buttonPlanPressed(); break;
        case 5: buttonFileManagePressed(); break;
        case 6: buttonLocalPressed(); break;
        case 7: buttonQuitPressed(); break;
        case 8: buttonBA3Pressed(); break;
        case 9: buttonBA0Pressed(); break;
        case 10: buttonBA1Pressed(); break;
        case 11: buttonBA2Pressed(); break;
        case 12: processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ConfigureMainWindow::quited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
