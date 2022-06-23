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

#include "OAICollection_of_group.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAICollection_of_groupPrivate {
    friend class OAICollection_of_group;

     QList<OAIGroup> value;
     bool value_isSet;
     bool value_isValid;

     QString odata_next_link;
     bool odata_next_link_isSet;
     bool odata_next_link_isValid;
};

OAICollection_of_group::OAICollection_of_group()
    : d_ptr()
{
}

OAICollection_of_group::OAICollection_of_group(const OAICollection_of_group& other)
    : d_ptr(other.d_ptr)
{
}

OAICollection_of_group::OAICollection_of_group(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAICollection_of_group::~OAICollection_of_group() = default;

void OAICollection_of_group::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAICollection_of_groupPrivate{});

        Q_D(OAICollection_of_group);


        d->value_isSet = false;
        d->value_isValid = false;

        d->odata_next_link_isSet = false;
        d->odata_next_link_isValid = false;
    }
}

void OAICollection_of_group::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICollection_of_group::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAICollection_of_group);

    d->value_isValid = ::OpenAPI::fromJsonValue(d->value, json[QString("value")]);
    d->value_isSet = !json[QString("value")].isNull() && d->value_isValid;

    d->odata_next_link_isValid = ::OpenAPI::fromJsonValue(d->odata_next_link, json[QString("@odata.nextLink")]);
    d->odata_next_link_isSet = !json[QString("@odata.nextLink")].isNull() && d->odata_next_link_isValid;
}

QString OAICollection_of_group::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICollection_of_group::asJsonObject() const {
    Q_D(const OAICollection_of_group);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->value.size() > 0) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(d->value));
    }
    if (d->odata_next_link_isSet) {
        obj.insert(QString("@odata.nextLink"), ::OpenAPI::toJsonValue(d->odata_next_link));
    }
    return obj;
}

QList<OAIGroup> OAICollection_of_group::getValue() const {
    Q_D(const OAICollection_of_group);
    if(!d){
        return {};
    }
    return d->value;
}
void OAICollection_of_group::setValue(const QList<OAIGroup> &value) {
    Q_D(OAICollection_of_group);
    Q_ASSERT(d);

    d->value = value;
    d->value_isSet = true;
}

bool OAICollection_of_group::is_value_Set() const{
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }

    return d->value_isSet;
}

bool OAICollection_of_group::is_value_Valid() const{
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }
    return d->value_isValid;
}

QString OAICollection_of_group::getOdataNextLink() const {
    Q_D(const OAICollection_of_group);
    if(!d){
        return {};
    }
    return d->odata_next_link;
}
void OAICollection_of_group::setOdataNextLink(const QString &odata_next_link) {
    Q_D(OAICollection_of_group);
    Q_ASSERT(d);

    d->odata_next_link = odata_next_link;
    d->odata_next_link_isSet = true;
}

bool OAICollection_of_group::is_odata_next_link_Set() const{
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }

    return d->odata_next_link_isSet;
}

bool OAICollection_of_group::is_odata_next_link_Valid() const{
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }
    return d->odata_next_link_isValid;
}

bool OAICollection_of_group::isSet() const {
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->value.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->odata_next_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICollection_of_group::isValid() const {
    Q_D(const OAICollection_of_group);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
