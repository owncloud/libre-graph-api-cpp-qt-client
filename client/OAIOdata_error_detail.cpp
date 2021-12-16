/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.5.0
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

OAIOdata_error_detail::OAIOdata_error_detail(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOdata_error_detail::OAIOdata_error_detail() {
    this->initializeModel();
}

OAIOdata_error_detail::~OAIOdata_error_detail() {}

void OAIOdata_error_detail::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_target_isSet = false;
    m_target_isValid = false;
}

void OAIOdata_error_detail::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOdata_error_detail::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_target_isValid = ::OpenAPI::fromJsonValue(target, json[QString("target")]);
    m_target_isSet = !json[QString("target")].isNull() && m_target_isValid;
}

QString OAIOdata_error_detail::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOdata_error_detail::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(message));
    }
    if (m_target_isSet) {
        obj.insert(QString("target"), ::OpenAPI::toJsonValue(target));
    }
    return obj;
}

QString OAIOdata_error_detail::getCode() const {
    return code;
}
void OAIOdata_error_detail::setCode(const QString &code) {
    this->code = code;
    this->m_code_isSet = true;
}

bool OAIOdata_error_detail::is_code_Set() const{
    return m_code_isSet;
}

bool OAIOdata_error_detail::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIOdata_error_detail::getMessage() const {
    return message;
}
void OAIOdata_error_detail::setMessage(const QString &message) {
    this->message = message;
    this->m_message_isSet = true;
}

bool OAIOdata_error_detail::is_message_Set() const{
    return m_message_isSet;
}

bool OAIOdata_error_detail::is_message_Valid() const{
    return m_message_isValid;
}

QString OAIOdata_error_detail::getTarget() const {
    return target;
}
void OAIOdata_error_detail::setTarget(const QString &target) {
    this->target = target;
    this->m_target_isSet = true;
}

bool OAIOdata_error_detail::is_target_Set() const{
    return m_target_isSet;
}

bool OAIOdata_error_detail::is_target_Valid() const{
    return m_target_isValid;
}

bool OAIOdata_error_detail::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOdata_error_detail::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_message_isValid && true;
}

} // namespace OpenAPI
