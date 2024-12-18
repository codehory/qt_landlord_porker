cmake_minimum_required(VERSION 3.5.0)
project(qt_landlord VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(landlord app/main.cpp ${SRCS})


