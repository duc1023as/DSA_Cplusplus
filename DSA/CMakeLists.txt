cmake_minimum_required(VERSION 3.10)

project(DSA)

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE CPP::LinkedList)