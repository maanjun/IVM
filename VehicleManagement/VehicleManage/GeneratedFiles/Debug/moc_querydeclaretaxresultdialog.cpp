/****************************************************************************
** Meta object code from reading C++ file 'querydeclaretaxresultdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../querydeclaretaxresultdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querydeclaretaxresultdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QueryDeclareTaxResultDialog_t {
    QByteArrayData data[4];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QueryDeclareTaxResultDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QueryDeclareTaxResultDialog_t qt_meta_stringdata_QueryDeclareTaxResultDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QueryDeclareTaxResultDialog"
QT_MOC_LITERAL(1, 28, 23), // "on_pBtnHomepage_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 19) // "on_pBtnDone_clicked"

    },
    "QueryDeclareTaxResultDialog\0"
    "on_pBtnHomepage_clicked\0\0on_pBtnDone_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QueryDeclareTaxResultDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QueryDeclareTaxResultDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QueryDeclareTaxResultDialog *_t = static_cast<QueryDeclareTaxResultDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pBtnHomepage_clicked(); break;
        case 1: _t->on_pBtnDone_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QueryDeclareTaxResultDialog::staticMetaObject = {
    { &BaseDialog::staticMetaObject, qt_meta_stringdata_QueryDeclareTaxResultDialog.data,
      qt_meta_data_QueryDeclareTaxResultDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QueryDeclareTaxResultDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueryDeclareTaxResultDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QueryDeclareTaxResultDialog.stringdata0))
        return static_cast<void*>(const_cast< QueryDeclareTaxResultDialog*>(this));
    return BaseDialog::qt_metacast(_clname);
}

int QueryDeclareTaxResultDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
