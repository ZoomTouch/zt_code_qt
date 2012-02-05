/****************************************************************************
** Meta object code from reading C++ file 'parser.h'
**
** Created: Thu 8. Dec 21:22:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../parser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Parser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       6,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      25,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,    7,    7,    7, 0x0a,
      55,    7,   47,    7, 0x0a,
      69,   65,    7,    7, 0x0a,
      89,    7,   47,    7, 0x0a,
      96,   65,    7,    7, 0x0a,
     113,    7,   47,    7, 0x0a,
     120,   65,    7,    7, 0x0a,
     137,    7,   47,    7, 0x0a,
     145,   65,    7,    7, 0x0a,
     163,    7,   47,    7, 0x0a,
     169,   65,    7,    7, 0x0a,
     185,    7,   47,    7, 0x0a,
     192,   65,    7,    7, 0x0a,
     214,  209,    7,    7, 0x0a,

 // properties: name, type, flags
     232,   47, 0x0a095103,
     237,   47, 0x0a095103,
     242,   47, 0x0a095103,
     248,   47, 0x0a095103,
     252,   47, 0x0a495103,
     257,   47, 0x0a495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       0,

       0        // eod
};

static const char qt_meta_stringdata_Parser[] = {
    "Parser\0\0contentChanged()\0infoChanged()\0"
    "parse()\0QString\0content()\0val\0"
    "setContent(QString)\0name()\0setName(QString)\0"
    "logo()\0setLogo(QString)\0phone()\0"
    "setPhone(QString)\0url()\0setUrl(QString)\0"
    "info()\0setInfo(QString)\0node\0"
    "doParse(QDomNode)\0name\0logo\0phone\0url\0"
    "info\0content\0"
};

const QMetaObject Parser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Parser,
      qt_meta_data_Parser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Parser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Parser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Parser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Parser))
        return static_cast<void*>(const_cast< Parser*>(this));
    return QObject::qt_metacast(_clname);
}

int Parser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contentChanged(); break;
        case 1: infoChanged(); break;
        case 2: parse(); break;
        case 3: { QString _r = content();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: setContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { QString _r = name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QString _r = logo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: setLogo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { QString _r = phone();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: setPhone((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: { QString _r = url();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: setUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: { QString _r = info();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: setInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: doParse((*reinterpret_cast< QDomNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = logo(); break;
        case 2: *reinterpret_cast< QString*>(_v) = phone(); break;
        case 3: *reinterpret_cast< QString*>(_v) = url(); break;
        case 4: *reinterpret_cast< QString*>(_v) = info(); break;
        case 5: *reinterpret_cast< QString*>(_v) = content(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setLogo(*reinterpret_cast< QString*>(_v)); break;
        case 2: setPhone(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUrl(*reinterpret_cast< QString*>(_v)); break;
        case 4: setInfo(*reinterpret_cast< QString*>(_v)); break;
        case 5: setContent(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Parser::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Parser::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
