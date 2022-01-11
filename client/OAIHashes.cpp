/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.6.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIHashes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIHashes::OAIHashes(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIHashes::OAIHashes() {
    this->initializeModel();
}

OAIHashes::~OAIHashes() {}

void OAIHashes::initializeModel() {

    m_crc32_hash_isSet = false;
    m_crc32_hash_isValid = false;

    m_quick_xor_hash_isSet = false;
    m_quick_xor_hash_isValid = false;

    m_sha1_hash_isSet = false;
    m_sha1_hash_isValid = false;

    m_sha256_hash_isSet = false;
    m_sha256_hash_isValid = false;
}

void OAIHashes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIHashes::fromJsonObject(QJsonObject json) {

    m_crc32_hash_isValid = ::OpenAPI::fromJsonValue(crc32_hash, json[QString("crc32Hash")]);
    m_crc32_hash_isSet = !json[QString("crc32Hash")].isNull() && m_crc32_hash_isValid;

    m_quick_xor_hash_isValid = ::OpenAPI::fromJsonValue(quick_xor_hash, json[QString("quickXorHash")]);
    m_quick_xor_hash_isSet = !json[QString("quickXorHash")].isNull() && m_quick_xor_hash_isValid;

    m_sha1_hash_isValid = ::OpenAPI::fromJsonValue(sha1_hash, json[QString("sha1Hash")]);
    m_sha1_hash_isSet = !json[QString("sha1Hash")].isNull() && m_sha1_hash_isValid;

    m_sha256_hash_isValid = ::OpenAPI::fromJsonValue(sha256_hash, json[QString("sha256Hash")]);
    m_sha256_hash_isSet = !json[QString("sha256Hash")].isNull() && m_sha256_hash_isValid;
}

QString OAIHashes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIHashes::asJsonObject() const {
    QJsonObject obj;
    if (m_crc32_hash_isSet) {
        obj.insert(QString("crc32Hash"), ::OpenAPI::toJsonValue(crc32_hash));
    }
    if (m_quick_xor_hash_isSet) {
        obj.insert(QString("quickXorHash"), ::OpenAPI::toJsonValue(quick_xor_hash));
    }
    if (m_sha1_hash_isSet) {
        obj.insert(QString("sha1Hash"), ::OpenAPI::toJsonValue(sha1_hash));
    }
    if (m_sha256_hash_isSet) {
        obj.insert(QString("sha256Hash"), ::OpenAPI::toJsonValue(sha256_hash));
    }
    return obj;
}

QString OAIHashes::getCrc32Hash() const {
    return crc32_hash;
}
void OAIHashes::setCrc32Hash(const QString &crc32_hash) {
    this->crc32_hash = crc32_hash;
    this->m_crc32_hash_isSet = true;
}

bool OAIHashes::is_crc32_hash_Set() const{
    return m_crc32_hash_isSet;
}

bool OAIHashes::is_crc32_hash_Valid() const{
    return m_crc32_hash_isValid;
}

QString OAIHashes::getQuickXorHash() const {
    return quick_xor_hash;
}
void OAIHashes::setQuickXorHash(const QString &quick_xor_hash) {
    this->quick_xor_hash = quick_xor_hash;
    this->m_quick_xor_hash_isSet = true;
}

bool OAIHashes::is_quick_xor_hash_Set() const{
    return m_quick_xor_hash_isSet;
}

bool OAIHashes::is_quick_xor_hash_Valid() const{
    return m_quick_xor_hash_isValid;
}

QString OAIHashes::getSha1Hash() const {
    return sha1_hash;
}
void OAIHashes::setSha1Hash(const QString &sha1_hash) {
    this->sha1_hash = sha1_hash;
    this->m_sha1_hash_isSet = true;
}

bool OAIHashes::is_sha1_hash_Set() const{
    return m_sha1_hash_isSet;
}

bool OAIHashes::is_sha1_hash_Valid() const{
    return m_sha1_hash_isValid;
}

QString OAIHashes::getSha256Hash() const {
    return sha256_hash;
}
void OAIHashes::setSha256Hash(const QString &sha256_hash) {
    this->sha256_hash = sha256_hash;
    this->m_sha256_hash_isSet = true;
}

bool OAIHashes::is_sha256_hash_Set() const{
    return m_sha256_hash_isSet;
}

bool OAIHashes::is_sha256_hash_Valid() const{
    return m_sha256_hash_isValid;
}

bool OAIHashes::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_crc32_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quick_xor_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sha1_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sha256_hash_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIHashes::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
