// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.4
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIExportPersonalData_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIExportPersonalData_requestPrivate {
    friend class OAIExportPersonalData_request;

     QString storage_location;
     bool storage_location_isSet;
     bool storage_location_isValid;
};

OAIExportPersonalData_request::OAIExportPersonalData_request()
    : d_ptr()
{
}

OAIExportPersonalData_request::OAIExportPersonalData_request(const OAIExportPersonalData_request& other)
    : d_ptr(other.d_ptr)
{
}

OAIExportPersonalData_request::OAIExportPersonalData_request(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIExportPersonalData_request::~OAIExportPersonalData_request() = default;

void OAIExportPersonalData_request::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIExportPersonalData_requestPrivate{});

        Q_D(OAIExportPersonalData_request);


        d->storage_location_isSet = false;
        d->storage_location_isValid = false;
    }
}

void OAIExportPersonalData_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIExportPersonalData_request::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIExportPersonalData_request);

    d->storage_location_isValid = ::OpenAPI::fromJsonValue(d->storage_location, json[QString("storageLocation")]);
    d->storage_location_isSet = !json[QString("storageLocation")].isNull() && d->storage_location_isValid;
}

QString OAIExportPersonalData_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIExportPersonalData_request::asJsonObject() const {
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->storage_location_isSet) {
        obj.insert(QString("storageLocation"), ::OpenAPI::toJsonValue(d->storage_location));
    }
    return obj;
}

QString OAIExportPersonalData_request::getStorageLocation() const {
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return {};
    }
    return d->storage_location;
}
void OAIExportPersonalData_request::setStorageLocation(const QString &storage_location) {
    Q_D(OAIExportPersonalData_request);
    Q_ASSERT(d);

    d->storage_location = storage_location;
    d->storage_location_isSet = true;
}

bool OAIExportPersonalData_request::is_storage_location_Set() const{
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return false;
    }

    return d->storage_location_isSet;
}

bool OAIExportPersonalData_request::is_storage_location_Valid() const{
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return false;
    }
    return d->storage_location_isValid;
}

bool OAIExportPersonalData_request::isSet() const {
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->storage_location_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIExportPersonalData_request::isValid() const {
    Q_D(const OAIExportPersonalData_request);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
