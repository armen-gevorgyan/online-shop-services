cmake_minimum_required(VERSION 3.16.3)
project(online-shop-services)
enable_language(C CXX)
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

if (DEBUG)
    set(CMAKE_BUILD_TYPE Debug)
endif()

if (CLEANUP_WARNINGS)
    message(STATUS "Enabling the warnings cleanup")
    add_compile_options(
        -Wall -Wextra -Werror
        -Wno-unused -Wno-unused-parameter
    )
endif()

### Integrate external projects
add_subdirectory(external)

add_subdirectory(source)
add_subdirectory(test)
add_subdirectory(documentation)