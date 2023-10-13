// model-header.mustache

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

/*
 * OAICollection_of_permissions.h
 *
 * 
 */

#ifndef OAICollection_of_permissions_H
#define OAICollection_of_permissions_H

#include <QJsonObject>

#include "OAIPermission.h"
#include "OAIUnifiedRoleDefinition.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUnifiedRoleDefinition;
class OAIPermission;


class OAICollection_of_permissionsPrivate;

class OAICollection_of_permissions : public OAIObject {
public:
    OAICollection_of_permissions();
    OAICollection_of_permissions(const OAICollection_of_permissions &other);
    OAICollection_of_permissions(QString json);
    ~OAICollection_of_permissions() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUnifiedRoleDefinition> getLibreGraphPermissionsRolesAllowedValues() const;
    void setLibreGraphPermissionsRolesAllowedValues(const QList<OAIUnifiedRoleDefinition> &libre_graph_permissions_roles_allowed_values);
    bool is_libre_graph_permissions_roles_allowed_values_Set() const;
    bool is_libre_graph_permissions_roles_allowed_values_Valid() const;

    QList<QString> getLibreGraphPermissionsActionsAllowedValues() const;
    void setLibreGraphPermissionsActionsAllowedValues(const QList<QString> &libre_graph_permissions_actions_allowed_values);
    bool is_libre_graph_permissions_actions_allowed_values_Set() const;
    bool is_libre_graph_permissions_actions_allowed_values_Valid() const;

    QList<OAIPermission> getValue() const;
    void setValue(const QList<OAIPermission> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_permissions)
    QSharedPointer<OAICollection_of_permissionsPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_permissions)

#endif // OAICollection_of_permissions_H
