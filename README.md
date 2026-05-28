# Libre Graph API C++/Qt Client

<!-- OSPO-managed README | Generated: 2026-04-16 | v2 -->

[![License](https://img.shields.io/badge/License-Apache--2.0-blue.svg)](LICENSE) [![ownCloud OSPO](https://img.shields.io/badge/OSPO-ownCloud-blue)](https://kiteworks.com/opensource) [![Docker Hub](https://img.shields.io/docker/pulls/owncloud)](https://hub.docker.com/r/owncloud/ocis)

Auto-generated C++/Qt client library for the Libre Graph API, produced by the OpenAPI Generator from the Libre Graph OpenAPI specification. It provides native Qt-style classes and networking abstractions for accessing ownCloud Infinite Scale collaboration endpoints from C++ applications, including the ownCloud Desktop Client.

## Getting Started

Follow the steps below to build and use the C++/Qt client library.

### Prerequisites

- CMake 3.2+
- Qt 5 or Qt 6
- C++ compiler

### Building

```bash
mkdir build && cd build
cmake ..
make
```

### Example Usage

```cpp
#include "client/OAIActivitiesApi.h"
// See the generated client/ directory for all available API classes
```

## Documentation

- [Libre Graph API Documentation](https://owncloud.dev/libre-graph-api/)
- [OpenAPI Generator](https://openapi-generator.tech/)

## Part of ownCloud Infinite Scale

This generated client is used by the [ownCloud Desktop Client](https://github.com/owncloud/client) to communicate with [oCIS](https://github.com/owncloud/ocis) via the Libre Graph API. It is generated from the [libre-graph-api](https://github.com/owncloud/libre-graph-api) spec.

This component is part of the [oCIS Docker image](https://hub.docker.com/r/owncloud/ocis).

## API Reference

Technical reference for the Libre Graph API C++/Qt client:

### Libre Graph API Version

- API version: v1.0.4

### Authentication Schemes

| Scheme | Type | Description |
|---|---|---|
| `openId` | OpenID Connect | -- |
| `bearerAuth` | HTTP Bearer Token | -- |
| `basicAuth` | HTTP Basic | Username/password |

### Parameterized Servers

The generated client supports parameterized server URLs. Use `setDefaultServerValue()` to change server variables:

```cpp
int setDefaultServerValue(int serverIndex, const QString &operation,
                          const QString &variable, const QString &val);
```

Returns `-1` if variable does not exist, `-2` if value is not in the enum, `-3` if operation is not found.

Use `setServerIndex()` to select which server to use when multiple are defined:

```cpp
void setServerIndex(const QString &operation, int serverIndex);
```

### Example

```cpp
#include "client/OAIActivitiesApi.h"
using namespace test_namespace;

OAIActivitiesApi apiInstance;
apiInstance.setUsername("YOUR USERNAME");
apiInstance.setPassword("YOUR PASSWORD");

QEventLoop loop;
connect(&apiInstance, &OAIActivitiesApi::getActivitiesSignal, [&]() {
    loop.quit();
});
apiInstance.getActivities(kql);
loop.exec();
```

## Community & Support

**[Star](https://github.com/owncloud/libre-graph-api-cpp-qt-client)** this repo and **Watch** for release notifications!

- [ownCloud Website](https://owncloud.com)
- [Community Discussions](https://github.com/orgs/owncloud/discussions)
- [Matrix Chat](https://app.element.io/#/room/#owncloud:matrix.org)
- [Documentation](https://doc.owncloud.com)
- [Enterprise Support](https://owncloud.com/contact-us/)
- [OSPO Home](https://kiteworks.com/opensource)

## Contributing

We welcome contributions! Please read the [Contributing Guidelines](CONTRIBUTING.md)
and our [Code of Conduct](CODE_OF_CONDUCT.md) before getting started.

### Workflow

- **Rebase Early, Rebase Often!** We use a rebase workflow. Always rebase on the target branch before submitting a PR.
- **Dependabot**: Automated dependency updates are managed via Dependabot. Review and merge dependency PRs promptly.
- **Signed Commits**: All commits **must** be PGP/GPG signed. See [GitHub's signing guide](https://docs.github.com/en/authentication/managing-commit-signature-verification).
- **DCO Sign-off**: Every commit must carry a `Signed-off-by` line:
  ```
  git commit -s -S -m "your commit message"
  ```
- **GitHub Actions Policy**: Workflows may only use actions that are (a) owned by `owncloud`, (b) created by GitHub (`actions/*`), or (c) verified in the GitHub Marketplace.

## Security

**Do not open a public GitHub issue for security vulnerabilities.**

Report vulnerabilities at **<https://security.owncloud.com>** -- see [SECURITY.md](SECURITY.md).

Bug bounty: [YesWeHack ownCloud Program](https://yeswehack.com/programs/owncloud-bug-bounty-program)

## License

This project is licensed under the [Apache-2.0](LICENSE).

## About the ownCloud OSPO

The [Kiteworks Open Source Program Office](https://kiteworks.com/opensource), operating under
the [ownCloud](https://owncloud.com) brand, launched on May 5, 2026, to steward the open source
ecosystem around ownCloud's products. The OSPO ensures transparent governance, license compliance,
community health, and sustainable collaboration between the open source community and
[Kiteworks](https://www.kiteworks.com), which acquired ownCloud in 2023.

- **OSPO Home**: <https://kiteworks.com/opensource>
- **GitHub**: <https://github.com/owncloud>
- **ownCloud**: <https://owncloud.com>

For questions about the OSPO or licensing, contact ospo@kiteworks.com.

> **License status:** This repository is already licensed under Apache-2.0 -- the OSPO target license.
> No migration is required.
