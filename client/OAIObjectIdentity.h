// model-header.mustache

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

/*
 * OAIObjectIdentity.h
 *
 * Represents an identity used to sign in to a user account
 */

#ifndef OAIObjectIdentity_H
#define OAIObjectIdentity_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIObjectIdentityPrivate;

class OAIObjectIdentity : public OAIObject {
public:
    OAIObjectIdentity();
    OAIObjectIdentity(const OAIObjectIdentity &other);
    OAIObjectIdentity(QString json);
    ~OAIObjectIdentity() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getIssuer() const;
    void setIssuer(const QString &issuer);
    bool is_issuer_Set() const;
    bool is_issuer_Valid() const;

    QString getIssuerAssignedId() const;
    void setIssuerAssignedId(const QString &issuer_assigned_id);
    bool is_issuer_assigned_id_Set() const;
    bool is_issuer_assigned_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIObjectIdentity)
    QSharedPointer<OAIObjectIdentityPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIObjectIdentity)

#endif // OAIObjectIdentity_H