// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.13.2
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISpecialFolder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAISpecialFolderPrivate {
    friend class OAISpecialFolder;

     QString name;
     bool name_isSet;
     bool name_isValid;
};

OAISpecialFolder::OAISpecialFolder()
    : d_ptr()
{
}

OAISpecialFolder::OAISpecialFolder(const OAISpecialFolder& other)
    : d_ptr(other.d_ptr)
{
}

OAISpecialFolder::OAISpecialFolder(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAISpecialFolder::~OAISpecialFolder() = default;

void OAISpecialFolder::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAISpecialFolderPrivate{});

        Q_D(OAISpecialFolder);


        d->name_isSet = false;
        d->name_isValid = false;
    }
}

void OAISpecialFolder::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISpecialFolder::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAISpecialFolder);

    d->name_isValid = ::OpenAPI::fromJsonValue(d->name, json[QString("name")]);
    d->name_isSet = !json[QString("name")].isNull() && d->name_isValid;
}

QString OAISpecialFolder::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISpecialFolder::asJsonObject() const {
    Q_D(const OAISpecialFolder);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(d->name));
    }
    return obj;
}

QString OAISpecialFolder::getName() const {
    Q_D(const OAISpecialFolder);
    if(!d){
        return {};
    }
    return d->name;
}
void OAISpecialFolder::setName(const QString &name) {
    Q_D(OAISpecialFolder);
    Q_ASSERT(d);

    d->name = name;
    d->name_isSet = true;
}

bool OAISpecialFolder::is_name_Set() const{
    Q_D(const OAISpecialFolder);
    if(!d){
        return false;
    }

    return d->name_isSet;
}

bool OAISpecialFolder::is_name_Valid() const{
    Q_D(const OAISpecialFolder);
    if(!d){
        return false;
    }
    return d->name_isValid;
}

bool OAISpecialFolder::isSet() const {
    Q_D(const OAISpecialFolder);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISpecialFolder::isValid() const {
    Q_D(const OAISpecialFolder);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
