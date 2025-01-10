cmake_minimum_required(VERSION 3.28)

project(
    Functivore
    VERSION 1.0.0.0
    LANGUAGES CXX
)

# cache variables for installation destinations
include(GNUInstallDirs)

add_library(FunctivoreFacilities INTERFACE)

set_target_properties(FunctivoreFacilities PROPERTIES
    OUTPUT_NAME FunctivoreFacilities
    EXPORT_NAME Facilities
)

target_include_directories(FunctivoreFacilities INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

# Test
if(CMAKE_SOURCE_DIR STREQUAL Functivore_SOURCE_DIR OR TEST_Functivore)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TestFunctivore
    ${CMAKE_CURRENT_LIST_DIR}/tests/tests.cpp
)

target_include_directories(TestFunctivore
    PRIVATE ${CMAKE_CURRENT_LIST_DIR}
)

endif()


install(
    TARGETS FunctivoreFacilities
    EXPORT Functivore
)

install(
    DIRECTORY Functivore
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
    EXPORT Functivore
    FILE Functivore.cmake
    NAMESPACE Functivore::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/Functivore
)

# include the package config helpers and generate the file below
include(CMakePackageConfigHelpers)

configure_package_config_file(${CMAKE_CURRENT_LIST_DIR}/Config.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/FunctivoreConfig.cmake"
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/Functivore
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/FunctivoreConfig.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/Functivore
)