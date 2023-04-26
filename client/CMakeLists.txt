cmake_minimum_required(VERSION 3.4)
string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]" APP_VERSION "v1.0.1")
string(REGEX REPLACE " " "" TARGET_NAME "Libre Graph API")

project("Libre Graph API" VERSION ${APP_VERSION} LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

include(GNUInstallDirs)

if (MSVC)
    string(REGEX REPLACE "/W[1-3]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()
# On  Windows only static builds are supported.
if (WIN32)
    set(BUILD_SHARED_LIBS OFF)
endif ()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui Network REQUIRED)

find_package(ZLIB REQUIRED)

add_library(client
    OAIAppRole.cpp
    OAIAppRoleAssignment.cpp
    OAIApplication.cpp
    OAIClass_Member_Reference.cpp
    OAIClass_Reference.cpp
    OAIClass_Teacher_Reference.cpp
    OAICollection_of_appRoleAssignments.cpp
    OAICollection_of_applications.cpp
    OAICollection_of_class.cpp
    OAICollection_of_driveItems.cpp
    OAICollection_of_drives.cpp
    OAICollection_of_drives_1.cpp
    OAICollection_of_educationClass.cpp
    OAICollection_of_educationUser.cpp
    OAICollection_of_educationUser_1.cpp
    OAICollection_of_group.cpp
    OAICollection_of_schools.cpp
    OAICollection_of_tags.cpp
    OAICollection_of_user.cpp
    OAICollection_of_users.cpp
    OAIDeleted.cpp
    OAIDirectoryObject.cpp
    OAIDrive.cpp
    OAIDriveItem.cpp
    OAIEducationClass.cpp
    OAIEducationOrganization.cpp
    OAIEducationSchool.cpp
    OAIEducationUser.cpp
    OAIEducationUser_Reference.cpp
    OAIEntity.cpp
    OAIExportPersonalData_request.cpp
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
    OAIObjectIdentity.cpp
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
    OAITagAssignment.cpp
    OAITagUnassignment.cpp
    OAITrash.cpp
    OAIUser.cpp
    OAIApplicationsApi.cpp
    OAIDrivesApi.cpp
    OAIDrivesGetDrivesApi.cpp
    OAIDrivesRootApi.cpp
    OAIEducationClassApi.cpp
    OAIEducationClassTeachersApi.cpp
    OAIEducationSchoolApi.cpp
    OAIEducationUserApi.cpp
    OAIGroupApi.cpp
    OAIGroupsApi.cpp
    OAIMeChangepasswordApi.cpp
    OAIMeDriveApi.cpp
    OAIMeDriveRootApi.cpp
    OAIMeDriveRootChildrenApi.cpp
    OAIMeDrivesApi.cpp
    OAIMeUserApi.cpp
    OAITagsApi.cpp
    OAIUserApi.cpp
    OAIUserAppRoleAssignmentApi.cpp
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

target_link_libraries(client PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Gui ZLIB::ZLIB)

set_target_properties(client PROPERTIES
                CXX_STANDARD 14
                CXX_STANDARD_REQUIRED ON
                CXX_EXTENSIONS OFF
                OUTPUT_NAME ${TARGET_NAME}
                EXPORT_NAME ${TARGET_NAME}
                VERSION ${APP_VERSION}
                SOVERSION 1)

set(HEADER
    OAIAppRole.h
    OAIAppRoleAssignment.h
    OAIApplication.h
    OAIClass_Member_Reference.h
    OAIClass_Reference.h
    OAIClass_Teacher_Reference.h
    OAICollection_of_appRoleAssignments.h
    OAICollection_of_applications.h
    OAICollection_of_class.h
    OAICollection_of_driveItems.h
    OAICollection_of_drives.h
    OAICollection_of_drives_1.h
    OAICollection_of_educationClass.h
    OAICollection_of_educationUser.h
    OAICollection_of_educationUser_1.h
    OAICollection_of_group.h
    OAICollection_of_schools.h
    OAICollection_of_tags.h
    OAICollection_of_user.h
    OAICollection_of_users.h
    OAIDeleted.h
    OAIDirectoryObject.h
    OAIDrive.h
    OAIDriveItem.h
    OAIEducationClass.h
    OAIEducationOrganization.h
    OAIEducationSchool.h
    OAIEducationUser.h
    OAIEducationUser_Reference.h
    OAIEntity.h
    OAIExportPersonalData_request.h
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
    OAIObjectIdentity.h
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
    OAITagAssignment.h
    OAITagUnassignment.h
    OAITrash.h
    OAIUser.h
    OAIApplicationsApi.h
    OAIDrivesApi.h
    OAIDrivesGetDrivesApi.h
    OAIDrivesRootApi.h
    OAIEducationClassApi.h
    OAIEducationClassTeachersApi.h
    OAIEducationSchoolApi.h
    OAIEducationUserApi.h
    OAIGroupApi.h
    OAIGroupsApi.h
    OAIMeChangepasswordApi.h
    OAIMeDriveApi.h
    OAIMeDriveRootApi.h
    OAIMeDriveRootChildrenApi.h
    OAIMeDrivesApi.h
    OAIMeUserApi.h
    OAITagsApi.h
    OAIUserApi.h
    OAIUserAppRoleAssignmentApi.h
    OAIUsersApi.h
    OAIEnum.h
    OAIHelpers.h
    OAIHttpRequest.h
    OAIHttpFileElement.h
    OAIOauth.h
    OAIObject.h
)
install(FILES ${HEADER} DESTINATION include/OpenAPI/${TARGET_NAME})

include(CMakePackageConfigHelpers)

# openapi-generator-cli doesn't allow us to add extra files and the
# Config.cmake it ships is not usable...
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/Config.cmake.in"
"@PACKAGE_INIT@
include(CMakeFindDependencyMacro)
find_dependency(Qt${QT_VERSION_MAJOR}Core)
find_dependency(Qt${QT_VERSION_MAJOR}Gui)
find_dependency(Qt${QT_VERSION_MAJOR}Network)

include(\"\${CMAKE_CURRENT_LIST_DIR}/@TARGET_NAME@Targets.cmake\")"
)

configure_package_config_file(
        "${CMAKE_CURRENT_BINARY_DIR}/Config.cmake.in"
        "${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME}Config.cmake"
        INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${TARGET_NAME}
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME}ConfigVersion.cmake"
  VERSION ${APP_VERSION}
  COMPATIBILITY SameMajorVersion )

install(TARGETS client EXPORT ${TARGET_NAME}Targets RUNTIME DESTINATION bin LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(EXPORT ${TARGET_NAME}Targets DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${TARGET_NAME} NAMESPACE OpenAPI::)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME}Config.cmake" "${CMAKE_CURRENT_BINARY_DIR}/${TARGET_NAME}ConfigVersion.cmake"  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${TARGET_NAME})
