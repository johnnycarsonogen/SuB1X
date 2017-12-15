/****************************************************************************
** Meta object code from reading C++ file 'multisub1xdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/multisub1xdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisub1xdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiSub1xDialog_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiSub1xDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiSub1xDialog_t qt_meta_stringdata_MultiSub1xDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MultiSub1xDialog"
QT_MOC_LITERAL(1, 17, 21), // "on_viewButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(5, 85, 25), // "on_activateButton_clicked"
QT_MOC_LITERAL(6, 111, 24), // "on_disableButton_clicked"
QT_MOC_LITERAL(7, 136, 28) // "on_addressBookButton_clicked"

    },
    "MultiSub1xDialog\0on_viewButton_clicked\0"
    "\0on_addButton_clicked\0on_deleteButton_clicked\0"
    "on_activateButton_clicked\0"
    "on_disableButton_clicked\0"
    "on_addressBookButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiSub1xDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiSub1xDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiSub1xDialog *_t = static_cast<MultiSub1xDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_viewButton_clicked(); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_activateButton_clicked(); break;
        case 4: _t->on_disableButton_clicked(); break;
        case 5: _t->on_addressBookButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MultiSub1xDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MultiSub1xDialog.data,
      qt_meta_data_MultiSub1xDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiSub1xDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiSub1xDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiSub1xDialog.stringdata0))
        return static_cast<void*>(const_cast< MultiSub1xDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MultiSub1xDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
