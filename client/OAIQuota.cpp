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

#include "OAIQuota.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIQuota::OAIQuota(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIQuota::OAIQuota() {
    this->initializeModel();
}

OAIQuota::~OAIQuota() {}

void OAIQuota::initializeModel() {

    m_deleted_isSet = false;
    m_deleted_isValid = false;

    m_remaining_isSet = false;
    m_remaining_isValid = false;

    m_state_isSet = false;
    m_state_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;

    m_used_isSet = false;
    m_used_isValid = false;
}

void OAIQuota::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIQuota::fromJsonObject(QJsonObject json) {

    m_deleted_isValid = ::OpenAPI::fromJsonValue(deleted, json[QString("deleted")]);
    m_deleted_isSet = !json[QString("deleted")].isNull() && m_deleted_isValid;

    m_remaining_isValid = ::OpenAPI::fromJsonValue(remaining, json[QString("remaining")]);
    m_remaining_isSet = !json[QString("remaining")].isNull() && m_remaining_isValid;

    m_state_isValid = ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;

    m_total_isValid = ::OpenAPI::fromJsonValue(total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_used_isValid = ::OpenAPI::fromJsonValue(used, json[QString("used")]);
    m_used_isSet = !json[QString("used")].isNull() && m_used_isValid;
}

QString OAIQuota::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIQuota::asJsonObject() const {
    QJsonObject obj;
    if (m_deleted_isSet) {
        obj.insert(QString("deleted"), ::OpenAPI::toJsonValue(deleted));
    }
    if (m_remaining_isSet) {
        obj.insert(QString("remaining"), ::OpenAPI::toJsonValue(remaining));
    }
    if (m_state_isSet) {
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
    if (m_total_isSet) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(total));
    }
    if (m_used_isSet) {
        obj.insert(QString("used"), ::OpenAPI::toJsonValue(used));
    }
    return obj;
}

qint64 OAIQuota::getDeleted() const {
    return deleted;
}
void OAIQuota::setDeleted(const qint64 &deleted) {
    this->deleted = deleted;
    this->m_deleted_isSet = true;
}

bool OAIQuota::is_deleted_Set() const{
    return m_deleted_isSet;
}

bool OAIQuota::is_deleted_Valid() const{
    return m_deleted_isValid;
}

qint64 OAIQuota::getRemaining() const {
    return remaining;
}
void OAIQuota::setRemaining(const qint64 &remaining) {
    this->remaining = remaining;
    this->m_remaining_isSet = true;
}

bool OAIQuota::is_remaining_Set() const{
    return m_remaining_isSet;
}

bool OAIQuota::is_remaining_Valid() const{
    return m_remaining_isValid;
}

QString OAIQuota::getState() const {
    return state;
}
void OAIQuota::setState(const QString &state) {
    this->state = state;
    this->m_state_isSet = true;
}

bool OAIQuota::is_state_Set() const{
    return m_state_isSet;
}

bool OAIQuota::is_state_Valid() const{
    return m_state_isValid;
}

qint64 OAIQuota::getTotal() const {
    return total;
}
void OAIQuota::setTotal(const qint64 &total) {
    this->total = total;
    this->m_total_isSet = true;
}

bool OAIQuota::is_total_Set() const{
    return m_total_isSet;
}

bool OAIQuota::is_total_Valid() const{
    return m_total_isValid;
}

qint64 OAIQuota::getUsed() const {
    return used;
}
void OAIQuota::setUsed(const qint64 &used) {
    this->used = used;
    this->m_used_isSet = true;
}

bool OAIQuota::is_used_Set() const{
    return m_used_isSet;
}

bool OAIQuota::is_used_Valid() const{
    return m_used_isValid;
}

bool OAIQuota::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_deleted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remaining_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_used_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIQuota::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
