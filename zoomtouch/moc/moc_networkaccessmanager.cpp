/****************************************************************************
** Meta object code from reading C++ file 'networkaccessmanager.h'
**
** Created: Thu 8. Dec 21:05:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../networkaccessmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      34,   21,   21,   21, 0x05,
      69,   21,   21,   21, 0x05,
      94,   21,   21,   21, 0x05,
     115,  107,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,   21,   21,   21, 0x0a,
     176,   21,   21,   21, 0x0a,
     198,  192,   21,   21, 0x0a,
     228,   21,   21,   21, 0x0a,
     244,   21,  236,   21, 0x0a,
     255,  251,   21,   21, 0x0a,
     272,   21,  236,   21, 0x0a,
     278,  251,   21,   21, 0x0a,

 // properties: name, type, flags
     294,  236, 0x0a095103,
     299,  236, 0x0a495103,

 // properties: notify_signal_id
       0,
       3,

       0        // eod
};

static const char qt_meta_stringdata_NetworkAccessManager[] = {
    "NetworkAccessManager\0\0readyRead()\0"
    "error(QNetworkReply::NetworkError)\0"
    "finished(QNetworkReply*)\0urlChanged()\0"
    "content\0contentReady(QString)\0"
    "slotError(QNetworkReply::NetworkError)\0"
    "slotReadyRead()\0reply\0"
    "replyFinished(QNetworkReply*)\0fetch()\0"
    "QString\0data()\0val\0setData(QString)\0"
    "url()\0setUrl(QString)\0data\0url\0"
};

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkAccessManager,
      qt_meta_data_NetworkAccessManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readyRead(); break;
        case 1: error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: urlChanged(); break;
        case 4: contentReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: slotError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: slotReadyRead(); break;
        case 7: replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: fetch(); break;
        case 9: { QString _r = data();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: setData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: { QString _r = url();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: setUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = data(); break;
        case 1: *reinterpret_cast< QString*>(_v) = url(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setData(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUrl(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NetworkAccessManager::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NetworkAccessManager::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkAccessManager::finished(QNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkAccessManager::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NetworkAccessManager::contentReady(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
