cmake_minimum_required(VERSION 3.11)

get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})

project(${ProjectId})

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp)