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
 * OAICollection_of_applications.h
 *
 * 
 */

#ifndef OAICollection_of_applications_H
#define OAICollection_of_applications_H

#include <QJsonObject>

#include "OAIApplication.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIApplication;


class OAICollection_of_applicationsPrivate;

class OAICollection_of_applications : public OAIObject {
public:
    OAICollection_of_applications();
    OAICollection_of_applications(const OAICollection_of_applications &other);
    OAICollection_of_applications(QString json);
    ~OAICollection_of_applications() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIApplication> getValue() const;
    void setValue(const QList<OAIApplication> &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAICollection_of_applications)
    QSharedPointer<OAICollection_of_applicationsPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICollection_of_applications)

#endif // OAICollection_of_applications_H