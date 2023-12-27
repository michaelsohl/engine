cmake_minimum_required(VERSION 3.15)
project(engine_den CXX)

add_library(engine_den src/engine.cpp)
target_include_directories(engine_den PUBLIC include)

set_target_properties(engine_den PROPERTIES PUBLIC_HEADER "include/engine.h")

install(TARGETS engine_den)
