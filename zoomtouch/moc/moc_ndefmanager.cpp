/****************************************************************************
** Meta object code from reading C++ file 'ndefmanager.h'
**
** Created: Thu 8. Dec 21:05:14 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ndefmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ndefmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NdefManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   13,   12,   12, 0x05,
      71,   52,   12,   12, 0x05,
     105,   95,   12,   12, 0x05,
     136,  125,   12,   12, 0x05,
     182,  160,   12,   12, 0x05,
     244,  209,   12,   12, 0x05,
     296,  282,   12,   12, 0x05,
     353,  328,   12,   12, 0x05,
     406,  394,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     431,   12,   12,   12, 0x0a,
     448,   12,   12,   12, 0x0a,
     466,  125,   12,   12, 0x0a,
     502,  487,   12,   12, 0x08,
     563,  556,   12,   12, 0x08,
     605,  597,   12,   12, 0x08,
     638,  635,   12,   12, 0x08,
     693,  684,   12,   12, 0x08,
     758,  556,   12,   12, 0x08,
     803,  788,   12,   12, 0x08,
     853,  845,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NdefManager[] = {
    "NdefManager\0\0nfcStatusText\0"
    "nfcStatusUpdate(QString)\0nfcStatusErrorText\0"
    "nfcStatusError(QString)\0nfcTagUri\0"
    "nfcReadTagUri(QUrl)\0nfcTagText\0"
    "nfcReadTagText(QString)\0nfcTagUri,nfcTagTitle\0"
    "nfcReadTagSp(QUrl,QString)\0"
    "nfcTagName,nfcTagEmail,nfcTagPhone\0"
    "nfcReadTagVcard(QString,QString,QUrl)\0"
    "nfcTagPayload\0nfcReadTagAutostart(QByteArray)\0"
    "nfcTagType,nfcTagPayload\0"
    "nfcReadTagUnknown(QByteArray,QByteArray)\0"
    "nfcTagError\0nfcReadTagError(QString)\0"
    "checkNfcStatus()\0initAndStartNfc()\0"
    "nfcWriteTag(QString)\0message,target\0"
    "targetMessageDetected(QNdefMessage,QNearFieldTarget*)\0"
    "target\0targetDetected(QNearFieldTarget*)\0"
    "message\0ndefMessageRead(QNdefMessage)\0"
    "id\0requestCompleted(QNearFieldTarget::RequestId)\0"
    "error,id\0"
    "targetError(QNearFieldTarget::Error,QNearFieldTarget::RequestId)\0"
    "targetLost(QNearFieldTarget*)\0"
    "nfcError,error\0handleNfcError(NfcSettings::NfcError,int)\0"
    "nfcMode\0handleNfcModeChange(NfcSettings::NfcMode)\0"
};

const QMetaObject NdefManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NdefManager,
      qt_meta_data_NdefManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NdefManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NdefManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NdefManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NdefManager))
        return static_cast<void*>(const_cast< NdefManager*>(this));
    return QObject::qt_metacast(_clname);
}

int NdefManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nfcStatusUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: nfcStatusError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: nfcReadTagUri((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: nfcReadTagText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: nfcReadTagSp((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: nfcReadTagVcard((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 6: nfcReadTagAutostart((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: nfcReadTagUnknown((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: nfcReadTagError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: checkNfcStatus(); break;
        case 10: initAndStartNfc(); break;
        case 11: nfcWriteTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: targetMessageDetected((*reinterpret_cast< const QNdefMessage(*)>(_a[1])),(*reinterpret_cast< QNearFieldTarget*(*)>(_a[2]))); break;
        case 13: targetDetected((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 14: ndefMessageRead((*reinterpret_cast< const QNdefMessage(*)>(_a[1]))); break;
        case 15: requestCompleted((*reinterpret_cast< const QNearFieldTarget::RequestId(*)>(_a[1]))); break;
        case 16: targetError((*reinterpret_cast< QNearFieldTarget::Error(*)>(_a[1])),(*reinterpret_cast< const QNearFieldTarget::RequestId(*)>(_a[2]))); break;
        case 17: targetLost((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 18: handleNfcError((*reinterpret_cast< NfcSettings::NfcError(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: handleNfcModeChange((*reinterpret_cast< NfcSettings::NfcMode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void NdefManager::nfcStatusUpdate(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NdefManager::nfcStatusError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NdefManager::nfcReadTagUri(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NdefManager::nfcReadTagText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NdefManager::nfcReadTagSp(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NdefManager::nfcReadTagVcard(const QString & _t1, const QString & _t2, const QUrl & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NdefManager::nfcReadTagAutostart(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NdefManager::nfcReadTagUnknown(const QByteArray & _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NdefManager::nfcReadTagError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
