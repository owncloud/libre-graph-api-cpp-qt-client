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
 * OAICollection_of_user.h
 *
 * 
 */

#ifndef OAICollection_of_user_H
#define OAICollection_of_user_H

#include <QJsonObject>

#include "OAIUser.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser;


class OAICollection_of_userPrivate;

class OAICollection_of_user : public OAIObject {
public:
    OAICollection_of_user();
    OAICollection_of_user(const OAICollection_of_user &other);
    OAICollection_of_user(QString json);
    ~OAICollection_of_user() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUser> getValue() const;
    void setValue(const QList<OAIUser> &value);
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
    Q_DECLARE_PRIVATE(OAICollection_of_user)
    QSharedPointer<OAICollection_of_userPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_user)

#endif // OAICollection_of_user_H
