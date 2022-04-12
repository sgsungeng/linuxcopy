cmake_minimum_required(VERSION 3.20)
project(linuxcopy)

set(CMAKE_CXX_STANDARD 14)
include_directories(linux-copy_5_16_11/include/*/*)
file(GLOB_RECURSE ALL_SOURCE "linux-copy_5_16_11/init/*.c")
add_library(
        m1
        SHARED
        ${ALL_SOURCE}
)
add_executable(linuxcopy main.cpp)