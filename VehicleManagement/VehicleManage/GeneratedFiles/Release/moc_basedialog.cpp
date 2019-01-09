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
    QByteArrayData data[15];
    char stringdata0[218];
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
QT_MOC_LITERAL(4, 41, 7), // "nCaller"
QT_MOC_LITERAL(5, 49, 11), // "qstrOwnerId"
QT_MOC_LITERAL(6, 61, 15), // "idScannedSignal"
QT_MOC_LITERAL(7, 77, 6), // "nStage"
QT_MOC_LITERAL(8, 84, 20), // "receiptCheckedSingal"
QT_MOC_LITERAL(9, 105, 21), // "vehicleInfoDoneSingal"
QT_MOC_LITERAL(10, 127, 15), // "inputDoneSingal"
QT_MOC_LITERAL(11, 143, 16), // "selectDoneSingal"
QT_MOC_LITERAL(12, 160, 14), // "onTimecoutSlot"
QT_MOC_LITERAL(13, 175, 21), // "showCountdownTimeSlot"
QT_MOC_LITERAL(14, 197, 20) // "hideLabelWarningSlot"

    },
    "BaseDialog\0goHomeSignal\0\0idCheckedSignal\0"
    "nCaller\0qstrOwnerId\0idScannedSignal\0"
    "nStage\0receiptCheckedSingal\0"
    "vehicleInfoDoneSingal\0inputDoneSingal\0"
    "selectDoneSingal\0onTimecoutSlot\0"
    "showCountdownTimeSlot\0hideLabelWarningSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       6,    2,   70,    2, 0x06 /* Public */,
       8,    1,   75,    2, 0x06 /* Public */,
       9,    1,   78,    2, 0x06 /* Public */,
      10,    0,   81,    2, 0x06 /* Public */,
      11,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    7,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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
        case 1: _t->idCheckedSignal((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->idScannedSignal((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->receiptCheckedSingal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->vehicleInfoDoneSingal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->inputDoneSingal(); break;
        case 6: _t->selectDoneSingal(); break;
        case 7: _t->onTimecoutSlot(); break;
        case 8: _t->showCountdownTimeSlot(); break;
        case 9: _t->hideLabelWarningSlot(); break;
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
            typedef void (BaseDialog::*_t)(unsigned int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::idCheckedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(unsigned int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::idScannedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::receiptCheckedSingal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::vehicleInfoDoneSingal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::inputDoneSingal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::selectDoneSingal)) {
                *result = 6;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void BaseDialog::goHomeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BaseDialog::idCheckedSignal(unsigned int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseDialog::idScannedSignal(unsigned int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BaseDialog::receiptCheckedSingal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BaseDialog::vehicleInfoDoneSingal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BaseDialog::inputDoneSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BaseDialog::selectDoneSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
