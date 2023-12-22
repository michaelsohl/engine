cmake_minimum_required(VERSION 3.15)
project(engine CXX)

add_library(engine src/engine.cpp)
target_include_directories(engine PUBLIC include)

set_target_properties(engine PROPERTIES PUBLIC_HEADER "include/engine.h")

install(TARGETS engine)
