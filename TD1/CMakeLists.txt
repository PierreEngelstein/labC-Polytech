cmake_minimum_required (VERSION 3.14.4)
cmake_policy(VERSION 3.14.4)

project(TD1 VERSION 1.0)

enable_language(CXX)
set (CMAKE_CXX_STANDARD 17)

add_executable(td1 "Main.cpp" "Complexe.cpp")