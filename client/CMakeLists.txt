cmake_minimum_required(VERSION 3.2)

project(client)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)

add_library(${PROJECT_NAME}
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
    OAIOdata_error.cpp
    OAIOdata_error_detail.cpp
    OAIOdata_error_main.cpp
    OAIOpenGraphFile.cpp
    OAIPasswordProfile.cpp
    OAIQuota.cpp
    OAITrash.cpp
    OAIUser.cpp
    OAIDrivesApi.cpp
    OAIDrivesRootApi.cpp
    OAIGroupApi.cpp
    OAIGroupsApi.cpp
    OAIMeDriveApi.cpp
    OAIMeDriveRootApi.cpp
    OAIMeDriveRootChildrenApi.cpp
    OAIMeDrivesApi.cpp
    OAIUserApi.cpp
    OAIUsersApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp
    OAIOauth.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Network)
if(NOT APPLE)
  target_link_libraries(${PROJECT_NAME} PRIVATE ssl crypto)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
