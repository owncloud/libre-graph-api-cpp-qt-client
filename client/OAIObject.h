// object.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.2
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OBJECT_H
#define OAI_OBJECT_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QMetaType>

namespace OpenAPI {

class OAIObject {
public:
    OAIObject() {}

    OAIObject(QString jsonString) {
        fromJson(jsonString);
    }

    virtual ~OAIObject() {}

    virtual QJsonObject asJsonObject() const {
        return jObj;
    }

    virtual QString asJson() const {
        QJsonDocument doc(jObj);
        return QString::fromUtf8(doc.toJson(QJsonDocument::Compact));
    }

    virtual void fromJson(QString jsonString) {
        QJsonDocument doc = QJsonDocument::fromJson(jsonString.toUtf8());
        jObj = doc.object();
    }

    virtual void fromJsonObject(QJsonObject json) {
        jObj = json;
    }

    virtual bool isSet() const {
        return false;
    }

    virtual bool isValid() const {
        return true;
    }

private:
    QJsonObject jObj;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIObject)

#endif // OAI_OBJECT_H
