cmake_minimum_required(VERSION 3.18)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/955c7f837efad184ec63e771c42542d37545eaef.zip
)

include(GoogleTest)
include (CTest)

FetchContent_MakeAvailable(googletest)

add_executable(tests
    tests_foo.cpp
)

target_link_libraries(tests
    gtest_main
    raylib_starter_project_lib
)

gtest_discover_tests(tests)