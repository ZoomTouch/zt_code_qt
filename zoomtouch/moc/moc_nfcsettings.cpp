/****************************************************************************
** Meta object code from reading C++ file 'nfcsettings.h'
**
** Created: Thu 8. Dec 21:05:10 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nfcsettings/nfcsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nfcsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NfcSettings[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       3,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x05,
      73,   58,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   12,   12,   12, 0x0a,

 // properties: name, type, flags
     136,  125, 0x00095009,
      13,  147, 0x00495009,
     164,  155, 0x0049500d,

 // properties: notify_signal_id
       0,
       0,
       1,

 // enums: name, flags, count, data
     125, 0x0,    3,   53,
     147, 0x0,    5,   59,
     155, 0x0,    6,   69,

 // enum data: key, value
     173, uint(NfcSettings::NfcFeatureNotSupported),
     196, uint(NfcSettings::NfcFeatureSupportedViaFirmwareUpdate),
     233, uint(NfcSettings::NfcFeatureSupported),
     253, uint(NfcSettings::NfcModeNotSupported),
     273, uint(NfcSettings::NfcModeUnknown),
     288, uint(NfcSettings::NfcModeOn),
     298, uint(NfcSettings::NfcModeCardOnly),
     314, uint(NfcSettings::NfcModeOff),
     325, uint(NfcSettings::NfcErrorNone),
     338, uint(NfcSettings::NfcErrorFeatureSupportQuery),
     366, uint(NfcSettings::NfcErrorSoftwareVersionQuery),
     395, uint(NfcSettings::NfcErrorModeChangeNotificationRequest),
     433, uint(NfcSettings::NfcErrorModeChangeNotification),
     464, uint(NfcSettings::NfcErrorModeRetrieval),

       0        // eod
};

static const char qt_meta_stringdata_NfcSettings[] = {
    "NfcSettings\0\0nfcMode\0"
    "nfcModeChanged(NfcSettings::NfcMode)\0"
    "nfcError,error\0"
    "nfcErrorOccurred(NfcSettings::NfcError,int)\0"
    "reset()\0NfcFeature\0nfcFeature\0NfcMode\0"
    "NfcError\0nfcError\0NfcFeatureNotSupported\0"
    "NfcFeatureSupportedViaFirmwareUpdate\0"
    "NfcFeatureSupported\0NfcModeNotSupported\0"
    "NfcModeUnknown\0NfcModeOn\0NfcModeCardOnly\0"
    "NfcModeOff\0NfcErrorNone\0"
    "NfcErrorFeatureSupportQuery\0"
    "NfcErrorSoftwareVersionQuery\0"
    "NfcErrorModeChangeNotificationRequest\0"
    "NfcErrorModeChangeNotification\0"
    "NfcErrorModeRetrieval\0"
};

const QMetaObject NfcSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NfcSettings,
      qt_meta_data_NfcSettings, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NfcSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NfcSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NfcSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NfcSettings))
        return static_cast<void*>(const_cast< NfcSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int NfcSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nfcModeChanged((*reinterpret_cast< NfcSettings::NfcMode(*)>(_a[1]))); break;
        case 1: nfcErrorOccurred((*reinterpret_cast< NfcSettings::NfcError(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: reset(); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NfcFeature*>(_v) = nfcFeature(); break;
        case 1: *reinterpret_cast< NfcMode*>(_v) = nfcMode(); break;
        case 2: *reinterpret_cast< NfcError*>(_v) = nfcError(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: reset(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NfcSettings::nfcModeChanged(NfcSettings::NfcMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NfcSettings::nfcErrorOccurred(NfcSettings::NfcError _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
