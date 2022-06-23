// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.15.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIGroup.h
 *
 * 
 */

#ifndef OAIGroup_H
#define OAIGroup_H

#include <QJsonObject>

#include "OAIUser.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser;


class OAIGroupPrivate;

class OAIGroup : public OAIObject {
public:
    OAIGroup();
    OAIGroup(const OAIGroup &other);
    OAIGroup(QString json);
    ~OAIGroup() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QList<OAIUser> getMembers() const;
    void setMembers(const QList<OAIUser> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    QSet<QString> getMembersodataBind() const;
    void setMembersodataBind(const QSet<QString> &membersodata_bind);
    bool is_membersodata_bind_Set() const;
    bool is_membersodata_bind_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIGroup)
    QSharedPointer<OAIGroupPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGroup)

#endif // OAIGroup_H
