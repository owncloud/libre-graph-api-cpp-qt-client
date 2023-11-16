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
 * OAISharingLinkType.h
 *
 * The type of the link created.  | Value          | Display name      | Description                                                     | | -------------- | ----------------- | --------------------------------------------------------------- | | internal       | Internal          | Creates an internal link without any permissions.               | | view           | View              | Creates a read-only link to the driveItem.                      | | upload         | Upload            | Creates a read-write link to the folder driveItem.              | | edit           | Edit              | Creates a read-write link to the driveItem.                     | | createOnly     | File Drop         | Creates an upload-only link to the folder driveItem.            | | blocksDownload | Secure View       | Creates a read-only link that blocks download to the driveItem. | 
 */

#ifndef OAISharingLinkType_H
#define OAISharingLinkType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAISharingLinkTypePrivate;

class OAISharingLinkType : public OAIEnum {
public:
    OAISharingLinkType();
    OAISharingLinkType(const OAISharingLinkType &other);
    OAISharingLinkType(QString json);
    ~OAISharingLinkType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAISharingLinkType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        INTERNAL, 
        VIEW, 
        UPLOAD, 
        EDIT, 
        CREATEONLY, 
        BLOCKSDOWNLOAD
    };
    OAISharingLinkType::eOAISharingLinkType getValue() const;
    void setValue(const OAISharingLinkType::eOAISharingLinkType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAISharingLinkType)
    QSharedPointer<OAISharingLinkTypePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISharingLinkType)

#endif // OAISharingLinkType_H
