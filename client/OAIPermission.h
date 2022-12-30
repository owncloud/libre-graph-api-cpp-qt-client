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
 * OAIPermission.h
 *
 * The Permission resource provides information about a sharing permission granted for a DriveItem resource.
 */

#ifndef OAIPermission_H
#define OAIPermission_H

#include <QJsonObject>

#include "OAIIdentitySet.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentitySet;


class OAIPermissionPrivate;

class OAIPermission : public OAIObject {
public:
    OAIPermission();
    OAIPermission(const OAIPermission &other);
    OAIPermission(QString json);
    ~OAIPermission() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIIdentitySet> getGrantedToIdentities() const;
    void setGrantedToIdentities(const QList<OAIIdentitySet> &granted_to_identities);
    bool is_granted_to_identities_Set() const;
    bool is_granted_to_identities_Valid() const;

    QList<QString> getRoles() const;
    void setRoles(const QList<QString> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIPermission)
    QSharedPointer<OAIPermissionPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPermission)

#endif // OAIPermission_H
