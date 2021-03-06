// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPermission.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIPermissionPrivate {
    friend class OAIPermission;

     QList<OAIIdentitySet> granted_to;
     bool granted_to_isSet;
     bool granted_to_isValid;

     QList<QString> roles;
     bool roles_isSet;
     bool roles_isValid;
};

OAIPermission::OAIPermission()
    : d_ptr()
{
}

OAIPermission::OAIPermission(const OAIPermission& other)
    : d_ptr(other.d_ptr)
{
}

OAIPermission::OAIPermission(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIPermission::~OAIPermission() = default;

void OAIPermission::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIPermissionPrivate{});

        Q_D(OAIPermission);


        d->granted_to_isSet = false;
        d->granted_to_isValid = false;

        d->roles_isSet = false;
        d->roles_isValid = false;
    }
}

void OAIPermission::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPermission::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIPermission);

    d->granted_to_isValid = ::OpenAPI::fromJsonValue(d->granted_to, json[QString("grantedTo")]);
    d->granted_to_isSet = !json[QString("grantedTo")].isNull() && d->granted_to_isValid;

    d->roles_isValid = ::OpenAPI::fromJsonValue(d->roles, json[QString("roles")]);
    d->roles_isSet = !json[QString("roles")].isNull() && d->roles_isValid;
}

QString OAIPermission::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPermission::asJsonObject() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->granted_to.size() > 0) {
        obj.insert(QString("grantedTo"), ::OpenAPI::toJsonValue(d->granted_to));
    }
    if (d->roles.size() > 0) {
        obj.insert(QString("roles"), ::OpenAPI::toJsonValue(d->roles));
    }
    return obj;
}

QList<OAIIdentitySet> OAIPermission::getGrantedTo() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->granted_to;
}
void OAIPermission::setGrantedTo(const QList<OAIIdentitySet> &granted_to) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->granted_to = granted_to;
    d->granted_to_isSet = true;
}

bool OAIPermission::is_granted_to_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->granted_to_isSet;
}

bool OAIPermission::is_granted_to_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->granted_to_isValid;
}

QList<QString> OAIPermission::getRoles() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->roles;
}
void OAIPermission::setRoles(const QList<QString> &roles) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->roles = roles;
    d->roles_isSet = true;
}

bool OAIPermission::is_roles_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->roles_isSet;
}

bool OAIPermission::is_roles_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->roles_isValid;
}

bool OAIPermission::isSet() const {
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->granted_to.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPermission::isValid() const {
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
