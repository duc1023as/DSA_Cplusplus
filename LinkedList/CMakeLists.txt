cmake_minimum_required(VERSION 3.10)

project(LinkedList)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(HeaderPath
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.cpp
)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
add_library(CPP::LinkedList ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC  ${HeaderPath}
)
