cmake_minimum_required(VERSION 3.12)
project(Programs C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g")

add_executable(Programs hello.c)