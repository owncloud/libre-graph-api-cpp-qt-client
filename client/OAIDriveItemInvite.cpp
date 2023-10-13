// model-body.mustache

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

#include "OAIDriveItemInvite.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIDriveItemInvitePrivate {
    friend class OAIDriveItemInvite;

     QList<OAIDriveRecipient> recipients;
     bool recipients_isSet;
     bool recipients_isValid;

     QList<QString> roles;
     bool roles_isSet;
     bool roles_isValid;

     QList<QString> libre_graph_permissions_actions;
     bool libre_graph_permissions_actions_isSet;
     bool libre_graph_permissions_actions_isValid;

     QDateTime expiration_date_time;
     bool expiration_date_time_isSet;
     bool expiration_date_time_isValid;
};

OAIDriveItemInvite::OAIDriveItemInvite()
    : d_ptr()
{
}

OAIDriveItemInvite::OAIDriveItemInvite(const OAIDriveItemInvite& other)
    : d_ptr(other.d_ptr)
{
}

OAIDriveItemInvite::OAIDriveItemInvite(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIDriveItemInvite::~OAIDriveItemInvite() = default;

void OAIDriveItemInvite::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIDriveItemInvitePrivate{});

        Q_D(OAIDriveItemInvite);


        d->recipients_isSet = false;
        d->recipients_isValid = false;

        d->roles_isSet = false;
        d->roles_isValid = false;

        d->libre_graph_permissions_actions_isSet = false;
        d->libre_graph_permissions_actions_isValid = false;

        d->expiration_date_time_isSet = false;
        d->expiration_date_time_isValid = false;
    }
}

void OAIDriveItemInvite::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDriveItemInvite::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIDriveItemInvite);

    d->recipients_isValid = ::OpenAPI::fromJsonValue(d->recipients, json[QString("recipients")]);
    d->recipients_isSet = !json[QString("recipients")].isNull() && d->recipients_isValid;

    d->roles_isValid = ::OpenAPI::fromJsonValue(d->roles, json[QString("roles")]);
    d->roles_isSet = !json[QString("roles")].isNull() && d->roles_isValid;

    d->libre_graph_permissions_actions_isValid = ::OpenAPI::fromJsonValue(d->libre_graph_permissions_actions, json[QString("@libre.graph.permissions.actions")]);
    d->libre_graph_permissions_actions_isSet = !json[QString("@libre.graph.permissions.actions")].isNull() && d->libre_graph_permissions_actions_isValid;

    d->expiration_date_time_isValid = ::OpenAPI::fromJsonValue(d->expiration_date_time, json[QString("expirationDateTime")]);
    d->expiration_date_time_isSet = !json[QString("expirationDateTime")].isNull() && d->expiration_date_time_isValid;
}

QString OAIDriveItemInvite::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDriveItemInvite::asJsonObject() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->recipients.size() > 0) {
        obj.insert(QString("recipients"), ::OpenAPI::toJsonValue(d->recipients));
    }
    if (d->roles.size() > 0) {
        obj.insert(QString("roles"), ::OpenAPI::toJsonValue(d->roles));
    }
    if (d->libre_graph_permissions_actions.size() > 0) {
        obj.insert(QString("@libre.graph.permissions.actions"), ::OpenAPI::toJsonValue(d->libre_graph_permissions_actions));
    }
    if (d->expiration_date_time_isSet) {
        obj.insert(QString("expirationDateTime"), ::OpenAPI::toJsonValue(d->expiration_date_time));
    }
    return obj;
}

QList<OAIDriveRecipient> OAIDriveItemInvite::getRecipients() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return {};
    }
    return d->recipients;
}
void OAIDriveItemInvite::setRecipients(const QList<OAIDriveRecipient> &recipients) {
    Q_D(OAIDriveItemInvite);
    Q_ASSERT(d);

    d->recipients = recipients;
    d->recipients_isSet = true;
}

bool OAIDriveItemInvite::is_recipients_Set() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }

    return d->recipients_isSet;
}

bool OAIDriveItemInvite::is_recipients_Valid() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    return d->recipients_isValid;
}

QList<QString> OAIDriveItemInvite::getRoles() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return {};
    }
    return d->roles;
}
void OAIDriveItemInvite::setRoles(const QList<QString> &roles) {
    Q_D(OAIDriveItemInvite);
    Q_ASSERT(d);

    d->roles = roles;
    d->roles_isSet = true;
}

bool OAIDriveItemInvite::is_roles_Set() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }

    return d->roles_isSet;
}

bool OAIDriveItemInvite::is_roles_Valid() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    return d->roles_isValid;
}

QList<QString> OAIDriveItemInvite::getLibreGraphPermissionsActions() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return {};
    }
    return d->libre_graph_permissions_actions;
}
void OAIDriveItemInvite::setLibreGraphPermissionsActions(const QList<QString> &libre_graph_permissions_actions) {
    Q_D(OAIDriveItemInvite);
    Q_ASSERT(d);

    d->libre_graph_permissions_actions = libre_graph_permissions_actions;
    d->libre_graph_permissions_actions_isSet = true;
}

bool OAIDriveItemInvite::is_libre_graph_permissions_actions_Set() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }

    return d->libre_graph_permissions_actions_isSet;
}

bool OAIDriveItemInvite::is_libre_graph_permissions_actions_Valid() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    return d->libre_graph_permissions_actions_isValid;
}

QDateTime OAIDriveItemInvite::getExpirationDateTime() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return {};
    }
    return d->expiration_date_time;
}
void OAIDriveItemInvite::setExpirationDateTime(const QDateTime &expiration_date_time) {
    Q_D(OAIDriveItemInvite);
    Q_ASSERT(d);

    d->expiration_date_time = expiration_date_time;
    d->expiration_date_time_isSet = true;
}

bool OAIDriveItemInvite::is_expiration_date_time_Set() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }

    return d->expiration_date_time_isSet;
}

bool OAIDriveItemInvite::is_expiration_date_time_Valid() const{
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    return d->expiration_date_time_isValid;
}

bool OAIDriveItemInvite::isSet() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->recipients.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->libre_graph_permissions_actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->expiration_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDriveItemInvite::isValid() const {
    Q_D(const OAIDriveItemInvite);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
