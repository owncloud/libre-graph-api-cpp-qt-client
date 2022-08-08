cmake_minimum_required(VERSION 3.2)
string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]" APP_VERSION "v0.16.0")
string(REGEX REPLACE " " "" TARGET_NAME "Libre Graph API")

project("Libre Graph API" VERSION ${APP_VERSION} LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    string(REGEX REPLACE "/W[1-3]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)

add_library(client STATIC
    OAICollection_of_driveItems.cpp
    OAICollection_of_drives.cpp
    OAICollection_of_group.cpp
    OAICollection_of_user.cpp
    OAIDeleted.cpp
    OAIDirectoryObject.cpp
    OAIDrive.cpp
    OAIDriveItem.cpp
    OAIFileSystemInfo.cpp
    OAIFolder.cpp
    OAIFolderView.cpp
    OAIGroup.cpp
    OAIHashes.cpp
    OAIIdentity.cpp
    OAIIdentitySet.cpp
    OAIImage.cpp
    OAIItemReference.cpp
    OAIMember_Reference.cpp
    OAIOdata_error.cpp
    OAIOdata_error_detail.cpp
    OAIOdata_error_main.cpp
    OAIOpenGraphFile.cpp
    OAIPasswordProfile.cpp
    OAIPassword_change.cpp
    OAIPermission.cpp
    OAIQuota.cpp
    OAIRemoteItem.cpp
    OAIShared.cpp
    OAISpecialFolder.cpp
    OAITrash.cpp
    OAIUser.cpp
    OAIDrivesApi.cpp
    OAIDrivesGetDrivesApi.cpp
    OAIDrivesRootApi.cpp
    OAIGroupApi.cpp
    OAIGroupsApi.cpp
    OAIMeChangepasswordApi.cpp
    OAIMeDriveApi.cpp
    OAIMeDriveRootApi.cpp
    OAIMeDriveRootChildrenApi.cpp
    OAIMeDrivesApi.cpp
    OAIMeUserApi.cpp
    OAIUserApi.cpp
    OAIUsersApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp
    OAIOauth.cpp
)
target_include_directories(client PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
   $<INSTALL_INTERFACE:include/OpenAPI/${TARGET_NAME}>
)

add_library(OpenAPI::${TARGET_NAME} ALIAS client)

target_link_libraries(client PRIVATE Qt5::Core Qt5::Network)


set_target_properties(client PROPERTIES
                CXX_STANDARD 14
                CXX_STANDARD_REQUIRED ON
                CXX_EXTENSIONS OFF
                OUTPUT_NAME ${TARGET_NAME}
                EXPORT_NAME ${TARGET_NAME})

set(HEADER
    OAICollection_of_driveItems.h
    OAICollection_of_drives.h
    OAICollection_of_group.h
    OAICollection_of_user.h
    OAIDeleted.h
    OAIDirectoryObject.h
    OAIDrive.h
    OAIDriveItem.h
    OAIFileSystemInfo.h
    OAIFolder.h
    OAIFolderView.h
    OAIGroup.h
    OAIHashes.h
    OAIIdentity.h
    OAIIdentitySet.h
    OAIImage.h
    OAIItemReference.h
    OAIMember_Reference.h
    OAIOdata_error.h
    OAIOdata_error_detail.h
    OAIOdata_error_main.h
    OAIOpenGraphFile.h
    OAIPasswordProfile.h
    OAIPassword_change.h
    OAIPermission.h
    OAIQuota.h
    OAIRemoteItem.h
    OAIShared.h
    OAISpecialFolder.h
    OAITrash.h
    OAIUser.h
    OAIDrivesApi.h
    OAIDrivesGetDrivesApi.h
    OAIDrivesRootApi.h
    OAIGroupApi.h
    OAIGroupsApi.h
    OAIMeChangepasswordApi.h
    OAIMeDriveApi.h
    OAIMeDriveRootApi.h
    OAIMeDriveRootChildrenApi.h
    OAIMeDrivesApi.h
    OAIMeUserApi.h
    OAIUserApi.h
    OAIUsersApi.h
    OAIEnum.h
    OAIHelpers.h
    OAIHttpRequest.h
    OAIHttpFileElement.h
    OAIOauth.h
    OAIObject.h
)
install(FILES ${HEADER} DESTINATION include/OpenAPI/${TARGET_NAME})
install(TARGETS client EXPORT ${TARGET_NAME}Config RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(EXPORT ${TARGET_NAME}Config DESTINATION lib/cmake/${TARGET_NAME} NAMESPACE OpenAPI::)
