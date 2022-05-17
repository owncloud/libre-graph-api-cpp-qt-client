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
 * OAIPassword_change.h
 *
 * 
 */

#ifndef OAIPassword_change_H
#define OAIPassword_change_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {


class OAIPassword_changePrivate;

class OAIPassword_change : public OAIObject {
public:
    OAIPassword_change();
    OAIPassword_change(const OAIPassword_change &other);
    OAIPassword_change(QString json);
    ~OAIPassword_change() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCurrentPassword() const;
    void setCurrentPassword(const QString &current_password);
    bool is_current_password_Set() const;
    bool is_current_password_Valid() const;

    QString getNewPassword() const;
    void setNewPassword(const QString &new_password);
    bool is_new_password_Set() const;
    bool is_new_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIPassword_change)
    QSharedPointer<OAIPassword_changePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPassword_change)

#endif // OAIPassword_change_H
