// model-body.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICollection_of_tags.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAICollection_of_tagsPrivate {
    friend class OAICollection_of_tags;

     QList<QString> value;
     bool value_isSet;
     bool value_isValid;
};

OAICollection_of_tags::OAICollection_of_tags()
    : d_ptr()
{
}

OAICollection_of_tags::OAICollection_of_tags(const OAICollection_of_tags& other)
    : d_ptr(other.d_ptr)
{
}

OAICollection_of_tags::OAICollection_of_tags(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAICollection_of_tags::~OAICollection_of_tags() = default;

void OAICollection_of_tags::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAICollection_of_tagsPrivate{});

        Q_D(OAICollection_of_tags);


        d->value_isSet = false;
        d->value_isValid = false;
    }
}

void OAICollection_of_tags::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICollection_of_tags::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAICollection_of_tags);

    d->value_isValid = ::OpenAPI::fromJsonValue(d->value, json[QString("value")]);
    d->value_isSet = !json[QString("value")].isNull() && d->value_isValid;
}

QString OAICollection_of_tags::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICollection_of_tags::asJsonObject() const {
    Q_D(const OAICollection_of_tags);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->value.size() > 0) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(d->value));
    }
    return obj;
}

QList<QString> OAICollection_of_tags::getValue() const {
    Q_D(const OAICollection_of_tags);
    if(!d){
        return {};
    }
    return d->value;
}
void OAICollection_of_tags::setValue(const QList<QString> &value) {
    Q_D(OAICollection_of_tags);
    Q_ASSERT(d);

    d->value = value;
    d->value_isSet = true;
}

bool OAICollection_of_tags::is_value_Set() const{
    Q_D(const OAICollection_of_tags);
    if(!d){
        return false;
    }

    return d->value_isSet;
}

bool OAICollection_of_tags::is_value_Valid() const{
    Q_D(const OAICollection_of_tags);
    if(!d){
        return false;
    }
    return d->value_isValid;
}

bool OAICollection_of_tags::isSet() const {
    Q_D(const OAICollection_of_tags);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->value.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICollection_of_tags::isValid() const {
    Q_D(const OAICollection_of_tags);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI