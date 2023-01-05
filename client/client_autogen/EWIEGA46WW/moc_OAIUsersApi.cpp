/****************************************************************************
** Meta object code from reading C++ file 'OAIUsersApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIUsersApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIUsersApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIUsersApi_t {
    QByteArrayData data[21];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIUsersApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIUsersApi_t qt_meta_stringdata_OpenAPI__OAIUsersApi = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OpenAPI::OAIUsersApi"
QT_MOC_LITERAL(1, 21, 16), // "createUserSignal"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "OAIUser"
QT_MOC_LITERAL(4, 47, 7), // "summary"
QT_MOC_LITERAL(5, 55, 15), // "listUsersSignal"
QT_MOC_LITERAL(6, 71, 21), // "OAICollection_of_user"
QT_MOC_LITERAL(7, 93, 20), // "createUserSignalFull"
QT_MOC_LITERAL(8, 114, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(9, 136, 6), // "worker"
QT_MOC_LITERAL(10, 143, 19), // "listUsersSignalFull"
QT_MOC_LITERAL(11, 163, 17), // "createUserSignalE"
QT_MOC_LITERAL(12, 181, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(13, 209, 10), // "error_type"
QT_MOC_LITERAL(14, 220, 9), // "error_str"
QT_MOC_LITERAL(15, 230, 16), // "listUsersSignalE"
QT_MOC_LITERAL(16, 247, 21), // "createUserSignalEFull"
QT_MOC_LITERAL(17, 269, 20), // "listUsersSignalEFull"
QT_MOC_LITERAL(18, 290, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(19, 310, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(20, 338, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIUsersApi\0createUserSignal\0"
    "\0OAIUser\0summary\0listUsersSignal\0"
    "OAICollection_of_user\0createUserSignalFull\0"
    "OAIHttpRequestWorker*\0worker\0"
    "listUsersSignalFull\0createUserSignalE\0"
    "QNetworkReply::NetworkError\0error_type\0"
    "error_str\0listUsersSignalE\0"
    "createUserSignalEFull\0listUsersSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIUsersApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    2,   75,    2, 0x06 /* Public */,
      10,    2,   80,    2, 0x06 /* Public */,
      11,    3,   85,    2, 0x06 /* Public */,
      15,    3,   92,    2, 0x06 /* Public */,
      16,    3,   99,    2, 0x06 /* Public */,
      17,    3,  106,    2, 0x06 /* Public */,
      18,    0,  113,    2, 0x06 /* Public */,
      19,    0,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 3,    9,    4,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 6,    9,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12, QMetaType::QString,    4,   13,   14,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 12, QMetaType::QString,    4,   13,   14,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 12, QMetaType::QString,    9,   13,   14,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 12, QMetaType::QString,    9,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OAIUsersApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIUsersApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createUserSignal((*reinterpret_cast< OAIUser(*)>(_a[1]))); break;
        case 1: _t->listUsersSignal((*reinterpret_cast< OAICollection_of_user(*)>(_a[1]))); break;
        case 2: _t->createUserSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAIUser(*)>(_a[2]))); break;
        case 3: _t->listUsersSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAICollection_of_user(*)>(_a[2]))); break;
        case 4: _t->createUserSignalE((*reinterpret_cast< OAIUser(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->listUsersSignalE((*reinterpret_cast< OAICollection_of_user(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->createUserSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->listUsersSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 8: _t->abortRequestsSignal(); break;
        case 9: _t->allPendingRequestsCompleted(); break;
        case 10: _t->tokenAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 7:
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
            using _t = void (OAIUsersApi::*)(OAIUser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::createUserSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAICollection_of_user );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::listUsersSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAIHttpRequestWorker * , OAIUser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::createUserSignalFull)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAIHttpRequestWorker * , OAICollection_of_user );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::listUsersSignalFull)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAIUser , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::createUserSignalE)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAICollection_of_user , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::listUsersSignalE)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::createUserSignalEFull)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::listUsersSignalEFull)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::abortRequestsSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OAIUsersApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIUsersApi::allPendingRequestsCompleted)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIUsersApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIUsersApi.data,
    qt_meta_data_OpenAPI__OAIUsersApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIUsersApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIUsersApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIUsersApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIUsersApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OpenAPI::OAIUsersApi::createUserSignal(OAIUser _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenAPI::OAIUsersApi::listUsersSignal(OAICollection_of_user _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenAPI::OAIUsersApi::createUserSignalFull(OAIHttpRequestWorker * _t1, OAIUser _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIUsersApi::listUsersSignalFull(OAIHttpRequestWorker * _t1, OAICollection_of_user _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIUsersApi::createUserSignalE(OAIUser _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenAPI::OAIUsersApi::listUsersSignalE(OAICollection_of_user _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OpenAPI::OAIUsersApi::createUserSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OpenAPI::OAIUsersApi::listUsersSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OpenAPI::OAIUsersApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OpenAPI::OAIUsersApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
