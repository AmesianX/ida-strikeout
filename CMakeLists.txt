cmake_minimum_required(VERSION 3.27)
project(strikeout)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include IDA SDK bootstrap
include($ENV{IDASDK}/ida-cmake/bootstrap.cmake)
find_package(idasdk REQUIRED)

# Add idacpp library
add_subdirectory($ENV{IDASDK}/include/idacpp ${CMAKE_CURRENT_BINARY_DIR}/idacpp)

# Add plugin
ida_add_plugin(strikeout
    SOURCES
        plugin.cpp
        plugin.h
        utils.hpp
        storage.hpp
    DEBUG_ARGS
        "-t" "-z10000"
)

target_link_libraries(strikeout PRIVATE idacpp::idacpp)

# Add test executables
file(GLOB TEST_SOURCES "test/*.c")
foreach(TEST_SOURCE ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_SOURCE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_SOURCE})
endforeach()
