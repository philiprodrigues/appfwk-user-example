cmake_minimum_required(VERSION 3.12)
project(framework-user-test VERSION 1.0.0)

set(BUILD_SHARED_LIBS ON)
set(CMAKE_CXX_STANDARD 17)

find_package(appfwk REQUIRED)

# Create an executable
add_executable(        framework-user-test-app framework-user-test-app.cpp)
target_link_libraries( framework-user-test-app appfwk::appfwk)

# Create a library
add_library(           my-test-module MyTestModule.cpp)
target_link_libraries( my-test-module appfwk::appfwk)

# GNUInstallDirs sets ${CMAKE_INSTALL_*DIR} variables used below. Or could just specify them manually
include(GNUInstallDirs)

install(
    TARGETS framework-user-test-app my-test-module
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)
