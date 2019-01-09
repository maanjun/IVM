/****************************************************************************
** Meta object code from reading C++ file 'vehiclemanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vehiclemanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclemanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VehicleManage_t {
    QByteArrayData data[19];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleManage_t qt_meta_stringdata_VehicleManage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VehicleManage"
QT_MOC_LITERAL(1, 14, 19), // "goHomeVehicleSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "on_pBtnCheck_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_pBtnSelect_clicked"
QT_MOC_LITERAL(5, 78, 23), // "on_pBtnMortgage_clicked"
QT_MOC_LITERAL(6, 102, 19), // "on_pBtnkTax_clicked"
QT_MOC_LITERAL(7, 122, 24), // "on_pBtnInsurance_clicked"
QT_MOC_LITERAL(8, 147, 12), // "onGoHomeSlot"
QT_MOC_LITERAL(9, 160, 15), // "onIdCheckedSlot"
QT_MOC_LITERAL(10, 176, 7), // "nCaller"
QT_MOC_LITERAL(11, 184, 11), // "qstrOwnerId"
QT_MOC_LITERAL(12, 196, 15), // "onIdScannedSlot"
QT_MOC_LITERAL(13, 212, 6), // "nStage"
QT_MOC_LITERAL(14, 219, 21), // "onVehicleInfoDoneSlot"
QT_MOC_LITERAL(15, 241, 20), // "onReceiptCheckedSlot"
QT_MOC_LITERAL(16, 262, 15), // "onInputDoneSlot"
QT_MOC_LITERAL(17, 278, 16), // "onSelectDoneSlot"
QT_MOC_LITERAL(18, 295, 23) // "on_pBtnHomepage_clicked"

    },
    "VehicleManage\0goHomeVehicleSignal\0\0"
    "on_pBtnCheck_clicked\0on_pBtnSelect_clicked\0"
    "on_pBtnMortgage_clicked\0on_pBtnkTax_clicked\0"
    "on_pBtnInsurance_clicked\0onGoHomeSlot\0"
    "onIdCheckedSlot\0nCaller\0qstrOwnerId\0"
    "onIdScannedSlot\0nStage\0onVehicleInfoDoneSlot\0"
    "onReceiptCheckedSlot\0onInputDoneSlot\0"
    "onSelectDoneSlot\0on_pBtnHomepage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleManage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    2,   91,    2, 0x08 /* Private */,
      12,    2,   96,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   13,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VehicleManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VehicleManage *_t = static_cast<VehicleManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goHomeVehicleSignal(); break;
        case 1: _t->on_pBtnCheck_clicked(); break;
        case 2: _t->on_pBtnSelect_clicked(); break;
        case 3: _t->on_pBtnMortgage_clicked(); break;
        case 4: _t->on_pBtnkTax_clicked(); break;
        case 5: _t->on_pBtnInsurance_clicked(); break;
        case 6: _t->onGoHomeSlot(); break;
        case 7: _t->onIdCheckedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->onIdScannedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->onVehicleInfoDoneSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onReceiptCheckedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onInputDoneSlot(); break;
        case 12: _t->onSelectDoneSlot(); break;
        case 13: _t->on_pBtnHomepage_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VehicleManage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VehicleManage::goHomeVehicleSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VehicleManage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VehicleManage.data,
      qt_meta_data_VehicleManage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VehicleManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleManage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleManage.stringdata0))
        return static_cast<void*>(const_cast< VehicleManage*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VehicleManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void VehicleManage::goHomeVehicleSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
