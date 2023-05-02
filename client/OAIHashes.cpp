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

#include "OAIHashes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIHashesPrivate {
    friend class OAIHashes;

     QString crc32_hash;
     bool crc32_hash_isSet;
     bool crc32_hash_isValid;

     QString quick_xor_hash;
     bool quick_xor_hash_isSet;
     bool quick_xor_hash_isValid;

     QString sha1_hash;
     bool sha1_hash_isSet;
     bool sha1_hash_isValid;

     QString sha256_hash;
     bool sha256_hash_isSet;
     bool sha256_hash_isValid;
};

OAIHashes::OAIHashes()
    : d_ptr()
{
}

OAIHashes::OAIHashes(const OAIHashes& other)
    : d_ptr(other.d_ptr)
{
}

OAIHashes::OAIHashes(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIHashes::~OAIHashes() = default;

void OAIHashes::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIHashesPrivate{});

        Q_D(OAIHashes);


        d->crc32_hash_isSet = false;
        d->crc32_hash_isValid = false;

        d->quick_xor_hash_isSet = false;
        d->quick_xor_hash_isValid = false;

        d->sha1_hash_isSet = false;
        d->sha1_hash_isValid = false;

        d->sha256_hash_isSet = false;
        d->sha256_hash_isValid = false;
    }
}

void OAIHashes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIHashes::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIHashes);

    d->crc32_hash_isValid = ::OpenAPI::fromJsonValue(d->crc32_hash, json[QString("crc32Hash")]);
    d->crc32_hash_isSet = !json[QString("crc32Hash")].isNull() && d->crc32_hash_isValid;

    d->quick_xor_hash_isValid = ::OpenAPI::fromJsonValue(d->quick_xor_hash, json[QString("quickXorHash")]);
    d->quick_xor_hash_isSet = !json[QString("quickXorHash")].isNull() && d->quick_xor_hash_isValid;

    d->sha1_hash_isValid = ::OpenAPI::fromJsonValue(d->sha1_hash, json[QString("sha1Hash")]);
    d->sha1_hash_isSet = !json[QString("sha1Hash")].isNull() && d->sha1_hash_isValid;

    d->sha256_hash_isValid = ::OpenAPI::fromJsonValue(d->sha256_hash, json[QString("sha256Hash")]);
    d->sha256_hash_isSet = !json[QString("sha256Hash")].isNull() && d->sha256_hash_isValid;
}

QString OAIHashes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIHashes::asJsonObject() const {
    Q_D(const OAIHashes);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->crc32_hash_isSet) {
        obj.insert(QString("crc32Hash"), ::OpenAPI::toJsonValue(d->crc32_hash));
    }
    if (d->quick_xor_hash_isSet) {
        obj.insert(QString("quickXorHash"), ::OpenAPI::toJsonValue(d->quick_xor_hash));
    }
    if (d->sha1_hash_isSet) {
        obj.insert(QString("sha1Hash"), ::OpenAPI::toJsonValue(d->sha1_hash));
    }
    if (d->sha256_hash_isSet) {
        obj.insert(QString("sha256Hash"), ::OpenAPI::toJsonValue(d->sha256_hash));
    }
    return obj;
}

QString OAIHashes::getCrc32Hash() const {
    Q_D(const OAIHashes);
    if(!d){
        return {};
    }
    return d->crc32_hash;
}
void OAIHashes::setCrc32Hash(const QString &crc32_hash) {
    Q_D(OAIHashes);
    Q_ASSERT(d);

    d->crc32_hash = crc32_hash;
    d->crc32_hash_isSet = true;
}

bool OAIHashes::is_crc32_hash_Set() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }

    return d->crc32_hash_isSet;
}

bool OAIHashes::is_crc32_hash_Valid() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    return d->crc32_hash_isValid;
}

QString OAIHashes::getQuickXorHash() const {
    Q_D(const OAIHashes);
    if(!d){
        return {};
    }
    return d->quick_xor_hash;
}
void OAIHashes::setQuickXorHash(const QString &quick_xor_hash) {
    Q_D(OAIHashes);
    Q_ASSERT(d);

    d->quick_xor_hash = quick_xor_hash;
    d->quick_xor_hash_isSet = true;
}

bool OAIHashes::is_quick_xor_hash_Set() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }

    return d->quick_xor_hash_isSet;
}

bool OAIHashes::is_quick_xor_hash_Valid() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    return d->quick_xor_hash_isValid;
}

QString OAIHashes::getSha1Hash() const {
    Q_D(const OAIHashes);
    if(!d){
        return {};
    }
    return d->sha1_hash;
}
void OAIHashes::setSha1Hash(const QString &sha1_hash) {
    Q_D(OAIHashes);
    Q_ASSERT(d);

    d->sha1_hash = sha1_hash;
    d->sha1_hash_isSet = true;
}

bool OAIHashes::is_sha1_hash_Set() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }

    return d->sha1_hash_isSet;
}

bool OAIHashes::is_sha1_hash_Valid() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    return d->sha1_hash_isValid;
}

QString OAIHashes::getSha256Hash() const {
    Q_D(const OAIHashes);
    if(!d){
        return {};
    }
    return d->sha256_hash;
}
void OAIHashes::setSha256Hash(const QString &sha256_hash) {
    Q_D(OAIHashes);
    Q_ASSERT(d);

    d->sha256_hash = sha256_hash;
    d->sha256_hash_isSet = true;
}

bool OAIHashes::is_sha256_hash_Set() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }

    return d->sha256_hash_isSet;
}

bool OAIHashes::is_sha256_hash_Valid() const{
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    return d->sha256_hash_isValid;
}

bool OAIHashes::isSet() const {
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->crc32_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->quick_xor_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->sha1_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->sha256_hash_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIHashes::isValid() const {
    Q_D(const OAIHashes);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
