// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIItemReference.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIItemReferencePrivate {
    friend class OAIItemReference;

     QString drive_id;
     bool drive_id_isSet;
     bool drive_id_isValid;

     QString drive_type;
     bool drive_type_isSet;
     bool drive_type_isValid;

     QString id;
     bool id_isSet;
     bool id_isValid;

     QString name;
     bool name_isSet;
     bool name_isValid;

     QString path;
     bool path_isSet;
     bool path_isValid;

     QString share_id;
     bool share_id_isSet;
     bool share_id_isValid;
};

OAIItemReference::OAIItemReference()
    : d_ptr()
{
}

OAIItemReference::OAIItemReference(const OAIItemReference& other)
    : d_ptr(other.d_ptr)
{
}

OAIItemReference::OAIItemReference(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIItemReference::~OAIItemReference() = default;

void OAIItemReference::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIItemReferencePrivate{});

        Q_D(OAIItemReference);


        d->drive_id_isSet = false;
        d->drive_id_isValid = false;

        d->drive_type_isSet = false;
        d->drive_type_isValid = false;

        d->id_isSet = false;
        d->id_isValid = false;

        d->name_isSet = false;
        d->name_isValid = false;

        d->path_isSet = false;
        d->path_isValid = false;

        d->share_id_isSet = false;
        d->share_id_isValid = false;
    }
}

void OAIItemReference::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemReference::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIItemReference);

    d->drive_id_isValid = ::OpenAPI::fromJsonValue(d->drive_id, json[QString("driveId")]);
    d->drive_id_isSet = !json[QString("driveId")].isNull() && d->drive_id_isValid;

    d->drive_type_isValid = ::OpenAPI::fromJsonValue(d->drive_type, json[QString("driveType")]);
    d->drive_type_isSet = !json[QString("driveType")].isNull() && d->drive_type_isValid;

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->name_isValid = ::OpenAPI::fromJsonValue(d->name, json[QString("name")]);
    d->name_isSet = !json[QString("name")].isNull() && d->name_isValid;

    d->path_isValid = ::OpenAPI::fromJsonValue(d->path, json[QString("path")]);
    d->path_isSet = !json[QString("path")].isNull() && d->path_isValid;

    d->share_id_isValid = ::OpenAPI::fromJsonValue(d->share_id, json[QString("shareId")]);
    d->share_id_isSet = !json[QString("shareId")].isNull() && d->share_id_isValid;
}

QString OAIItemReference::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemReference::asJsonObject() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->drive_id_isSet) {
        obj.insert(QString("driveId"), ::OpenAPI::toJsonValue(d->drive_id));
    }
    if (d->drive_type_isSet) {
        obj.insert(QString("driveType"), ::OpenAPI::toJsonValue(d->drive_type));
    }
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(d->name));
    }
    if (d->path_isSet) {
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(d->path));
    }
    if (d->share_id_isSet) {
        obj.insert(QString("shareId"), ::OpenAPI::toJsonValue(d->share_id));
    }
    return obj;
}

QString OAIItemReference::getDriveId() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->drive_id;
}
void OAIItemReference::setDriveId(const QString &drive_id) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->drive_id = drive_id;
    d->drive_id_isSet = true;
}

bool OAIItemReference::is_drive_id_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->drive_id_isSet;
}

bool OAIItemReference::is_drive_id_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->drive_id_isValid;
}

QString OAIItemReference::getDriveType() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->drive_type;
}
void OAIItemReference::setDriveType(const QString &drive_type) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->drive_type = drive_type;
    d->drive_type_isSet = true;
}

bool OAIItemReference::is_drive_type_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->drive_type_isSet;
}

bool OAIItemReference::is_drive_type_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->drive_type_isValid;
}

QString OAIItemReference::getId() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIItemReference::setId(const QString &id) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIItemReference::is_id_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIItemReference::is_id_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QString OAIItemReference::getName() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->name;
}
void OAIItemReference::setName(const QString &name) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->name = name;
    d->name_isSet = true;
}

bool OAIItemReference::is_name_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->name_isSet;
}

bool OAIItemReference::is_name_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->name_isValid;
}

QString OAIItemReference::getPath() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->path;
}
void OAIItemReference::setPath(const QString &path) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->path = path;
    d->path_isSet = true;
}

bool OAIItemReference::is_path_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->path_isSet;
}

bool OAIItemReference::is_path_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->path_isValid;
}

QString OAIItemReference::getShareId() const {
    Q_D(const OAIItemReference);
    if(!d){
        return {};
    }
    return d->share_id;
}
void OAIItemReference::setShareId(const QString &share_id) {
    Q_D(OAIItemReference);
    Q_ASSERT(d);

    d->share_id = share_id;
    d->share_id_isSet = true;
}

bool OAIItemReference::is_share_id_Set() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }

    return d->share_id_isSet;
}

bool OAIItemReference::is_share_id_Valid() const{
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    return d->share_id_isValid;
}

bool OAIItemReference::isSet() const {
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->drive_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->drive_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->path_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->share_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemReference::isValid() const {
    Q_D(const OAIItemReference);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
