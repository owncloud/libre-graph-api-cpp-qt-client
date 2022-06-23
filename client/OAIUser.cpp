// model-body.mustache

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

#include "OAIUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIUserPrivate {
    friend class OAIUser;

     QString id;
     bool id_isSet;
     bool id_isValid;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QString mail;
     bool mail_isSet;
     bool mail_isValid;

     QList<OAIGroup> member_of;
     bool member_of_isSet;
     bool member_of_isValid;

     QString on_premises_sam_account_name;
     bool on_premises_sam_account_name_isSet;
     bool on_premises_sam_account_name_isValid;

     OAIPasswordProfile password_profile;
     bool password_profile_isSet;
     bool password_profile_isValid;
};

OAIUser::OAIUser()
    : d_ptr()
{
}

OAIUser::OAIUser(const OAIUser& other)
    : d_ptr(other.d_ptr)
{
}

OAIUser::OAIUser(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIUser::~OAIUser() = default;

void OAIUser::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIUserPrivate{});

        Q_D(OAIUser);


        d->id_isSet = false;
        d->id_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->mail_isSet = false;
        d->mail_isValid = false;

        d->member_of_isSet = false;
        d->member_of_isValid = false;

        d->on_premises_sam_account_name_isSet = false;
        d->on_premises_sam_account_name_isValid = false;

        d->password_profile_isSet = false;
        d->password_profile_isValid = false;
    }
}

void OAIUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIUser);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->mail_isValid = ::OpenAPI::fromJsonValue(d->mail, json[QString("mail")]);
    d->mail_isSet = !json[QString("mail")].isNull() && d->mail_isValid;

    d->member_of_isValid = ::OpenAPI::fromJsonValue(d->member_of, json[QString("memberOf")]);
    d->member_of_isSet = !json[QString("memberOf")].isNull() && d->member_of_isValid;

    d->on_premises_sam_account_name_isValid = ::OpenAPI::fromJsonValue(d->on_premises_sam_account_name, json[QString("onPremisesSamAccountName")]);
    d->on_premises_sam_account_name_isSet = !json[QString("onPremisesSamAccountName")].isNull() && d->on_premises_sam_account_name_isValid;

    d->password_profile_isValid = ::OpenAPI::fromJsonValue(d->password_profile, json[QString("passwordProfile")]);
    d->password_profile_isSet = !json[QString("passwordProfile")].isNull() && d->password_profile_isValid;
}

QString OAIUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser::asJsonObject() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->mail_isSet) {
        obj.insert(QString("mail"), ::OpenAPI::toJsonValue(d->mail));
    }
    if (d->member_of.size() > 0) {
        obj.insert(QString("memberOf"), ::OpenAPI::toJsonValue(d->member_of));
    }
    if (d->on_premises_sam_account_name_isSet) {
        obj.insert(QString("onPremisesSamAccountName"), ::OpenAPI::toJsonValue(d->on_premises_sam_account_name));
    }
    if (d->password_profile.isSet()) {
        obj.insert(QString("passwordProfile"), ::OpenAPI::toJsonValue(d->password_profile));
    }
    return obj;
}

QString OAIUser::getId() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIUser::setId(const QString &id) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIUser::is_id_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIUser::is_id_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QString OAIUser::getDisplayName() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIUser::setDisplayName(const QString &display_name) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIUser::is_display_name_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIUser::is_display_name_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QString OAIUser::getMail() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->mail;
}
void OAIUser::setMail(const QString &mail) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->mail = mail;
    d->mail_isSet = true;
}

bool OAIUser::is_mail_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->mail_isSet;
}

bool OAIUser::is_mail_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->mail_isValid;
}

QList<OAIGroup> OAIUser::getMemberOf() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->member_of;
}
void OAIUser::setMemberOf(const QList<OAIGroup> &member_of) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->member_of = member_of;
    d->member_of_isSet = true;
}

bool OAIUser::is_member_of_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->member_of_isSet;
}

bool OAIUser::is_member_of_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->member_of_isValid;
}

QString OAIUser::getOnPremisesSamAccountName() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->on_premises_sam_account_name;
}
void OAIUser::setOnPremisesSamAccountName(const QString &on_premises_sam_account_name) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->on_premises_sam_account_name = on_premises_sam_account_name;
    d->on_premises_sam_account_name_isSet = true;
}

bool OAIUser::is_on_premises_sam_account_name_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->on_premises_sam_account_name_isSet;
}

bool OAIUser::is_on_premises_sam_account_name_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->on_premises_sam_account_name_isValid;
}

OAIPasswordProfile OAIUser::getPasswordProfile() const {
    Q_D(const OAIUser);
    if(!d){
        return {};
    }
    return d->password_profile;
}
void OAIUser::setPasswordProfile(const OAIPasswordProfile &password_profile) {
    Q_D(OAIUser);
    Q_ASSERT(d);

    d->password_profile = password_profile;
    d->password_profile_isSet = true;
}

bool OAIUser::is_password_profile_Set() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }

    return d->password_profile_isSet;
}

bool OAIUser::is_password_profile_Valid() const{
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    return d->password_profile_isValid;
}

bool OAIUser::isSet() const {
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->mail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->member_of.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->on_premises_sam_account_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->password_profile.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser::isValid() const {
    Q_D(const OAIUser);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
