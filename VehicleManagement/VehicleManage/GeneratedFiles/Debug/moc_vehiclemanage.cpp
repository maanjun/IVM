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
    QByteArrayData data[15];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleManage_t qt_meta_stringdata_VehicleManage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VehicleManage"
QT_MOC_LITERAL(1, 14, 20), // "on_pBtnCheck_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "on_pBtnSelect_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_pBtnMortgage_clicked"
QT_MOC_LITERAL(5, 82, 12), // "onGoHomeSlot"
QT_MOC_LITERAL(6, 95, 15), // "onIdCheckedSlot"
QT_MOC_LITERAL(7, 111, 7), // "nCaller"
QT_MOC_LITERAL(8, 119, 11), // "qstrOwnerId"
QT_MOC_LITERAL(9, 131, 15), // "onIdScannedSlot"
QT_MOC_LITERAL(10, 147, 6), // "nStage"
QT_MOC_LITERAL(11, 154, 21), // "onVehicleInfoDoneSlot"
QT_MOC_LITERAL(12, 176, 20), // "onReceiptCheckedSlot"
QT_MOC_LITERAL(13, 197, 15), // "onInputDoneSlot"
QT_MOC_LITERAL(14, 213, 16) // "onSelectDoneSlot"

    },
    "VehicleManage\0on_pBtnCheck_clicked\0\0"
    "on_pBtnSelect_clicked\0on_pBtnMortgage_clicked\0"
    "onGoHomeSlot\0onIdCheckedSlot\0nCaller\0"
    "qstrOwnerId\0onIdScannedSlot\0nStage\0"
    "onVehicleInfoDoneSlot\0onReceiptCheckedSlot\0"
    "onInputDoneSlot\0onSelectDoneSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleManage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    2,   68,    2, 0x08 /* Private */,
       9,    2,   73,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   10,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
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
        case 0: _t->on_pBtnCheck_clicked(); break;
        case 1: _t->on_pBtnSelect_clicked(); break;
        case 2: _t->on_pBtnMortgage_clicked(); break;
        case 3: _t->onGoHomeSlot(); break;
        case 4: _t->onIdCheckedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onIdScannedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onVehicleInfoDoneSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onReceiptCheckedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onInputDoneSlot(); break;
        case 9: _t->onSelectDoneSlot(); break;
        default: ;
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
QT_END_MOC_NAMESPACE
