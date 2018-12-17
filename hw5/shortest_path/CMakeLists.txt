cmake_minimum_required(VERSION 3.9)
project(shortest_path)

set(CMAKE_CXX_STANDARD 11)

add_executable(shortest_path main.cpp shortest_path.cc shortest_path.h index_min_pq.h)