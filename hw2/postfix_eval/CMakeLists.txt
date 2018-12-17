cmake_minimum_required(VERSION 3.9)
project(postfix_eval)

set(CMAKE_CXX_STANDARD 11)

add_executable(postfix_eval main.cpp postfix.cc postfix.h postfix_eval.cc postfix_eval.h)