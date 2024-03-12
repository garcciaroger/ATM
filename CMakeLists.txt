cmake_minimum_required(VERSION 3.10)
project(ATM)  # Set your project name

set(CMAKE_CXX_STANDARD 17)  # Set the C++ standard to use

# Add the source files for your project
add_executable(ATM main.cpp Account/account.cpp AccountOwner/owner.cpp Login/login.cpp ProfileManager/ProfileManager.h ProfileManager/ProfileManager.cpp)  # Adjust paths as necessary

# Specify include directories for the "ATM" target AFTER it has been defined
target_include_directories(ATM PRIVATE ${CMAKE_SOURCE_DIR}/Account ${CMAKE_SOURCE_DIR}/AccountOwner ${CMAKE_SOURCE_DIR}/Login)
