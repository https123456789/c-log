cmake_minimum_required(VERSION 3.24)

project(c-log VERSION "0.0.1" LANGUAGES C)

add_library(c-log src/log.c)
target_include_directories(c-log PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(c-log-test test/test.c)
target_link_libraries(c-log-test PUBLIC c-log)
target_include_directories(c-log-test PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
