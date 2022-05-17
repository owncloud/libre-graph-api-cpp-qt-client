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
 * OAIOpenGraphFile.h
 *
 * File metadata, if the item is a file. Read-only.
 */

#ifndef OAIOpenGraphFile_H
#define OAIOpenGraphFile_H

#include <QJsonObject>

#include "OAIHashes.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIHashes;


class OAIOpenGraphFilePrivate;

class OAIOpenGraphFile : public OAIObject {
public:
    OAIOpenGraphFile();
    OAIOpenGraphFile(const OAIOpenGraphFile &other);
    OAIOpenGraphFile(QString json);
    ~OAIOpenGraphFile() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIHashes getHashes() const;
    void setHashes(const OAIHashes &hashes);
    bool is_hashes_Set() const;
    bool is_hashes_Valid() const;

    QString getMimeType() const;
    void setMimeType(const QString &mime_type);
    bool is_mime_type_Set() const;
    bool is_mime_type_Valid() const;

    bool isProcessingMetadata() const;
    void setProcessingMetadata(const bool &processing_metadata);
    bool is_processing_metadata_Set() const;
    bool is_processing_metadata_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
    Q_DECLARE_PRIVATE(OAIOpenGraphFile)
    QSharedPointer<OAIOpenGraphFilePrivate> d_ptr;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOpenGraphFile)

#endif // OAIOpenGraphFile_H
