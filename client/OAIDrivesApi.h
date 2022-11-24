// api-header.mustache

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

#ifndef OAI_OAIDrivesApi_H
#define OAI_OAIDrivesApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIDrive.h"
#include "OAIOdata_error.h"
#include <QSet>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIDrivesApi : public QObject {
    Q_OBJECT

public:
    OAIDrivesApi(const int timeOut = 0);
    ~OAIDrivesApi();

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
    * @param[in]  oai_drive OAIDrive [required]
    */
    void createDrive(const OAIDrive &oai_drive);

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  if_match QString [optional]
    */
    void deleteDrive(const QString &drive_id, const ::OpenAPI::OptionalParam<QString> &if_match = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  select QSet<QString> [optional]
    * @param[in]  expand QSet<QString> [optional]
    */
    void getDrive(const QString &drive_id, const ::OpenAPI::OptionalParam<QSet<QString>> &select = ::OpenAPI::OptionalParam<QSet<QString>>(), const ::OpenAPI::OptionalParam<QSet<QString>> &expand = ::OpenAPI::OptionalParam<QSet<QString>>());

    /**
    * @param[in]  drive_id QString [required]
    * @param[in]  oai_drive OAIDrive [required]
    */
    void updateDrive(const QString &drive_id, const OAIDrive &oai_drive);


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

    void createDriveCallback(OAIHttpRequestWorker *worker);
    void deleteDriveCallback(OAIHttpRequestWorker *worker);
    void getDriveCallback(OAIHttpRequestWorker *worker);
    void updateDriveCallback(OAIHttpRequestWorker *worker);

signals:

    void createDriveSignal(OAIDrive summary);
    void deleteDriveSignal();
    void getDriveSignal(OAIDrive summary);
    void updateDriveSignal(OAIDrive summary);

    void createDriveSignalFull(OAIHttpRequestWorker *worker, OAIDrive summary);
    void deleteDriveSignalFull(OAIHttpRequestWorker *worker);
    void getDriveSignalFull(OAIHttpRequestWorker *worker, OAIDrive summary);
    void updateDriveSignalFull(OAIHttpRequestWorker *worker, OAIDrive summary);

    void createDriveSignalE(OAIDrive summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteDriveSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getDriveSignalE(OAIDrive summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateDriveSignalE(OAIDrive summary, QNetworkReply::NetworkError error_type, QString error_str);

    void createDriveSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteDriveSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getDriveSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateDriveSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
