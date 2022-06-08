// model-body.mustache

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

#include "OAIFolder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIFolderPrivate {
    friend class OAIFolder;

     qint32 child_count;
     bool child_count_isSet;
     bool child_count_isValid;

     OAIFolderView view;
     bool view_isSet;
     bool view_isValid;
};

OAIFolder::OAIFolder()
    : d_ptr()
{
}

OAIFolder::OAIFolder(const OAIFolder& other)
    : d_ptr(other.d_ptr)
{
}

OAIFolder::OAIFolder(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIFolder::~OAIFolder() = default;

void OAIFolder::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIFolderPrivate{});

        Q_D(OAIFolder);


        d->child_count_isSet = false;
        d->child_count_isValid = false;

        d->view_isSet = false;
        d->view_isValid = false;
    }
}

void OAIFolder::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFolder::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIFolder);

    d->child_count_isValid = ::OpenAPI::fromJsonValue(d->child_count, json[QString("childCount")]);
    d->child_count_isSet = !json[QString("childCount")].isNull() && d->child_count_isValid;

    d->view_isValid = ::OpenAPI::fromJsonValue(d->view, json[QString("view")]);
    d->view_isSet = !json[QString("view")].isNull() && d->view_isValid;
}

QString OAIFolder::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFolder::asJsonObject() const {
    Q_D(const OAIFolder);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->child_count_isSet) {
        obj.insert(QString("childCount"), ::OpenAPI::toJsonValue(d->child_count));
    }
    if (d->view.isSet()) {
        obj.insert(QString("view"), ::OpenAPI::toJsonValue(d->view));
    }
    return obj;
}

qint32 OAIFolder::getChildCount() const {
    Q_D(const OAIFolder);
    if(!d){
        return {};
    }
    return d->child_count;
}
void OAIFolder::setChildCount(const qint32 &child_count) {
    Q_D(OAIFolder);
    Q_ASSERT(d);

    d->child_count = child_count;
    d->child_count_isSet = true;
}

bool OAIFolder::is_child_count_Set() const{
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }

    return d->child_count_isSet;
}

bool OAIFolder::is_child_count_Valid() const{
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }
    return d->child_count_isValid;
}

OAIFolderView OAIFolder::getView() const {
    Q_D(const OAIFolder);
    if(!d){
        return {};
    }
    return d->view;
}
void OAIFolder::setView(const OAIFolderView &view) {
    Q_D(OAIFolder);
    Q_ASSERT(d);

    d->view = view;
    d->view_isSet = true;
}

bool OAIFolder::is_view_Set() const{
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }

    return d->view_isSet;
}

bool OAIFolder::is_view_Valid() const{
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }
    return d->view_isValid;
}

bool OAIFolder::isSet() const {
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->child_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->view.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFolder::isValid() const {
    Q_D(const OAIFolder);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
