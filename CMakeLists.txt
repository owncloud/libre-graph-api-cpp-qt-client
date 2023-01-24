project("Libre Graph API" LANGUAGES CXX)

cmake_minimum_required(VERSION 3.2)

find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)

add_subdirectory(client)

