cmake_minimum_required(VERSION 3.0)

project(solider_gun)

include_directories(${CMAKE_SOURCE_DIR}/include)
set(SRC src/Gun.cpp src/Solider.cpp)
set(CMAKE_BUILD_TYPE Debug)

add_executable(solider_gun main.cpp ${SRC})