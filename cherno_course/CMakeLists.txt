cmake_minimum_required(VERSION 3.5)

project(study_cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB srcs ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(study_cpp ${srcs})
