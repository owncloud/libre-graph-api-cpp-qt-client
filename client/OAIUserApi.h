// api-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.13.2
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIUserApi_H
#define OAI_OAIUserApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIOdata_error.h"
#include "OAIUser.h"
#include <QSet>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIUserApi : public QObject {
    Q_OBJECT

public:
    OAIUserApi(const int timeOut = 0);
    ~OAIUserApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  user_id QString [required]
    * @param[in]  if_match QString [optional]
    */
    void deleteUser(const QString &user_id, const ::OpenAPI::OptionalParam<QString> &if_match = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  user_id QString [required]
    * @param[in]  select QSet<QString> [optional]
    * @param[in]  expand QSet<QString> [optional]
    */
    void getUser(const QString &user_id, const ::OpenAPI::OptionalParam<QSet<QString>> &select = ::OpenAPI::OptionalParam<QSet<QString>>(), const ::OpenAPI::OptionalParam<QSet<QString>> &expand = ::OpenAPI::OptionalParam<QSet<QString>>());

    /**
    * @param[in]  user_id QString [required]
    * @param[in]  oai_user OAIUser [required]
    */
    void updateUser(const QString &user_id, const OAIUser &oai_user);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void deleteUserCallback(OAIHttpRequestWorker *worker);
    void getUserCallback(OAIHttpRequestWorker *worker);
    void updateUserCallback(OAIHttpRequestWorker *worker);

signals:

    void deleteUserSignal();
    void getUserSignal(OAIUser summary);
    void updateUserSignal(OAIUser summary);

    void deleteUserSignalFull(OAIHttpRequestWorker *worker);
    void getUserSignalFull(OAIHttpRequestWorker *worker, OAIUser summary);
    void updateUserSignalFull(OAIHttpRequestWorker *worker, OAIUser summary);

    void deleteUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getUserSignalE(OAIUser summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalE(OAIUser summary, QNetworkReply::NetworkError error_type, QString error_str);

    void deleteUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
