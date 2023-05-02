// api-header.mustache

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

#ifndef OAI_OAIEducationClassTeachersApi_H
#define OAI_OAIEducationClassTeachersApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIClass_Teacher_Reference.h"
#include "OAICollection_of_educationUser.h"
#include "OAIOdata_error.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIEducationClassTeachersApi : public QObject {
    Q_OBJECT

public:
    OAIEducationClassTeachersApi(const int timeOut = 0);
    ~OAIEducationClassTeachersApi();

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
    * @param[in]  class_id QString [required]
    * @param[in]  oai_class_teacher_reference OAIClass_Teacher_Reference [required]
    */
    void addTeacherToClass(const QString &class_id, const OAIClass_Teacher_Reference &oai_class_teacher_reference);

    /**
    * @param[in]  class_id QString [required]
    * @param[in]  user_id QString [required]
    */
    void deleteTeacherFromClass(const QString &class_id, const QString &user_id);

    /**
    * @param[in]  class_id QString [required]
    */
    void getTeachers(const QString &class_id);


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

    void addTeacherToClassCallback(OAIHttpRequestWorker *worker);
    void deleteTeacherFromClassCallback(OAIHttpRequestWorker *worker);
    void getTeachersCallback(OAIHttpRequestWorker *worker);

signals:

    void addTeacherToClassSignal();
    void deleteTeacherFromClassSignal();
    void getTeachersSignal(OAICollection_of_educationUser summary);

    void addTeacherToClassSignalFull(OAIHttpRequestWorker *worker);
    void deleteTeacherFromClassSignalFull(OAIHttpRequestWorker *worker);
    void getTeachersSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_educationUser summary);

    void addTeacherToClassSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTeacherFromClassSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getTeachersSignalE(OAICollection_of_educationUser summary, QNetworkReply::NetworkError error_type, QString error_str);

    void addTeacherToClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteTeacherFromClassSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getTeachersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
