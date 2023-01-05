/****************************************************************************
** Meta object code from reading C++ file 'OAIMeDriveRootChildrenApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIMeDriveRootChildrenApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIMeDriveRootChildrenApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi_t {
    QByteArrayData data[16];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi_t qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi = {
    {
QT_MOC_LITERAL(0, 0, 34), // "OpenAPI::OAIMeDriveRootChildr..."
QT_MOC_LITERAL(1, 35, 21), // "homeGetChildrenSignal"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 27), // "OAICollection_of_driveItems"
QT_MOC_LITERAL(4, 86, 7), // "summary"
QT_MOC_LITERAL(5, 94, 25), // "homeGetChildrenSignalFull"
QT_MOC_LITERAL(6, 120, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(7, 142, 6), // "worker"
QT_MOC_LITERAL(8, 149, 22), // "homeGetChildrenSignalE"
QT_MOC_LITERAL(9, 172, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 200, 10), // "error_type"
QT_MOC_LITERAL(11, 211, 9), // "error_str"
QT_MOC_LITERAL(12, 221, 26), // "homeGetChildrenSignalEFull"
QT_MOC_LITERAL(13, 248, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(14, 268, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(15, 296, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIMeDriveRootChildrenApi\0"
    "homeGetChildrenSignal\0\0"
    "OAICollection_of_driveItems\0summary\0"
    "homeGetChildrenSignalFull\0"
    "OAIHttpRequestWorker*\0worker\0"
    "homeGetChildrenSignalE\0"
    "QNetworkReply::NetworkError\0error_type\0"
    "error_str\0homeGetChildrenSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIMeDriveRootChildrenApi[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,
       5,    2,   52,    2, 0x06 /* Public */,
       8,    3,   57,    2, 0x06 /* Public */,
      12,    3,   64,    2, 0x06 /* Public */,
      13,    0,   71,    2, 0x06 /* Public */,
      14,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, QMetaType::QString,    4,   10,   11,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 9, QMetaType::QString,    7,   10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OAIMeDriveRootChildrenApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIMeDriveRootChildrenApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->homeGetChildrenSignal((*reinterpret_cast< OAICollection_of_driveItems(*)>(_a[1]))); break;
        case 1: _t->homeGetChildrenSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAICollection_of_driveItems(*)>(_a[2]))); break;
        case 2: _t->homeGetChildrenSignalE((*reinterpret_cast< OAICollection_of_driveItems(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->homeGetChildrenSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
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
            case 1:
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
            using _t = void (OAIMeDriveRootChildrenApi::*)(OAICollection_of_driveItems );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::homeGetChildrenSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIMeDriveRootChildrenApi::*)(OAIHttpRequestWorker * , OAICollection_of_driveItems );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::homeGetChildrenSignalFull)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIMeDriveRootChildrenApi::*)(OAICollection_of_driveItems , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::homeGetChildrenSignalE)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIMeDriveRootChildrenApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::homeGetChildrenSignalEFull)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIMeDriveRootChildrenApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::abortRequestsSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIMeDriveRootChildrenApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDriveRootChildrenApi::allPendingRequestsCompleted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIMeDriveRootChildrenApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi.data,
    qt_meta_data_OpenAPI__OAIMeDriveRootChildrenApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIMeDriveRootChildrenApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIMeDriveRootChildrenApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIMeDriveRootChildrenApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIMeDriveRootChildrenApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpenAPI::OAIMeDriveRootChildrenApi::homeGetChildrenSignal(OAICollection_of_driveItems _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenAPI::OAIMeDriveRootChildrenApi::homeGetChildrenSignalFull(OAIHttpRequestWorker * _t1, OAICollection_of_driveItems _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenAPI::OAIMeDriveRootChildrenApi::homeGetChildrenSignalE(OAICollection_of_driveItems _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIMeDriveRootChildrenApi::homeGetChildrenSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIMeDriveRootChildrenApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OpenAPI::OAIMeDriveRootChildrenApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
