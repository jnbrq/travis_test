cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(travis_test)
find_package(Boost 1.66 REQUIRED)
add_executable(travis_test main.cpp)
target_link_libraries(travis_test Boost::boost)

