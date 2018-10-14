/****************************************************************************
** Meta object code from reading C++ file 'rigster_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../yhl_QQ/rigster_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rigster_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rigster_dialog_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rigster_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rigster_dialog_t qt_meta_stringdata_rigster_dialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "rigster_dialog"
QT_MOC_LITERAL(1, 15, 9), // "send_name"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "sendData"
QT_MOC_LITERAL(4, 35, 9), // "cancelled"
QT_MOC_LITERAL(5, 45, 20), // "on_ok_button_clicked"
QT_MOC_LITERAL(6, 66, 24) // "on_cancel_button_clicked"

    },
    "rigster_dialog\0send_name\0\0sendData\0"
    "cancelled\0on_ok_button_clicked\0"
    "on_cancel_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rigster_dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    2,   42,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rigster_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        rigster_dialog *_t = static_cast<rigster_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sendData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->cancelled(); break;
        case 3: _t->on_ok_button_clicked(); break;
        case 4: _t->on_cancel_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rigster_dialog::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rigster_dialog::send_name)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (rigster_dialog::*)(const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rigster_dialog::sendData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (rigster_dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rigster_dialog::cancelled)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rigster_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rigster_dialog.data,
      qt_meta_data_rigster_dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *rigster_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rigster_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rigster_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rigster_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rigster_dialog::send_name(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rigster_dialog::sendData(const QString _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rigster_dialog::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
