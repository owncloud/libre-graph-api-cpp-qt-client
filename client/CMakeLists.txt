cmake_minimum_required(VERSION 3.2)
string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]" APP_VERSION "v1.0.1")
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
    OAIAppRole.cpp
    OAIAppRoleAssignment.cpp
    OAIApplication.cpp
    OAIClass_Member_Reference.cpp
    OAIClass_Reference.cpp
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

target_link_libraries(client PRIVATE Qt5::Core Qt5::Network)


set_target_properties(client PROPERTIES
                CXX_STANDARD 14
                CXX_STANDARD_REQUIRED ON
                CXX_EXTENSIONS OFF
                OUTPUT_NAME ${TARGET_NAME}
                EXPORT_NAME ${TARGET_NAME})

set(HEADER
    OAIAppRole.h
    OAIAppRoleAssignment.h
    OAIApplication.h
    OAIClass_Member_Reference.h
    OAIClass_Reference.h
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
install(TARGETS client EXPORT ${TARGET_NAME}Config RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
install(EXPORT ${TARGET_NAME}Config DESTINATION lib/cmake/${TARGET_NAME} NAMESPACE OpenAPI::)
