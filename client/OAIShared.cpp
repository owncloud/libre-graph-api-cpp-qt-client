// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.2
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIShared.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAISharedPrivate {
    friend class OAIShared;

     OAIIdentitySet owner;
     bool owner_isSet;
     bool owner_isValid;

     QString scope;
     bool scope_isSet;
     bool scope_isValid;

     OAIIdentitySet shared_by;
     bool shared_by_isSet;
     bool shared_by_isValid;

     QDateTime shared_date_time;
     bool shared_date_time_isSet;
     bool shared_date_time_isValid;
};

OAIShared::OAIShared()
    : d_ptr()
{
}

OAIShared::OAIShared(const OAIShared& other)
    : d_ptr(other.d_ptr)
{
}

OAIShared::OAIShared(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIShared::~OAIShared() = default;

void OAIShared::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAISharedPrivate{});

        Q_D(OAIShared);


        d->owner_isSet = false;
        d->owner_isValid = false;

        d->scope_isSet = false;
        d->scope_isValid = false;

        d->shared_by_isSet = false;
        d->shared_by_isValid = false;

        d->shared_date_time_isSet = false;
        d->shared_date_time_isValid = false;
    }
}

void OAIShared::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIShared::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIShared);

    d->owner_isValid = ::OpenAPI::fromJsonValue(d->owner, json[QString("owner")]);
    d->owner_isSet = !json[QString("owner")].isNull() && d->owner_isValid;

    d->scope_isValid = ::OpenAPI::fromJsonValue(d->scope, json[QString("scope")]);
    d->scope_isSet = !json[QString("scope")].isNull() && d->scope_isValid;

    d->shared_by_isValid = ::OpenAPI::fromJsonValue(d->shared_by, json[QString("sharedBy")]);
    d->shared_by_isSet = !json[QString("sharedBy")].isNull() && d->shared_by_isValid;

    d->shared_date_time_isValid = ::OpenAPI::fromJsonValue(d->shared_date_time, json[QString("sharedDateTime")]);
    d->shared_date_time_isSet = !json[QString("sharedDateTime")].isNull() && d->shared_date_time_isValid;
}

QString OAIShared::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIShared::asJsonObject() const {
    Q_D(const OAIShared);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->owner.isSet()) {
        obj.insert(QString("owner"), ::OpenAPI::toJsonValue(d->owner));
    }
    if (d->scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(d->scope));
    }
    if (d->shared_by.isSet()) {
        obj.insert(QString("sharedBy"), ::OpenAPI::toJsonValue(d->shared_by));
    }
    if (d->shared_date_time_isSet) {
        obj.insert(QString("sharedDateTime"), ::OpenAPI::toJsonValue(d->shared_date_time));
    }
    return obj;
}

OAIIdentitySet OAIShared::getOwner() const {
    Q_D(const OAIShared);
    if(!d){
        return {};
    }
    return d->owner;
}
void OAIShared::setOwner(const OAIIdentitySet &owner) {
    Q_D(OAIShared);
    Q_ASSERT(d);

    d->owner = owner;
    d->owner_isSet = true;
}

bool OAIShared::is_owner_Set() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }

    return d->owner_isSet;
}

bool OAIShared::is_owner_Valid() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    return d->owner_isValid;
}

QString OAIShared::getScope() const {
    Q_D(const OAIShared);
    if(!d){
        return {};
    }
    return d->scope;
}
void OAIShared::setScope(const QString &scope) {
    Q_D(OAIShared);
    Q_ASSERT(d);

    d->scope = scope;
    d->scope_isSet = true;
}

bool OAIShared::is_scope_Set() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }

    return d->scope_isSet;
}

bool OAIShared::is_scope_Valid() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    return d->scope_isValid;
}

OAIIdentitySet OAIShared::getSharedBy() const {
    Q_D(const OAIShared);
    if(!d){
        return {};
    }
    return d->shared_by;
}
void OAIShared::setSharedBy(const OAIIdentitySet &shared_by) {
    Q_D(OAIShared);
    Q_ASSERT(d);

    d->shared_by = shared_by;
    d->shared_by_isSet = true;
}

bool OAIShared::is_shared_by_Set() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }

    return d->shared_by_isSet;
}

bool OAIShared::is_shared_by_Valid() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    return d->shared_by_isValid;
}

QDateTime OAIShared::getSharedDateTime() const {
    Q_D(const OAIShared);
    if(!d){
        return {};
    }
    return d->shared_date_time;
}
void OAIShared::setSharedDateTime(const QDateTime &shared_date_time) {
    Q_D(OAIShared);
    Q_ASSERT(d);

    d->shared_date_time = shared_date_time;
    d->shared_date_time_isSet = true;
}

bool OAIShared::is_shared_date_time_Set() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }

    return d->shared_date_time_isSet;
}

bool OAIShared::is_shared_date_time_Valid() const{
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    return d->shared_date_time_isValid;
}

bool OAIShared::isSet() const {
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->owner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->scope_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->shared_by.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->shared_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIShared::isValid() const {
    Q_D(const OAIShared);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
