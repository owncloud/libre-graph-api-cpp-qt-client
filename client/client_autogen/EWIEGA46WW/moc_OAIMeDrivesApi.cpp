/****************************************************************************
** Meta object code from reading C++ file 'OAIMeDrivesApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIMeDrivesApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIMeDrivesApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIMeDrivesApi_t {
    QByteArrayData data[16];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIMeDrivesApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIMeDrivesApi_t qt_meta_stringdata_OpenAPI__OAIMeDrivesApi = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OpenAPI::OAIMeDrivesApi"
QT_MOC_LITERAL(1, 24, 18), // "listMyDrivesSignal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "OAICollection_of_drives"
QT_MOC_LITERAL(4, 68, 7), // "summary"
QT_MOC_LITERAL(5, 76, 22), // "listMyDrivesSignalFull"
QT_MOC_LITERAL(6, 99, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(7, 121, 6), // "worker"
QT_MOC_LITERAL(8, 128, 19), // "listMyDrivesSignalE"
QT_MOC_LITERAL(9, 148, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 176, 10), // "error_type"
QT_MOC_LITERAL(11, 187, 9), // "error_str"
QT_MOC_LITERAL(12, 197, 23), // "listMyDrivesSignalEFull"
QT_MOC_LITERAL(13, 221, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(14, 241, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(15, 269, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIMeDrivesApi\0listMyDrivesSignal\0"
    "\0OAICollection_of_drives\0summary\0"
    "listMyDrivesSignalFull\0OAIHttpRequestWorker*\0"
    "worker\0listMyDrivesSignalE\0"
    "QNetworkReply::NetworkError\0error_type\0"
    "error_str\0listMyDrivesSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIMeDrivesApi[] = {

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

void OpenAPI::OAIMeDrivesApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIMeDrivesApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->listMyDrivesSignal((*reinterpret_cast< OAICollection_of_drives(*)>(_a[1]))); break;
        case 1: _t->listMyDrivesSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAICollection_of_drives(*)>(_a[2]))); break;
        case 2: _t->listMyDrivesSignalE((*reinterpret_cast< OAICollection_of_drives(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->listMyDrivesSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
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
            using _t = void (OAIMeDrivesApi::*)(OAICollection_of_drives );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::listMyDrivesSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIMeDrivesApi::*)(OAIHttpRequestWorker * , OAICollection_of_drives );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::listMyDrivesSignalFull)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIMeDrivesApi::*)(OAICollection_of_drives , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::listMyDrivesSignalE)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIMeDrivesApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::listMyDrivesSignalEFull)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIMeDrivesApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::abortRequestsSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIMeDrivesApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIMeDrivesApi::allPendingRequestsCompleted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIMeDrivesApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIMeDrivesApi.data,
    qt_meta_data_OpenAPI__OAIMeDrivesApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIMeDrivesApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIMeDrivesApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIMeDrivesApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIMeDrivesApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpenAPI::OAIMeDrivesApi::listMyDrivesSignal(OAICollection_of_drives _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenAPI::OAIMeDrivesApi::listMyDrivesSignalFull(OAIHttpRequestWorker * _t1, OAICollection_of_drives _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenAPI::OAIMeDrivesApi::listMyDrivesSignalE(OAICollection_of_drives _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIMeDrivesApi::listMyDrivesSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIMeDrivesApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OpenAPI::OAIMeDrivesApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
