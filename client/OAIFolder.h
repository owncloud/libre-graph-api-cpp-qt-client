// model-header.mustache

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

/*
 * OAIFolder.h
 *
 * Folder metadata, if the item is a folder. Read-only.
 */

#ifndef OAIFolder_H
#define OAIFolder_H

#include <QJsonObject>

#include "OAIFolderView.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIFolderView;


class OAIFolderPrivate;

class OAIFolder : public OAIObject {
public:
    OAIFolder();
    OAIFolder(const OAIFolder &other);
    OAIFolder(QString json);
    ~OAIFolder() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getChildCount() const;
    void setChildCount(const qint32 &child_count);
    bool is_child_count_Set() const;
    bool is_child_count_Valid() const;

    OAIFolderView getView() const;
    void setView(const OAIFolderView &view);
    bool is_view_Set() const;
    bool is_view_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIFolder)
    QSharedPointer<OAIFolderPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFolder)

#endif // OAIFolder_H
