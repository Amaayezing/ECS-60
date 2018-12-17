cmake_minimum_required(VERSION 3.9)
project(llrb)

set(CMAKE_CXX_STANDARD 11)

add_executable(llrb main.cpp llrb_set.h llrb_map.h llrb_multimap.h map_tester.cc map_tester.h multimap_tester.cc multimap_tester.h)