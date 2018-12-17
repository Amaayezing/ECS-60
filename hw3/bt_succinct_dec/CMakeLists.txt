cmake_minimum_required(VERSION 3.9)
project(bt_succinct_dec)

set(CMAKE_CXX_STANDARD 11)

add_executable(bt_succinct_dec main.cpp bt_succinct_dec.cc bt_succinct_dec.h)