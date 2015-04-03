/****************************************************************************
** Meta object code from reading C++ file 'imageIden.h'
**
** Created: Fri Apr 3 16:41:35 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imageIden.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageIden.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageIden[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x0a,
      38,   10,   10,   10, 0x0a,
      53,   10,   10,   10, 0x0a,
      69,   10,   10,   10, 0x0a,
      81,   10,   10,   10, 0x0a,
      94,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageIden[] = {
    "ImageIden\0\0loadPicture()\0buttonQuit()\0"
    "setModelFace()\0setModelDigit()\0"
    "startIden()\0startCatch()\0startTrain()\0"
};

const QMetaObject ImageIden::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ImageIden,
      qt_meta_data_ImageIden, 0 }
};

const QMetaObject *ImageIden::metaObject() const
{
    return &staticMetaObject;
}

void *ImageIden::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageIden))
        return static_cast<void*>(const_cast< ImageIden*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ImageIden::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: loadPicture(); break;
        case 1: buttonQuit(); break;
        case 2: setModelFace(); break;
        case 3: setModelDigit(); break;
        case 4: startIden(); break;
        case 5: startCatch(); break;
        case 6: startTrain(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
