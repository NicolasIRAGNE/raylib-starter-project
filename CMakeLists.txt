cmake_minimum_required(VERSION 3.18)

project(raylib_starter_project LANGUAGES C)

add_executable(raylib_starter_project)

target_sources(raylib_starter_project
    PRIVATE
        src/main.c
        src/foo.h
        src/foo.c
)

target_include_directories(raylib_starter_project
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_subdirectory(3rdparty/raylib)

target_link_libraries(raylib_starter_project
    PRIVATE
        raylib
)

