// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDirectoryObject.h
 *
 * Represents a Directory object. Read-only.
 */

#ifndef OAIDirectoryObject_H
#define OAIDirectoryObject_H

#include <QJsonObject>

#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIDirectoryObjectPrivate;

class OAIDirectoryObject : public OAIObject {
public:
    OAIDirectoryObject();
    OAIDirectoryObject(const OAIDirectoryObject &other);
    OAIDirectoryObject(QString json);
    ~OAIDirectoryObject() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getDeletedDateTime() const;
    void setDeletedDateTime(const QDateTime &deleted_date_time);
    bool is_deleted_date_time_Set() const;
    bool is_deleted_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIDirectoryObject)
    QSharedPointer<OAIDirectoryObjectPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDirectoryObject)

#endif // OAIDirectoryObject_H
