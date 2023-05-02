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
 * OAICollection_of_educationClass.h
 *
 * 
 */

#ifndef OAICollection_of_educationClass_H
#define OAICollection_of_educationClass_H

#include <QJsonObject>

#include "OAIEducationClass.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEducationClass;


class OAICollection_of_educationClassPrivate;

class OAICollection_of_educationClass : public OAIObject {
public:
    OAICollection_of_educationClass();
    OAICollection_of_educationClass(const OAICollection_of_educationClass &other);
    OAICollection_of_educationClass(QString json);
    ~OAICollection_of_educationClass() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEducationClass> getValue() const;
    void setValue(const QList<OAIEducationClass> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_educationClass)
    QSharedPointer<OAICollection_of_educationClassPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_educationClass)

#endif // OAICollection_of_educationClass_H
