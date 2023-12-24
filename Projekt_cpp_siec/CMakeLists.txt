cmake_minimum_required(VERSION 3.24)
project(Projekt_cpp_siec)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors -Wconversion)

include_directories(
        include
)

set(SOURCE_FILES
        src/helpers.cpp
        src/nodes.cpp
        src/package.cpp
        src/storage_types.cpp
        src/factory.cpp
        )

add_executable(Projekt_cpp_siec ${SOURCE_FILES} main.cpp)
