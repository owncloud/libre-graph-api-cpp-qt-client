/****************************************************************************
** Meta object code from reading C++ file 'OAIOauth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OAIOauth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OAIOauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAPI__ReplyServer_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__ReplyServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__ReplyServer_t qt_meta_stringdata_OpenAPI__ReplyServer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OpenAPI::ReplyServer"
QT_MOC_LITERAL(1, 21, 12), // "dataReceived"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(4, 57, 11), // "onConnected"
QT_MOC_LITERAL(5, 69, 4), // "read"
QT_MOC_LITERAL(6, 74, 5), // "start"
QT_MOC_LITERAL(7, 80, 4) // "stop"

    },
    "OpenAPI::ReplyServer\0dataReceived\0\0"
    "QMap<QString,QString>\0onConnected\0"
    "read\0start\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__ReplyServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenAPI::ReplyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReplyServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->onConnected(); break;
        case 2: _t->read(); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReplyServer::*)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplyServer::dataReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::ReplyServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__ReplyServer.data,
    qt_meta_data_OpenAPI__ReplyServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::ReplyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::ReplyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__ReplyServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int OpenAPI::ReplyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
void OpenAPI::ReplyServer::dataReceived(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OpenAPI__OauthBase_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OauthBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OauthBase_t qt_meta_stringdata_OpenAPI__OauthBase = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OpenAPI::OauthBase"
QT_MOC_LITERAL(1, 19, 20), // "authenticationNeeded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "tokenReceived"
QT_MOC_LITERAL(4, 55, 28), // "authenticationNeededCallback"
QT_MOC_LITERAL(5, 84, 8), // "onFinish"
QT_MOC_LITERAL(6, 93, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 108, 3) // "rep"

    },
    "OpenAPI::OauthBase\0authenticationNeeded\0"
    "\0tokenReceived\0authenticationNeededCallback\0"
    "onFinish\0QNetworkReply*\0rep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OauthBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void OpenAPI::OauthBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OauthBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationNeeded(); break;
        case 1: _t->tokenReceived(); break;
        case 2: _t->authenticationNeededCallback(); break;
        case 3: _t->onFinish((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OauthBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OauthBase::authenticationNeeded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OauthBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OauthBase::tokenReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OauthBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OauthBase.data,
    qt_meta_data_OpenAPI__OauthBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OauthBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OauthBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OauthBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenAPI::OauthBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OpenAPI::OauthBase::authenticationNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OpenAPI::OauthBase::tokenReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_OpenAPI__OauthCode_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OauthCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OauthCode_t qt_meta_stringdata_OpenAPI__OauthCode = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OpenAPI::OauthCode"
QT_MOC_LITERAL(1, 19, 28), // "authenticationNeededCallback"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 22), // "onVerificationReceived"
QT_MOC_LITERAL(4, 72, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(5, 94, 8) // "response"

    },
    "OpenAPI::OauthCode\0authenticationNeededCallback\0"
    "\0onVerificationReceived\0QMap<QString,QString>\0"
    "response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OauthCode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void OpenAPI::OauthCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OauthCode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationNeededCallback(); break;
        case 1: _t->onVerificationReceived((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OauthCode::staticMetaObject = { {
    QMetaObject::SuperData::link<OauthBase::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OauthCode.data,
    qt_meta_data_OpenAPI__OauthCode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OauthCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OauthCode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OauthCode.stringdata0))
        return static_cast<void*>(this);
    return OauthBase::qt_metacast(_clname);
}

int OpenAPI::OauthCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OauthBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_OpenAPI__OauthImplicit_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OauthImplicit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OauthImplicit_t qt_meta_stringdata_OpenAPI__OauthImplicit = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OpenAPI::OauthImplicit"
QT_MOC_LITERAL(1, 23, 28), // "authenticationNeededCallback"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 21), // "ImplicitTokenReceived"
QT_MOC_LITERAL(4, 75, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(5, 97, 8) // "response"

    },
    "OpenAPI::OauthImplicit\0"
    "authenticationNeededCallback\0\0"
    "ImplicitTokenReceived\0QMap<QString,QString>\0"
    "response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OauthImplicit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void OpenAPI::OauthImplicit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OauthImplicit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationNeededCallback(); break;
        case 1: _t->ImplicitTokenReceived((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OauthImplicit::staticMetaObject = { {
    QMetaObject::SuperData::link<OauthBase::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OauthImplicit.data,
    qt_meta_data_OpenAPI__OauthImplicit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OauthImplicit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OauthImplicit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OauthImplicit.stringdata0))
        return static_cast<void*>(this);
    return OauthBase::qt_metacast(_clname);
}

int OpenAPI::OauthImplicit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OauthBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_OpenAPI__OauthCredentials_t {
    QByteArrayData data[3];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OauthCredentials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OauthCredentials_t qt_meta_stringdata_OpenAPI__OauthCredentials = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OpenAPI::OauthCredentials"
QT_MOC_LITERAL(1, 26, 28), // "authenticationNeededCallback"
QT_MOC_LITERAL(2, 55, 0) // ""

    },
    "OpenAPI::OauthCredentials\0"
    "authenticationNeededCallback\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OauthCredentials[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OauthCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OauthCredentials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationNeededCallback(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OauthCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<OauthBase::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OauthCredentials.data,
    qt_meta_data_OpenAPI__OauthCredentials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OauthCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OauthCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OauthCredentials.stringdata0))
        return static_cast<void*>(this);
    return OauthBase::qt_metacast(_clname);
}

int OpenAPI::OauthCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OauthBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OpenAPI__OauthPassword_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAPI__OauthPassword_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAPI__OauthPassword_t qt_meta_stringdata_OpenAPI__OauthPassword = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OpenAPI::OauthPassword"
QT_MOC_LITERAL(1, 23, 28), // "authenticationNeededCallback"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "OpenAPI::OauthPassword\0"
    "authenticationNeededCallback\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAPI__OauthPassword[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpenAPI::OauthPassword::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OauthPassword *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authenticationNeededCallback(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OpenAPI::OauthPassword::staticMetaObject = { {
    QMetaObject::SuperData::link<OauthBase::staticMetaObject>(),
    qt_meta_stringdata_OpenAPI__OauthPassword.data,
    qt_meta_data_OpenAPI__OauthPassword,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenAPI::OauthPassword::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAPI::OauthPassword::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAPI__OauthPassword.stringdata0))
        return static_cast<void*>(this);
    return OauthBase::qt_metacast(_clname);
}

int OpenAPI::OauthPassword::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OauthBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
