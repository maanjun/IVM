/****************************************************************************
** Meta object code from reading C++ file 'selectlicensedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../selectlicensedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectlicensedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectLicenseDialog_t {
    QByteArrayData data[6];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectLicenseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectLicenseDialog_t qt_meta_stringdata_SelectLicenseDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SelectLicenseDialog"
QT_MOC_LITERAL(1, 20, 23), // "on_pBtnHomepage_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "onBtnNextClicked"
QT_MOC_LITERAL(4, 62, 22), // "on_pBtnConfirm_clicked"
QT_MOC_LITERAL(5, 85, 21) // "onLicenseSelectedSlot"

    },
    "SelectLicenseDialog\0on_pBtnHomepage_clicked\0"
    "\0onBtnNextClicked\0on_pBtnConfirm_clicked\0"
    "onLicenseSelectedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectLicenseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectLicenseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectLicenseDialog *_t = static_cast<SelectLicenseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pBtnHomepage_clicked(); break;
        case 1: _t->onBtnNextClicked(); break;
        case 2: _t->on_pBtnConfirm_clicked(); break;
        case 3: _t->onLicenseSelectedSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SelectLicenseDialog::staticMetaObject = {
    { &BaseDialog::staticMetaObject, qt_meta_stringdata_SelectLicenseDialog.data,
      qt_meta_data_SelectLicenseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectLicenseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectLicenseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectLicenseDialog.stringdata0))
        return static_cast<void*>(const_cast< SelectLicenseDialog*>(this));
    return BaseDialog::qt_metacast(_clname);
}

int SelectLicenseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
