/****************************************************************************
** Meta object code from reading C++ file 'OAIGroupsApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIGroupsApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIGroupsApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIGroupsApi_t {
    QByteArrayData data[21];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIGroupsApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIGroupsApi_t qt_meta_stringdata_OpenAPI__OAIGroupsApi = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OpenAPI::OAIGroupsApi"
QT_MOC_LITERAL(1, 22, 17), // "createGroupSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "OAIGroup"
QT_MOC_LITERAL(4, 50, 7), // "summary"
QT_MOC_LITERAL(5, 58, 16), // "listGroupsSignal"
QT_MOC_LITERAL(6, 75, 22), // "OAICollection_of_group"
QT_MOC_LITERAL(7, 98, 21), // "createGroupSignalFull"
QT_MOC_LITERAL(8, 120, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(9, 142, 6), // "worker"
QT_MOC_LITERAL(10, 149, 20), // "listGroupsSignalFull"
QT_MOC_LITERAL(11, 170, 18), // "createGroupSignalE"
QT_MOC_LITERAL(12, 189, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(13, 217, 10), // "error_type"
QT_MOC_LITERAL(14, 228, 9), // "error_str"
QT_MOC_LITERAL(15, 238, 17), // "listGroupsSignalE"
QT_MOC_LITERAL(16, 256, 22), // "createGroupSignalEFull"
QT_MOC_LITERAL(17, 279, 21), // "listGroupsSignalEFull"
QT_MOC_LITERAL(18, 301, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(19, 321, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(20, 349, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIGroupsApi\0createGroupSignal\0"
    "\0OAIGroup\0summary\0listGroupsSignal\0"
    "OAICollection_of_group\0createGroupSignalFull\0"
    "OAIHttpRequestWorker*\0worker\0"
    "listGroupsSignalFull\0createGroupSignalE\0"
    "QNetworkReply::NetworkError\0error_type\0"
    "error_str\0listGroupsSignalE\0"
    "createGroupSignalEFull\0listGroupsSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIGroupsApi[] = {

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

void OpenAPI::OAIGroupsApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIGroupsApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createGroupSignal((*reinterpret_cast< OAIGroup(*)>(_a[1]))); break;
        case 1: _t->listGroupsSignal((*reinterpret_cast< OAICollection_of_group(*)>(_a[1]))); break;
        case 2: _t->createGroupSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAIGroup(*)>(_a[2]))); break;
        case 3: _t->listGroupsSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAICollection_of_group(*)>(_a[2]))); break;
        case 4: _t->createGroupSignalE((*reinterpret_cast< OAIGroup(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->listGroupsSignalE((*reinterpret_cast< OAICollection_of_group(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->createGroupSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->listGroupsSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
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
            using _t = void (OAIGroupsApi::*)(OAIGroup );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::createGroupSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAICollection_of_group );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::listGroupsSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAIHttpRequestWorker * , OAIGroup );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::createGroupSignalFull)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAIHttpRequestWorker * , OAICollection_of_group );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::listGroupsSignalFull)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAIGroup , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::createGroupSignalE)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAICollection_of_group , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::listGroupsSignalE)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::createGroupSignalEFull)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::listGroupsSignalEFull)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::abortRequestsSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OAIGroupsApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIGroupsApi::allPendingRequestsCompleted)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIGroupsApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIGroupsApi.data,
    qt_meta_data_OpenAPI__OAIGroupsApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIGroupsApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIGroupsApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIGroupsApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIGroupsApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpenAPI::OAIGroupsApi::createGroupSignal(OAIGroup _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenAPI::OAIGroupsApi::listGroupsSignal(OAICollection_of_group _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenAPI::OAIGroupsApi::createGroupSignalFull(OAIHttpRequestWorker * _t1, OAIGroup _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIGroupsApi::listGroupsSignalFull(OAIHttpRequestWorker * _t1, OAICollection_of_group _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIGroupsApi::createGroupSignalE(OAIGroup _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenAPI::OAIGroupsApi::listGroupsSignalE(OAICollection_of_group _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OpenAPI::OAIGroupsApi::createGroupSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OpenAPI::OAIGroupsApi::listGroupsSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OpenAPI::OAIGroupsApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OpenAPI::OAIGroupsApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
