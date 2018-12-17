cmake_minimum_required(VERSION 3.9)
project(index_min_pq)

set(CMAKE_CXX_STANDARD 11)

add_executable(index_min_pq main.cpp index_min_pq.h index_min_pq_tester.cc index_min_pq_tester.h)