/****************************************************************************
** Meta object code from reading C++ file 'sub1xcoinsentry.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/sub1xcoinsentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sub1xcoinsentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sub1xCoinsEntry_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sub1xCoinsEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sub1xCoinsEntry_t qt_meta_stringdata_Sub1xCoinsEntry = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Sub1xCoinsEntry"
QT_MOC_LITERAL(1, 16, 11), // "removeEntry"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "Sub1xCoinsEntry*"
QT_MOC_LITERAL(4, 46, 5), // "entry"
QT_MOC_LITERAL(5, 52, 16), // "payAmountChanged"
QT_MOC_LITERAL(6, 69, 5), // "clear"
QT_MOC_LITERAL(7, 75, 13), // "deleteClicked"
QT_MOC_LITERAL(8, 89, 20), // "on_payTo_textChanged"
QT_MOC_LITERAL(9, 110, 7), // "address"
QT_MOC_LITERAL(10, 118, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(11, 147, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(12, 170, 17) // "updateDisplayUnit"

    },
    "Sub1xCoinsEntry\0removeEntry\0\0"
    "Sub1xCoinsEntry*\0entry\0payAmountChanged\0"
    "clear\0deleteClicked\0on_payTo_textChanged\0"
    "address\0on_addressBookButton_clicked\0"
    "on_pasteButton_clicked\0updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sub1xCoinsEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sub1xCoinsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sub1xCoinsEntry *_t = static_cast<Sub1xCoinsEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< Sub1xCoinsEntry*(*)>(_a[1]))); break;
        case 1: _t->payAmountChanged(); break;
        case 2: _t->clear(); break;
        case 3: _t->deleteClicked(); break;
        case 4: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_addressBookButton_clicked(); break;
        case 6: _t->on_pasteButton_clicked(); break;
        case 7: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Sub1xCoinsEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Sub1xCoinsEntry::*_t)(Sub1xCoinsEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sub1xCoinsEntry::removeEntry)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Sub1xCoinsEntry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Sub1xCoinsEntry::payAmountChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Sub1xCoinsEntry::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_Sub1xCoinsEntry.data,
      qt_meta_data_Sub1xCoinsEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Sub1xCoinsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sub1xCoinsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Sub1xCoinsEntry.stringdata0))
        return static_cast<void*>(const_cast< Sub1xCoinsEntry*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int Sub1xCoinsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Sub1xCoinsEntry::removeEntry(Sub1xCoinsEntry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sub1xCoinsEntry::payAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
