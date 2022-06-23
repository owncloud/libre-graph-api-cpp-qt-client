// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIIdentity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIIdentityPrivate {
    friend class OAIIdentity;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QString id;
     bool id_isSet;
     bool id_isValid;
};

OAIIdentity::OAIIdentity()
    : d_ptr()
{
}

OAIIdentity::OAIIdentity(const OAIIdentity& other)
    : d_ptr(other.d_ptr)
{
}

OAIIdentity::OAIIdentity(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIIdentity::~OAIIdentity() = default;

void OAIIdentity::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIIdentityPrivate{});

        Q_D(OAIIdentity);


        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->id_isSet = false;
        d->id_isValid = false;
    }
}

void OAIIdentity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIdentity::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIIdentity);

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;
}

QString OAIIdentity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIdentity::asJsonObject() const {
    Q_D(const OAIIdentity);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    return obj;
}

QString OAIIdentity::getDisplayName() const {
    Q_D(const OAIIdentity);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIIdentity::setDisplayName(const QString &display_name) {
    Q_D(OAIIdentity);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIIdentity::is_display_name_Set() const{
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIIdentity::is_display_name_Valid() const{
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QString OAIIdentity::getId() const {
    Q_D(const OAIIdentity);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIIdentity::setId(const QString &id) {
    Q_D(OAIIdentity);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIIdentity::is_id_Set() const{
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIIdentity::is_id_Valid() const{
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

bool OAIIdentity::isSet() const {
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIdentity::isValid() const {
    Q_D(const OAIIdentity);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
