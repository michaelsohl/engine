cmake_minimum_required(VERSION 3.15)
project(engine_fin CXX) #Set the name of the project.

add_library(engine_fin src/engine.cpp)
target_include_directories(engine_fin PUBLIC include)

set_target_properties(engine_fin PROPERTIES PUBLIC_HEADER "include/engine.h")

install(TARGETS engine_fin)
