cmake_minimum_required(VERSION 3.18)

project(raylib_starter_project LANGUAGES CXX)

add_library(raylib_starter_project_lib)
add_executable(raylib_starter_project)
target_compile_features(raylib_starter_project_lib PUBLIC cxx_std_20)

target_sources(raylib_starter_project_lib
    PUBLIC
        src/foo.h
    PRIVATE
        src/foo.cpp
)

target_sources(raylib_starter_project
    PRIVATE
        src/main.cpp
)

# Create a separate library so that tests can link to it instead of directly having to
# specify the source files and include directories.
target_include_directories(raylib_starter_project_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_subdirectory(3rdparty/raylib)

target_link_libraries(raylib_starter_project_lib
    PUBLIC
        raylib
)

target_link_libraries(raylib_starter_project
    PRIVATE
        raylib_starter_project_lib
)

add_subdirectory(src/tests)
