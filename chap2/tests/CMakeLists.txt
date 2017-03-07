cmake_minimum_required(VERSION 2.8)
project(template_test)

SET(CMAKE_BUILD_TYPE Debug)
include_directories(../)
enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

################################
# Unit Tests
################################
# Add test cpp file

file(GLOB alltestfiles "*.cpp")

add_executable(Tests ${alltestfiles})
target_link_libraries(Tests pthread gtest)
add_test(Tests Tests)
