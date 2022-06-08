// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.3
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFileSystemInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIFileSystemInfoPrivate {
    friend class OAIFileSystemInfo;

     QDateTime created_date_time;
     bool created_date_time_isSet;
     bool created_date_time_isValid;

     QDateTime last_accessed_date_time;
     bool last_accessed_date_time_isSet;
     bool last_accessed_date_time_isValid;

     QDateTime last_modified_date_time;
     bool last_modified_date_time_isSet;
     bool last_modified_date_time_isValid;
};

OAIFileSystemInfo::OAIFileSystemInfo()
    : d_ptr()
{
}

OAIFileSystemInfo::OAIFileSystemInfo(const OAIFileSystemInfo& other)
    : d_ptr(other.d_ptr)
{
}

OAIFileSystemInfo::OAIFileSystemInfo(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIFileSystemInfo::~OAIFileSystemInfo() = default;

void OAIFileSystemInfo::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIFileSystemInfoPrivate{});

        Q_D(OAIFileSystemInfo);


        d->created_date_time_isSet = false;
        d->created_date_time_isValid = false;

        d->last_accessed_date_time_isSet = false;
        d->last_accessed_date_time_isValid = false;

        d->last_modified_date_time_isSet = false;
        d->last_modified_date_time_isValid = false;
    }
}

void OAIFileSystemInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFileSystemInfo::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIFileSystemInfo);

    d->created_date_time_isValid = ::OpenAPI::fromJsonValue(d->created_date_time, json[QString("createdDateTime")]);
    d->created_date_time_isSet = !json[QString("createdDateTime")].isNull() && d->created_date_time_isValid;

    d->last_accessed_date_time_isValid = ::OpenAPI::fromJsonValue(d->last_accessed_date_time, json[QString("lastAccessedDateTime")]);
    d->last_accessed_date_time_isSet = !json[QString("lastAccessedDateTime")].isNull() && d->last_accessed_date_time_isValid;

    d->last_modified_date_time_isValid = ::OpenAPI::fromJsonValue(d->last_modified_date_time, json[QString("lastModifiedDateTime")]);
    d->last_modified_date_time_isSet = !json[QString("lastModifiedDateTime")].isNull() && d->last_modified_date_time_isValid;
}

QString OAIFileSystemInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFileSystemInfo::asJsonObject() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(d->created_date_time));
    }
    if (d->last_accessed_date_time_isSet) {
        obj.insert(QString("lastAccessedDateTime"), ::OpenAPI::toJsonValue(d->last_accessed_date_time));
    }
    if (d->last_modified_date_time_isSet) {
        obj.insert(QString("lastModifiedDateTime"), ::OpenAPI::toJsonValue(d->last_modified_date_time));
    }
    return obj;
}

QDateTime OAIFileSystemInfo::getCreatedDateTime() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return {};
    }
    return d->created_date_time;
}
void OAIFileSystemInfo::setCreatedDateTime(const QDateTime &created_date_time) {
    Q_D(OAIFileSystemInfo);
    Q_ASSERT(d);

    d->created_date_time = created_date_time;
    d->created_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_created_date_time_Set() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }

    return d->created_date_time_isSet;
}

bool OAIFileSystemInfo::is_created_date_time_Valid() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }
    return d->created_date_time_isValid;
}

QDateTime OAIFileSystemInfo::getLastAccessedDateTime() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return {};
    }
    return d->last_accessed_date_time;
}
void OAIFileSystemInfo::setLastAccessedDateTime(const QDateTime &last_accessed_date_time) {
    Q_D(OAIFileSystemInfo);
    Q_ASSERT(d);

    d->last_accessed_date_time = last_accessed_date_time;
    d->last_accessed_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_last_accessed_date_time_Set() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }

    return d->last_accessed_date_time_isSet;
}

bool OAIFileSystemInfo::is_last_accessed_date_time_Valid() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }
    return d->last_accessed_date_time_isValid;
}

QDateTime OAIFileSystemInfo::getLastModifiedDateTime() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return {};
    }
    return d->last_modified_date_time;
}
void OAIFileSystemInfo::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    Q_D(OAIFileSystemInfo);
    Q_ASSERT(d);

    d->last_modified_date_time = last_modified_date_time;
    d->last_modified_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_last_modified_date_time_Set() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }

    return d->last_modified_date_time_isSet;
}

bool OAIFileSystemInfo::is_last_modified_date_time_Valid() const{
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }
    return d->last_modified_date_time_isValid;
}

bool OAIFileSystemInfo::isSet() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->last_accessed_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->last_modified_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFileSystemInfo::isValid() const {
    Q_D(const OAIFileSystemInfo);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
