/****************************************************************************
** Meta object code from reading C++ file 'appinfo.h'
**
** Created: Thu 8. Dec 21:05:10 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppInfo[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,    8,    9,    8, 0x0a,
      38,    8,    9,    8, 0x0a,
      62,    8,    9,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AppInfo[] = {
    "AppInfo\0\0QString\0getApplicationName()\0"
    "getApplicationVersion()\0getOrganizationName()\0"
};

const QMetaObject AppInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppInfo,
      qt_meta_data_AppInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppInfo))
        return static_cast<void*>(const_cast< AppInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int AppInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = getApplicationName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = getApplicationVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = getOrganizationName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
