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
 * OAIOdata_error_main.h
 *
 * 
 */

#ifndef OAIOdata_error_main_H
#define OAIOdata_error_main_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIOdata_error_detail.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIOdata_error_detail;


class OAIOdata_error_mainPrivate;

class OAIOdata_error_main : public OAIObject {
public:
    OAIOdata_error_main();
    OAIOdata_error_main(const OAIOdata_error_main &other);
    OAIOdata_error_main(QString json);
    ~OAIOdata_error_main() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    QString getTarget() const;
    void setTarget(const QString &target);
    bool is_target_Set() const;
    bool is_target_Valid() const;

    QList<OAIOdata_error_detail> getDetails() const;
    void setDetails(const QList<OAIOdata_error_detail> &details);
    bool is_details_Set() const;
    bool is_details_Valid() const;

    OAIObject getInnererror() const;
    void setInnererror(const OAIObject &innererror);
    bool is_innererror_Set() const;
    bool is_innererror_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIOdata_error_main)
    QSharedPointer<OAIOdata_error_mainPrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOdata_error_main)

#endif // OAIOdata_error_main_H
