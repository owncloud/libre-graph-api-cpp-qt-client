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

#include "OAIOdata_error_detail.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIOdata_error_detailPrivate {
    friend class OAIOdata_error_detail;

     QString code;
     bool code_isSet;
     bool code_isValid;

     QString message;
     bool message_isSet;
     bool message_isValid;

     QString target;
     bool target_isSet;
     bool target_isValid;
};

OAIOdata_error_detail::OAIOdata_error_detail()
    : d_ptr()
{
}

OAIOdata_error_detail::OAIOdata_error_detail(const OAIOdata_error_detail& other)
    : d_ptr(other.d_ptr)
{
}

OAIOdata_error_detail::OAIOdata_error_detail(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIOdata_error_detail::~OAIOdata_error_detail() = default;

void OAIOdata_error_detail::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIOdata_error_detailPrivate{});

        Q_D(OAIOdata_error_detail);


        d->code_isSet = false;
        d->code_isValid = false;

        d->message_isSet = false;
        d->message_isValid = false;

        d->target_isSet = false;
        d->target_isValid = false;
    }
}

void OAIOdata_error_detail::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOdata_error_detail::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIOdata_error_detail);

    d->code_isValid = ::OpenAPI::fromJsonValue(d->code, json[QString("code")]);
    d->code_isSet = !json[QString("code")].isNull() && d->code_isValid;

    d->message_isValid = ::OpenAPI::fromJsonValue(d->message, json[QString("message")]);
    d->message_isSet = !json[QString("message")].isNull() && d->message_isValid;

    d->target_isValid = ::OpenAPI::fromJsonValue(d->target, json[QString("target")]);
    d->target_isSet = !json[QString("target")].isNull() && d->target_isValid;
}

QString OAIOdata_error_detail::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOdata_error_detail::asJsonObject() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(d->code));
    }
    if (d->message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(d->message));
    }
    if (d->target_isSet) {
        obj.insert(QString("target"), ::OpenAPI::toJsonValue(d->target));
    }
    return obj;
}

QString OAIOdata_error_detail::getCode() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return {};
    }
    return d->code;
}
void OAIOdata_error_detail::setCode(const QString &code) {
    Q_D(OAIOdata_error_detail);
    Q_ASSERT(d);

    d->code = code;
    d->code_isSet = true;
}

bool OAIOdata_error_detail::is_code_Set() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }

    return d->code_isSet;
}

bool OAIOdata_error_detail::is_code_Valid() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }
    return d->code_isValid;
}

QString OAIOdata_error_detail::getMessage() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return {};
    }
    return d->message;
}
void OAIOdata_error_detail::setMessage(const QString &message) {
    Q_D(OAIOdata_error_detail);
    Q_ASSERT(d);

    d->message = message;
    d->message_isSet = true;
}

bool OAIOdata_error_detail::is_message_Set() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }

    return d->message_isSet;
}

bool OAIOdata_error_detail::is_message_Valid() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }
    return d->message_isValid;
}

QString OAIOdata_error_detail::getTarget() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return {};
    }
    return d->target;
}
void OAIOdata_error_detail::setTarget(const QString &target) {
    Q_D(OAIOdata_error_detail);
    Q_ASSERT(d);

    d->target = target;
    d->target_isSet = true;
}

bool OAIOdata_error_detail::is_target_Set() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }

    return d->target_isSet;
}

bool OAIOdata_error_detail::is_target_Valid() const{
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }
    return d->target_isValid;
}

bool OAIOdata_error_detail::isSet() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->target_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOdata_error_detail::isValid() const {
    Q_D(const OAIOdata_error_detail);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return d->code_isValid && d->message_isValid && true;
}

} // namespace OpenAPI
