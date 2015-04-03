/****************************************************************************
** Meta object code from reading C++ file 'configureMainWindow.h'
**
** Created: Fri Apr 3 16:37:37 2015
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
      12,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      42,   20,   20,   20, 0x0a,
      63,   20,   20,   20, 0x0a,
      84,   20,   20,   20, 0x0a,
     104,   20,   20,   20, 0x0a,
     126,   20,   20,   20, 0x0a,
     145,   20,   20,   20, 0x0a,
     164,   20,   20,   20, 0x0a,
     190,   20,   20,   20, 0x0a,
     211,   20,   20,   20, 0x0a,
     231,   20,   20,   20, 0x0a,
     270,  250,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConfigureMainWindow[] = {
    "ConfigureMainWindow\0\0buttonVoicePressed()\0"
    "buttonImagePressed()\0buttonAvoidPressed()\0"
    "buttonPlanPressed()\0buttonRemotePressed()\0"
    "buttonBA1Pressed()\0buttonBA2Pressed()\0"
    "buttonFileManagePressed()\0"
    "buttonLocalPressed()\0buttonQuitPressed()\0"
    "buttonBA3Pressed()\0exitCode,exitStatus\0"
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
        case 0: buttonVoicePressed(); break;
        case 1: buttonImagePressed(); break;
        case 2: buttonAvoidPressed(); break;
        case 3: buttonPlanPressed(); break;
        case 4: buttonRemotePressed(); break;
        case 5: buttonBA1Pressed(); break;
        case 6: buttonBA2Pressed(); break;
        case 7: buttonFileManagePressed(); break;
        case 8: buttonLocalPressed(); break;
        case 9: buttonQuitPressed(); break;
        case 10: buttonBA3Pressed(); break;
        case 11: processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
