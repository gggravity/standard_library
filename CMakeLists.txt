cmake_minimum_required(VERSION 3.23)
project(standard_libery)

set(CMAKE_CXX_STANDARD 23)

add_executable(lambda1 lang/lambda1.cpp)
add_executable(exception_test exception_test.cpp)
add_executable(pair1 util/pair1.cpp)
add_executable(tuple1 util/tuple1.cpp)
add_executable(tuple2 util/tuple2.cpp)