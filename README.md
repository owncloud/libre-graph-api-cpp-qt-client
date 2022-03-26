# C++ Qt API client

# 

Libre Graph API

- API version: v0.13.2

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)


*Automatically generated by the [OpenAPI Generator](https://openapi-generator.tech)*


## Requirements

Building the API client library requires:

1. CMake 3.2+
2. Qt
3. C++ Compiler

## Getting Started

example.h:
```c++

#include <iostream>
#include "../client/OAIDrivesApi.h"

using namespace test_namespace;

class Example : public QObject {
    Q_OBJECT
    OAIDrive create();
public slots:
   void exampleFunction1();
};

```

example.cpp:
```c++

#include "../client/OAIDrivesApi.h"
#include "example.h"
#include <QTimer>
#include <QEventLoop>

OAIDrive Example::create(){
    OAIDrive obj;
 return obj;
}

void Example::exampleFunction1(){
     OAIDrivesApi apiInstance;
     
      QEventLoop loop;
      connect(&apiInstance, &OAIDrivesApi::createDriveSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDrivesApi::createDriveSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      OAIDrive oai_drive = create(); // OAIDrive | New space property values
      apiInstance.createDrive(oai_drive);
      QTimer::singleShot(5000, &loop, &QEventLoop::quit);
      loop.exec();
  }

```

## Documentation for Servers

Parameterized Servers are supported. Define a server in the API for each endpoint with arbitrary numbers of variables:

```yaml
servers:
- url: http://{server}:{port}/{basePath}
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
    port:
      enum:
        - '3000'
        - '1000'
      default: '3000'
    basePath:
      default: v1
```
To change the default variable, use this function in each Api:
```c++
int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
```
The parameter "serverIndex" will choose a server from the server list for each endpoint. There is always at least one server with index 0. The Parameter "operation" should be the desired endpoint operationid.
Variable is the name of the variable you wish to change and the value is the new default Value.
The function will return -1 when the variable does not exists, -2 if value is not defined in the variable enum and -3 if the operation is not found.

If your endpoint has multiple server objects in the servers array, you can set the server that will be used with this function:
```c++
void setServerIndex(const QString &operation, int serverIndex);
```
Parameter "operation" should be your operationid. "serverIndex" is the index you want to set as your default server. The function will check if there is a server with your index.
Here is an example of multiple servers in the servers array. The first server will have index 0 and the second will have index 1.
```yaml
servers:
- url: http://{server}:8080/
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
- url: https://localhost:8080/v1
```

## Documentation for Authorization

All endpoints do not require authorization.
Authentication schemes defined for the API:

## Author




## License

Apache 2.0 for more information visit [Apache 2.0](https://www.apache.org/licenses/LICENSE-2.0.html)