# Install script for directory: /drone/src/out-cpp-qt-client/client

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenAPI/LibreGraphAPI" TYPE FILE FILES
    "/drone/src/out-cpp-qt-client/client/OAIAppRole.h"
    "/drone/src/out-cpp-qt-client/client/OAIAppRoleAssignment.h"
    "/drone/src/out-cpp-qt-client/client/OAIApplication.h"
    "/drone/src/out-cpp-qt-client/client/OAIClass_Member_Reference.h"
    "/drone/src/out-cpp-qt-client/client/OAIClass_Reference.h"
    "/drone/src/out-cpp-qt-client/client/OAIClass_Teacher_Reference.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_appRoleAssignments.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_applications.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_class.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_driveItems.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_drives.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_drives_1.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_educationClass.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_educationUser.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_educationUser_1.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_group.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_schools.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_tags.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_user.h"
    "/drone/src/out-cpp-qt-client/client/OAICollection_of_users.h"
    "/drone/src/out-cpp-qt-client/client/OAIDeleted.h"
    "/drone/src/out-cpp-qt-client/client/OAIDirectoryObject.h"
    "/drone/src/out-cpp-qt-client/client/OAIDrive.h"
    "/drone/src/out-cpp-qt-client/client/OAIDriveItem.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationClass.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationOrganization.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationSchool.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationUser.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationUser_Reference.h"
    "/drone/src/out-cpp-qt-client/client/OAIEntity.h"
    "/drone/src/out-cpp-qt-client/client/OAIExportPersonalData_request.h"
    "/drone/src/out-cpp-qt-client/client/OAIFileSystemInfo.h"
    "/drone/src/out-cpp-qt-client/client/OAIFolder.h"
    "/drone/src/out-cpp-qt-client/client/OAIFolderView.h"
    "/drone/src/out-cpp-qt-client/client/OAIGroup.h"
    "/drone/src/out-cpp-qt-client/client/OAIHashes.h"
    "/drone/src/out-cpp-qt-client/client/OAIIdentity.h"
    "/drone/src/out-cpp-qt-client/client/OAIIdentitySet.h"
    "/drone/src/out-cpp-qt-client/client/OAIImage.h"
    "/drone/src/out-cpp-qt-client/client/OAIItemReference.h"
    "/drone/src/out-cpp-qt-client/client/OAIMember_Reference.h"
    "/drone/src/out-cpp-qt-client/client/OAIObjectIdentity.h"
    "/drone/src/out-cpp-qt-client/client/OAIOdata_error.h"
    "/drone/src/out-cpp-qt-client/client/OAIOdata_error_detail.h"
    "/drone/src/out-cpp-qt-client/client/OAIOdata_error_main.h"
    "/drone/src/out-cpp-qt-client/client/OAIOpenGraphFile.h"
    "/drone/src/out-cpp-qt-client/client/OAIPasswordProfile.h"
    "/drone/src/out-cpp-qt-client/client/OAIPassword_change.h"
    "/drone/src/out-cpp-qt-client/client/OAIPermission.h"
    "/drone/src/out-cpp-qt-client/client/OAIQuota.h"
    "/drone/src/out-cpp-qt-client/client/OAIRemoteItem.h"
    "/drone/src/out-cpp-qt-client/client/OAIShared.h"
    "/drone/src/out-cpp-qt-client/client/OAISpecialFolder.h"
    "/drone/src/out-cpp-qt-client/client/OAITagAssignment.h"
    "/drone/src/out-cpp-qt-client/client/OAITagUnassignment.h"
    "/drone/src/out-cpp-qt-client/client/OAITrash.h"
    "/drone/src/out-cpp-qt-client/client/OAIUser.h"
    "/drone/src/out-cpp-qt-client/client/OAIApplicationsApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIDrivesApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIDrivesGetDrivesApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIDrivesRootApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationClassApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationClassTeachersApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationSchoolApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIEducationUserApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIGroupApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIGroupsApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeChangepasswordApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeDriveApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeDriveRootApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeDriveRootChildrenApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeDrivesApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIMeUserApi.h"
    "/drone/src/out-cpp-qt-client/client/OAITagsApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIUserApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIUserAppRoleAssignmentApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIUsersApi.h"
    "/drone/src/out-cpp-qt-client/client/OAIEnum.h"
    "/drone/src/out-cpp-qt-client/client/OAIHelpers.h"
    "/drone/src/out-cpp-qt-client/client/OAIHttpRequest.h"
    "/drone/src/out-cpp-qt-client/client/OAIHttpFileElement.h"
    "/drone/src/out-cpp-qt-client/client/OAIOauth.h"
    "/drone/src/out-cpp-qt-client/client/OAIObject.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/drone/src/out-cpp-qt-client/client/libLibreGraphAPI.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig.cmake"
         "/drone/src/out-cpp-qt-client/client/CMakeFiles/Export/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI" TYPE FILE FILES "/drone/src/out-cpp-qt-client/client/CMakeFiles/Export/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/LibreGraphAPI" TYPE FILE FILES "/drone/src/out-cpp-qt-client/client/CMakeFiles/Export/lib/cmake/LibreGraphAPI/LibreGraphAPIConfig-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/drone/src/out-cpp-qt-client/client/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
