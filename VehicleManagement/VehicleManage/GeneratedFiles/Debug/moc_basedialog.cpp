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
    QByteArrayData data[22];
    char stringdata0[350];
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
QT_MOC_LITERAL(10, 127, 15), // "inputDoneSignal"
QT_MOC_LITERAL(11, 143, 16), // "selectDoneSignal"
QT_MOC_LITERAL(12, 160, 18), // "queryTaxDoneSignal"
QT_MOC_LITERAL(13, 179, 14), // "declaredSignal"
QT_MOC_LITERAL(14, 194, 21), // "certificateReadSignal"
QT_MOC_LITERAL(15, 216, 18), // "payConfirmedSignal"
QT_MOC_LITERAL(16, 235, 16), // "paytaxDoneSignal"
QT_MOC_LITERAL(17, 252, 20), // "faceRecognicedSignal"
QT_MOC_LITERAL(18, 273, 18), // "inputTaxDoneSignal"
QT_MOC_LITERAL(19, 292, 14), // "onTimecoutSlot"
QT_MOC_LITERAL(20, 307, 21), // "showCountdownTimeSlot"
QT_MOC_LITERAL(21, 329, 20) // "hideLabelWarningSlot"

    },
    "BaseDialog\0goHomeSignal\0\0idCheckedSignal\0"
    "nCaller\0qstrOwnerId\0idScannedSignal\0"
    "nStage\0receiptCheckedSingal\0"
    "vehicleInfoDoneSingal\0inputDoneSignal\0"
    "selectDoneSignal\0queryTaxDoneSignal\0"
    "declaredSignal\0certificateReadSignal\0"
    "payConfirmedSignal\0paytaxDoneSignal\0"
    "faceRecognicedSignal\0inputTaxDoneSignal\0"
    "onTimecoutSlot\0showCountdownTimeSlot\0"
    "hideLabelWarningSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    2,  100,    2, 0x06 /* Public */,
       6,    2,  105,    2, 0x06 /* Public */,
       8,    1,  110,    2, 0x06 /* Public */,
       9,    1,  113,    2, 0x06 /* Public */,
      10,    0,  116,    2, 0x06 /* Public */,
      11,    0,  117,    2, 0x06 /* Public */,
      12,    0,  118,    2, 0x06 /* Public */,
      13,    1,  119,    2, 0x06 /* Public */,
      14,    1,  122,    2, 0x06 /* Public */,
      15,    1,  125,    2, 0x06 /* Public */,
      16,    1,  128,    2, 0x06 /* Public */,
      17,    0,  131,    2, 0x06 /* Public */,
      18,    0,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  133,    2, 0x08 /* Private */,
      20,    0,  134,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    7,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
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
        case 5: _t->inputDoneSignal(); break;
        case 6: _t->selectDoneSignal(); break;
        case 7: _t->queryTaxDoneSignal(); break;
        case 8: _t->declaredSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->certificateReadSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->payConfirmedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->paytaxDoneSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->faceRecognicedSignal(); break;
        case 13: _t->inputTaxDoneSignal(); break;
        case 14: _t->onTimecoutSlot(); break;
        case 15: _t->showCountdownTimeSlot(); break;
        case 16: _t->hideLabelWarningSlot(); break;
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
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::inputDoneSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::selectDoneSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::queryTaxDoneSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::declaredSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::certificateReadSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::payConfirmedSignal)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::paytaxDoneSignal)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::faceRecognicedSignal)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (BaseDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseDialog::inputTaxDoneSignal)) {
                *result = 13;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void BaseDialog::inputDoneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BaseDialog::selectDoneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void BaseDialog::queryTaxDoneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void BaseDialog::declaredSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BaseDialog::certificateReadSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BaseDialog::payConfirmedSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BaseDialog::paytaxDoneSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void BaseDialog::faceRecognicedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void BaseDialog::inputTaxDoneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
