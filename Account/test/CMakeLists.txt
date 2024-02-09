cmake_minimum_required(VERSION 3.10)
project(AccountTest)

# Add Google Test subdirectory
add_subdirectory(googletest)

# Include directories for Google Test headers
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add your test executable
add_executable(test_executable test.cpp)

# Link against Google Test library
target_link_libraries(test_executable gtest gtest_main)

# Add tests to CTest
include(GoogleTest)
gtest_discover_tests(test_executable)
