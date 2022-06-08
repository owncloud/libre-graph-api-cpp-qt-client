// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.14.3
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDriveItem.h
 *
 * Reprensents a resource inside a drive. Read-only.
 */

#ifndef OAIDriveItem_H
#define OAIDriveItem_H

#include <QJsonObject>

#include "OAIDeleted.h"
#include "OAIFileSystemInfo.h"
#include "OAIFolder.h"
#include "OAIIdentitySet.h"
#include "OAIImage.h"
#include "OAIItemReference.h"
#include "OAIObject.h"
#include "OAIOpenGraphFile.h"
#include "OAIPermission.h"
#include "OAIRemoteItem.h"
#include "OAISpecialFolder.h"
#include "OAITrash.h"
#include "OAIUser.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIIdentitySet;
class OAIItemReference;
class OAIUser;
class OAIDeleted;
class OAIOpenGraphFile;
class OAIFileSystemInfo;
class OAIFolder;
class OAIImage;
class OAITrash;
class OAISpecialFolder;
class OAIRemoteItem;
class OAIPermission;


class OAIDriveItemPrivate;

class OAIDriveItem : public OAIObject {
public:
    OAIDriveItem();
    OAIDriveItem(const OAIDriveItem &other);
    OAIDriveItem(QString json);
    ~OAIDriveItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIIdentitySet getCreatedBy() const;
    void setCreatedBy(const OAIIdentitySet &created_by);
    bool is_created_by_Set() const;
    bool is_created_by_Valid() const;

    QDateTime getCreatedDateTime() const;
    void setCreatedDateTime(const QDateTime &created_date_time);
    bool is_created_date_time_Set() const;
    bool is_created_date_time_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getETag() const;
    void setETag(const QString &e_tag);
    bool is_e_tag_Set() const;
    bool is_e_tag_Valid() const;

    OAIIdentitySet getLastModifiedBy() const;
    void setLastModifiedBy(const OAIIdentitySet &last_modified_by);
    bool is_last_modified_by_Set() const;
    bool is_last_modified_by_Valid() const;

    QDateTime getLastModifiedDateTime() const;
    void setLastModifiedDateTime(const QDateTime &last_modified_date_time);
    bool is_last_modified_date_time_Set() const;
    bool is_last_modified_date_time_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIItemReference getParentReference() const;
    void setParentReference(const OAIItemReference &parent_reference);
    bool is_parent_reference_Set() const;
    bool is_parent_reference_Valid() const;

    QString getWebUrl() const;
    void setWebUrl(const QString &web_url);
    bool is_web_url_Set() const;
    bool is_web_url_Valid() const;

    OAIUser getCreatedByUser() const;
    void setCreatedByUser(const OAIUser &created_by_user);
    bool is_created_by_user_Set() const;
    bool is_created_by_user_Valid() const;

    OAIUser getLastModifiedByUser() const;
    void setLastModifiedByUser(const OAIUser &last_modified_by_user);
    bool is_last_modified_by_user_Set() const;
    bool is_last_modified_by_user_Valid() const;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    QString getCTag() const;
    void setCTag(const QString &c_tag);
    bool is_c_tag_Set() const;
    bool is_c_tag_Valid() const;

    OAIDeleted getDeleted() const;
    void setDeleted(const OAIDeleted &deleted);
    bool is_deleted_Set() const;
    bool is_deleted_Valid() const;

    OAIOpenGraphFile getFile() const;
    void setFile(const OAIOpenGraphFile &file);
    bool is_file_Set() const;
    bool is_file_Valid() const;

    OAIFileSystemInfo getFileSystemInfo() const;
    void setFileSystemInfo(const OAIFileSystemInfo &file_system_info);
    bool is_file_system_info_Set() const;
    bool is_file_system_info_Valid() const;

    OAIFolder getFolder() const;
    void setFolder(const OAIFolder &folder);
    bool is_folder_Set() const;
    bool is_folder_Valid() const;

    OAIImage getImage() const;
    void setImage(const OAIImage &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    OAIObject getRoot() const;
    void setRoot(const OAIObject &root);
    bool is_root_Set() const;
    bool is_root_Valid() const;

    OAITrash getTrash() const;
    void setTrash(const OAITrash &trash);
    bool is_trash_Set() const;
    bool is_trash_Valid() const;

    OAISpecialFolder getSpecialFolder() const;
    void setSpecialFolder(const OAISpecialFolder &special_folder);
    bool is_special_folder_Set() const;
    bool is_special_folder_Valid() const;

    OAIRemoteItem getRemoteItem() const;
    void setRemoteItem(const OAIRemoteItem &remote_item);
    bool is_remote_item_Set() const;
    bool is_remote_item_Valid() const;

    qint64 getSize() const;
    void setSize(const qint64 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getWebDavUrl() const;
    void setWebDavUrl(const QString &web_dav_url);
    bool is_web_dav_url_Set() const;
    bool is_web_dav_url_Valid() const;

    QList<OAIDriveItem> getChildren() const;
    void setChildren(const QList<OAIDriveItem> &children);
    bool is_children_Set() const;
    bool is_children_Valid() const;

    QList<OAIPermission> getPermissions() const;
    void setPermissions(const QList<OAIPermission> &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIDriveItem)
    QSharedPointer<OAIDriveItemPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDriveItem)

#endif // OAIDriveItem_H
