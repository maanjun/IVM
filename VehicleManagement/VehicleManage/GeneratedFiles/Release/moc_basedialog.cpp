/****************************************************************************
** Meta object code from reading C++ file 'basedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../basedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BaseDialog_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseDialog_t qt_meta_stringdata_BaseDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BaseDialog"
QT_MOC_LITERAL(1, 11, 12), // "goHomeSignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "idCheckedSignal"
QT_MOC_LITERAL(4, 41, 4), // "type"
QT_MOC_LITERAL(5, 46, 20), // "receiptCheckedSingal"
QT_MOC_LITERAL(6, 67, 21), // "vehicleInfoDoneSingal"
QT_MOC_LITERAL(7, 89, 15), // "inputDoneSingal"
QT_MOC_LITERAL(8, 105, 16), // "selectDoneSingal"
QT_MOC_LITERAL(9, 122, 14) // "onTimecoutSlot"

    },
    "BaseDialog\0goHomeSignal\0\0idCheckedSignal\0"
    "type\0receiptCheckedSingal\0"
    "vehicleInfoDoneSingal\0inputDoneSingal\0"
    "selectDoneSingal\0onTimecoutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,
       8,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BaseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseDialog *_t = static_cast<BaseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goHomeSignal(); break;
        case 1: _t->idCheckedSignal((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->receiptCheckedSingal(); break;
        case 3: _t->vehicleInfoDoneSingal(); break;
        case 4: _t->inputDoneSingal(); break;
        case 5: _t->selectDoneSingal(); break;
        case 6: _t->onTimecoutSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::goHomeSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::idCheckedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::receiptCheckedSingal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::vehicleInfoDoneSingal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::inputDoneSingal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::selectDoneSingal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject BaseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BaseDialog.data,
      qt_meta_data_BaseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BaseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BaseDialog.stringdata0))
        return static_cast<void*>(const_cast< BaseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BaseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BaseDialog::goHomeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BaseDialog::idCheckedSignal(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseDialog::receiptCheckedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BaseDialog::vehicleInfoDoneSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void BaseDialog::inputDoneSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void BaseDialog::selectDoneSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
