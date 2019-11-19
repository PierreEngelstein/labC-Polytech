cmake_minimum_required (VERSION 3.14.4)
cmake_policy(VERSION 3.14.4)

project(TD4 VERSION 1.0)

enable_language(CXX)
set (CMAKE_CXX_STANDARD 17)

add_executable(td4 "main.cpp" "PointAuto.cpp" "PointDyn.cpp" "PointDyn2.cpp" "PointStr.cpp")