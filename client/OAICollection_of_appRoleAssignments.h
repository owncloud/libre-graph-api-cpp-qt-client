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
 * OAICollection_of_appRoleAssignments.h
 *
 * 
 */

#ifndef OAICollection_of_appRoleAssignments_H
#define OAICollection_of_appRoleAssignments_H

#include <QJsonObject>

#include "OAIAppRoleAssignment.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAppRoleAssignment;


class OAICollection_of_appRoleAssignmentsPrivate;

class OAICollection_of_appRoleAssignments : public OAIObject {
public:
    OAICollection_of_appRoleAssignments();
    OAICollection_of_appRoleAssignments(const OAICollection_of_appRoleAssignments &other);
    OAICollection_of_appRoleAssignments(QString json);
    ~OAICollection_of_appRoleAssignments() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAppRoleAssignment> getValue() const;
    void setValue(const QList<OAIAppRoleAssignment> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getOdataNextLink() const;
    void setOdataNextLink(const QString &odata_next_link);
    bool is_odata_next_link_Set() const;
    bool is_odata_next_link_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_appRoleAssignments)
    QSharedPointer<OAICollection_of_appRoleAssignmentsPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_appRoleAssignments)

#endif // OAICollection_of_appRoleAssignments_H
