cmake_minimum_required(VERSION 3.10)
project(AccountTests)

# Locate Google Test
find_package(GTest REQUIRED)

# Add executable for your test source files
add_executable(AccountTests test.cpp)

# Link against Google Test
target_link_libraries(AccountTests PRIVATE GTest::GTest GTest::Main)

# Optionally, you can add a test target to run your tests with CTest
include(GoogleTest)
gtest_discover_tests(AccountTests)
