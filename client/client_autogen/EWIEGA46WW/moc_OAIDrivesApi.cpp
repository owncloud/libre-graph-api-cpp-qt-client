/****************************************************************************
** Meta object code from reading C++ file 'OAIDrivesApi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIDrivesApi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIDrivesApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__OAIDrivesApi_t {
    QByteArrayData data[28];
    char stringdata0[497];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OAIDrivesApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OAIDrivesApi_t qt_meta_stringdata_OpenAPI__OAIDrivesApi = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OpenAPI::OAIDrivesApi"
QT_MOC_LITERAL(1, 22, 17), // "createDriveSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "OAIDrive"
QT_MOC_LITERAL(4, 50, 7), // "summary"
QT_MOC_LITERAL(5, 58, 17), // "deleteDriveSignal"
QT_MOC_LITERAL(6, 76, 14), // "getDriveSignal"
QT_MOC_LITERAL(7, 91, 17), // "updateDriveSignal"
QT_MOC_LITERAL(8, 109, 21), // "createDriveSignalFull"
QT_MOC_LITERAL(9, 131, 21), // "OAIHttpRequestWorker*"
QT_MOC_LITERAL(10, 153, 6), // "worker"
QT_MOC_LITERAL(11, 160, 21), // "deleteDriveSignalFull"
QT_MOC_LITERAL(12, 182, 18), // "getDriveSignalFull"
QT_MOC_LITERAL(13, 201, 21), // "updateDriveSignalFull"
QT_MOC_LITERAL(14, 223, 18), // "createDriveSignalE"
QT_MOC_LITERAL(15, 242, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(16, 270, 10), // "error_type"
QT_MOC_LITERAL(17, 281, 9), // "error_str"
QT_MOC_LITERAL(18, 291, 18), // "deleteDriveSignalE"
QT_MOC_LITERAL(19, 310, 15), // "getDriveSignalE"
QT_MOC_LITERAL(20, 326, 18), // "updateDriveSignalE"
QT_MOC_LITERAL(21, 345, 22), // "createDriveSignalEFull"
QT_MOC_LITERAL(22, 368, 22), // "deleteDriveSignalEFull"
QT_MOC_LITERAL(23, 391, 19), // "getDriveSignalEFull"
QT_MOC_LITERAL(24, 411, 22), // "updateDriveSignalEFull"
QT_MOC_LITERAL(25, 434, 19), // "abortRequestsSignal"
QT_MOC_LITERAL(26, 454, 27), // "allPendingRequestsCompleted"
QT_MOC_LITERAL(27, 482, 14) // "tokenAvailable"

    },
    "OpenAPI::OAIDrivesApi\0createDriveSignal\0"
    "\0OAIDrive\0summary\0deleteDriveSignal\0"
    "getDriveSignal\0updateDriveSignal\0"
    "createDriveSignalFull\0OAIHttpRequestWorker*\0"
    "worker\0deleteDriveSignalFull\0"
    "getDriveSignalFull\0updateDriveSignalFull\0"
    "createDriveSignalE\0QNetworkReply::NetworkError\0"
    "error_type\0error_str\0deleteDriveSignalE\0"
    "getDriveSignalE\0updateDriveSignalE\0"
    "createDriveSignalEFull\0deleteDriveSignalEFull\0"
    "getDriveSignalEFull\0updateDriveSignalEFull\0"
    "abortRequestsSignal\0allPendingRequestsCompleted\0"
    "tokenAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OAIDrivesApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       7,    1,  116,    2, 0x06 /* Public */,
       8,    2,  119,    2, 0x06 /* Public */,
      11,    1,  124,    2, 0x06 /* Public */,
      12,    2,  127,    2, 0x06 /* Public */,
      13,    2,  132,    2, 0x06 /* Public */,
      14,    3,  137,    2, 0x06 /* Public */,
      18,    2,  144,    2, 0x06 /* Public */,
      19,    3,  149,    2, 0x06 /* Public */,
      20,    3,  156,    2, 0x06 /* Public */,
      21,    3,  163,    2, 0x06 /* Public */,
      22,    3,  170,    2, 0x06 /* Public */,
      23,    3,  177,    2, 0x06 /* Public */,
      24,    3,  184,    2, 0x06 /* Public */,
      25,    0,  191,    2, 0x06 /* Public */,
      26,    0,  192,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  193,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 3,   10,    4,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 3,   10,    4,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 3,   10,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15, QMetaType::QString,    4,   16,   17,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString,   16,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15, QMetaType::QString,    4,   16,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15, QMetaType::QString,    4,   16,   17,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 15, QMetaType::QString,   10,   16,   17,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 15, QMetaType::QString,   10,   16,   17,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 15, QMetaType::QString,   10,   16,   17,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 15, QMetaType::QString,   10,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OAIDrivesApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAIDrivesApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createDriveSignal((*reinterpret_cast< OAIDrive(*)>(_a[1]))); break;
        case 1: _t->deleteDriveSignal(); break;
        case 2: _t->getDriveSignal((*reinterpret_cast< OAIDrive(*)>(_a[1]))); break;
        case 3: _t->updateDriveSignal((*reinterpret_cast< OAIDrive(*)>(_a[1]))); break;
        case 4: _t->createDriveSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAIDrive(*)>(_a[2]))); break;
        case 5: _t->deleteDriveSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1]))); break;
        case 6: _t->getDriveSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAIDrive(*)>(_a[2]))); break;
        case 7: _t->updateDriveSignalFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< OAIDrive(*)>(_a[2]))); break;
        case 8: _t->createDriveSignalE((*reinterpret_cast< OAIDrive(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->deleteDriveSignalE((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->getDriveSignalE((*reinterpret_cast< OAIDrive(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->updateDriveSignalE((*reinterpret_cast< OAIDrive(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: _t->createDriveSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->deleteDriveSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: _t->getDriveSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 15: _t->updateDriveSignalEFull((*reinterpret_cast< OAIHttpRequestWorker*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->abortRequestsSignal(); break;
        case 17: _t->allPendingRequestsCompleted(); break;
        case 18: _t->tokenAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OAIHttpRequestWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 15:
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
            using _t = void (OAIDrivesApi::*)(OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::createDriveSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::deleteDriveSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::getDriveSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::updateDriveSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::createDriveSignalFull)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::deleteDriveSignalFull)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::getDriveSignalFull)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , OAIDrive );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::updateDriveSignalFull)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIDrive , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::createDriveSignalE)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::deleteDriveSignalE)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIDrive , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::getDriveSignalE)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIDrive , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::updateDriveSignalE)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::createDriveSignalEFull)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::deleteDriveSignalEFull)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::getDriveSignalEFull)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)(OAIHttpRequestWorker * , QNetworkReply::NetworkError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::updateDriveSignalEFull)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::abortRequestsSignal)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (OAIDrivesApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAIDrivesApi::allPendingRequestsCompleted)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OAIDrivesApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OAIDrivesApi.data,
    qt_meta_data_OpenAPI__OAIDrivesApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OAIDrivesApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OAIDrivesApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OAIDrivesApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OAIDrivesApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void OpenAPI::OAIDrivesApi::createDriveSignal(OAIDrive _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenAPI::OAIDrivesApi::deleteDriveSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OpenAPI::OAIDrivesApi::getDriveSignal(OAIDrive _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenAPI::OAIDrivesApi::updateDriveSignal(OAIDrive _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenAPI::OAIDrivesApi::createDriveSignalFull(OAIHttpRequestWorker * _t1, OAIDrive _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenAPI::OAIDrivesApi::deleteDriveSignalFull(OAIHttpRequestWorker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OpenAPI::OAIDrivesApi::getDriveSignalFull(OAIHttpRequestWorker * _t1, OAIDrive _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OpenAPI::OAIDrivesApi::updateDriveSignalFull(OAIHttpRequestWorker * _t1, OAIDrive _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OpenAPI::OAIDrivesApi::createDriveSignalE(OAIDrive _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OpenAPI::OAIDrivesApi::deleteDriveSignalE(QNetworkReply::NetworkError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OpenAPI::OAIDrivesApi::getDriveSignalE(OAIDrive _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OpenAPI::OAIDrivesApi::updateDriveSignalE(OAIDrive _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OpenAPI::OAIDrivesApi::createDriveSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OpenAPI::OAIDrivesApi::deleteDriveSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OpenAPI::OAIDrivesApi::getDriveSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void OpenAPI::OAIDrivesApi::updateDriveSignalEFull(OAIHttpRequestWorker * _t1, QNetworkReply::NetworkError _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void OpenAPI::OAIDrivesApi::abortRequestsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void OpenAPI::OAIDrivesApi::allPendingRequestsCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
