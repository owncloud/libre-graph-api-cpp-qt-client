// model-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICollection_of_educationUser.h
 *
 * 
 */

#ifndef OAICollection_of_educationUser_H
#define OAICollection_of_educationUser_H

#include <QJsonObject>

#include "OAIEducationUser.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEducationUser;


class OAICollection_of_educationUserPrivate;

class OAICollection_of_educationUser : public OAIObject {
public:
    OAICollection_of_educationUser();
    OAICollection_of_educationUser(const OAICollection_of_educationUser &other);
    OAICollection_of_educationUser(QString json);
    ~OAICollection_of_educationUser() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEducationUser> getValue() const;
    void setValue(const QList<OAIEducationUser> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_educationUser)
    QSharedPointer<OAICollection_of_educationUserPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_educationUser)

#endif // OAICollection_of_educationUser_H
