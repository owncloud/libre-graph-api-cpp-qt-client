/****************************************************************************
** Meta object code from reading C++ file 'OAIMeChangepasswordApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIMeChangepasswordApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIMeChangepasswordApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi_t {
    QByteArrayData data[14];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi_t qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi = {
    {
QT_MOC_LITERAL(0, 0, 31), // "OpenAPI::OAIMeChangepasswordApi"
QT_MOC_LITERAL(1, 32, 23), // "changeOwnPasswordSignal"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 27), // "changeOwnPasswordSignalFull"
QT_MOC_LITERAL(4, 85, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(5, 107, 6), // "worker"
QT_MOC_LITERAL(6, 114, 24), // "changeOwnPasswordSignalE"
QT_MOC_LITERAL(7, 139, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(8, 167, 10), // "error_type"
QT_MOC_LITERAL(9, 178, 9), // "error_str"
QT_MOC_LITERAL(10, 188, 28), // "changeOwnPasswordSignalEFull"
QT_MOC_LITERAL(11, 217, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(12, 237, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(13, 265, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIMeChangepasswordApi\0"
    "changeOwnPasswordSignal\0\0"
    "changeOwnPasswordSignalFull\0"
    "OAIHttpRequestWorker*\0worker\0"
    "changeOwnPasswordSignalE\0"
    "QNetworkReply::NetworkError\0error_type\0"
    "error_str\0changeOwnPasswordSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIMeChangepasswordApi[] = {

 // content:
       8,       // revision
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
       6,    2,   53,    2, 0x06 /* Public */,
      10,    3,   58,    2, 0x06 /* Public */,
      11,    0,   65,    2, 0x06 /* Public */,
      12,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 7, QMetaType::QString,    5,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OAIMeChangepasswordApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIMeChangepasswordApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeOwnPasswordSignal(); break;
        case 1: _t->changeOwnPasswordSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1]))); break;
        case 2: _t->changeOwnPasswordSignalE((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->changeOwnPasswordSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->abortRequestsSignal(); break;
        case 5: _t->allPendingRequestsCompleted(); break;
        case 6: _t->tokenAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OAIMeChangepasswordApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::changeOwnPasswordSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIMeChangepasswordApi::*)(OAIHttpRequestWorker * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::changeOwnPasswordSignalFull)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIMeChangepasswordApi::*)(QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::changeOwnPasswordSignalE)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIMeChangepasswordApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::changeOwnPasswordSignalEFull)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIMeChangepasswordApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::abortRequestsSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIMeChangepasswordApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeChangepasswordApi::allPendingRequestsCompleted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIMeChangepasswordApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi.data,
    qt_meta_data_OpenAPI__OAIMeChangepasswordApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIMeChangepasswordApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIMeChangepasswordApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIMeChangepasswordApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIMeChangepasswordApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OpenAPI::OAIMeChangepasswordApi::changeOwnPasswordSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OpenAPI::OAIMeChangepasswordApi::changeOwnPasswordSignalFull(OAIHttpRequestWorker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenAPI::OAIMeChangepasswordApi::changeOwnPasswordSignalE(QNetworkReply::NetworkError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIMeChangepasswordApi::changeOwnPasswordSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIMeChangepasswordApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OpenAPI::OAIMeChangepasswordApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
