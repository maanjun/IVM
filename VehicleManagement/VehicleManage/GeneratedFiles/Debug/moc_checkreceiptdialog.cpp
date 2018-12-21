/****************************************************************************
** Meta object code from reading C++ file 'checkreceiptdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../checkreceiptdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkreceiptdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CheckReceiptDialog_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckReceiptDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckReceiptDialog_t qt_meta_stringdata_CheckReceiptDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CheckReceiptDialog"
QT_MOC_LITERAL(1, 19, 12), // "goHomeSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "receiptCheckedSingal"
QT_MOC_LITERAL(4, 54, 23), // "on_pBtnHomepage_clicked"
QT_MOC_LITERAL(5, 78, 19), // "on_pBtnNext_clicked"
QT_MOC_LITERAL(6, 98, 15), // "onReceiptEdited"
QT_MOC_LITERAL(7, 114, 4), // "text"
QT_MOC_LITERAL(8, 119, 11), // "onTaxEdited"
QT_MOC_LITERAL(9, 131, 14) // "onTimecoutSlot"

    },
    "CheckReceiptDialog\0goHomeSignal\0\0"
    "receiptCheckedSingal\0on_pBtnHomepage_clicked\0"
    "on_pBtnNext_clicked\0onReceiptEdited\0"
    "text\0onTaxEdited\0onTimecoutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckReceiptDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void CheckReceiptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckReceiptDialog *_t = static_cast<CheckReceiptDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goHomeSignal(); break;
        case 1: _t->receiptCheckedSingal(); break;
        case 2: _t->on_pBtnHomepage_clicked(); break;
        case 3: _t->on_pBtnNext_clicked(); break;
        case 4: _t->onReceiptEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onTaxEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onTimecoutSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CheckReceiptDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckReceiptDialog::goHomeSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CheckReceiptDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckReceiptDialog::receiptCheckedSingal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CheckReceiptDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckReceiptDialog.data,
      qt_meta_data_CheckReceiptDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CheckReceiptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckReceiptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CheckReceiptDialog.stringdata0))
        return static_cast<void*>(const_cast< CheckReceiptDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckReceiptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CheckReceiptDialog::goHomeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CheckReceiptDialog::receiptCheckedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
