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
 * OAITagAssignment.h
 *
 * 
 */

#ifndef OAITagAssignment_H
#define OAITagAssignment_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAITagAssignmentPrivate;

class OAITagAssignment : public OAIObject {
public:
    OAITagAssignment();
    OAITagAssignment(const OAITagAssignment &other);
    OAITagAssignment(QString json);
    ~OAITagAssignment() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getResourceId() const;
    void setResourceId(const QString &resource_id);
    bool is_resource_id_Set() const;
    bool is_resource_id_Valid() const;

    QList<QString> getTags() const;
    void setTags(const QList<QString> &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAITagAssignment)
    QSharedPointer<OAITagAssignmentPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITagAssignment)

#endif // OAITagAssignment_H
