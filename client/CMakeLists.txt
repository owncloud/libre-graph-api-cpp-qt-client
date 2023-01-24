cmake_minimum_required(VERSION 3.4)
string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]" APP_VERSION "v1.0.1")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(TARGET_NAME "LibreGraph")

file(GLOB SRCS "*.c" "*.cpp")
file(GLOB PUBLIC_HEADERS "*.h")

message("Building Target: ${TARGET_NAME}")

if (MSVC)
    string(REGEX REPLACE "/W[1-3]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

add_library(client ${SRCS})
target_link_libraries(client PRIVATE Qt5::Core Qt5::Network)
add_library(OpenAPI::${TARGET_NAME} ALIAS client)

# Windows uses .lib extension for both static and shared library
# *nix systems use different extensions for SHARED and STATIC library and by convention both libraries have the same name
if (NOT WIN32)
    set_target_properties(client PROPERTIES VERSION ${APP_VERSION})
    set_target_properties(client PROPERTIES SOVERSION 1)
endif ()

target_include_directories(client PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
   $<INSTALL_INTERFACE:include/OpenAPI/${TARGET_NAME}>
)

set_target_properties(client PROPERTIES
                CXX_STANDARD 14
                CXX_STANDARD_REQUIRED ON
                CXX_EXTENSIONS OFF
                OUTPUT_NAME ${TARGET_NAME}
                EXPORT_NAME ${TARGET_NAME})

install(TARGETS client LIBRARY DESTINATION ${LIB_DESTINATION} ARCHIVE DESTINATION ${LIB_DESTINATION} RUNTIME DESTINATION ${LIB_DESTINATION})
install(FILES ${PUBLIC_HEADERS} DESTINATION include/OpenAPI/${TARGET_NAME})
# install(EXPORT ${TARGET_NAME} DESTINATION lib/cmake/${TARGET_NAME} NAMESPACE OpenAPI::)
