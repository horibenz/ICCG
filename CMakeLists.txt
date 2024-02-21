cmake_minimum_required(VERSION 2.8)
project(Poisson_ICCG CXX)
message("project name is automaically set as: ${PROJECT_NAME}")
include_directories(./src)

add_executable(a.out src/main.cpp src/ICCG.cpp)
