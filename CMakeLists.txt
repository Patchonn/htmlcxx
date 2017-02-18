cmake_minimum_required(VERSION 2.8.12)
project(htmlcxx)

# compiler options
set(CMAKE_CXX_STANDARD 11)
#add_compile_options(-Wall -pedantic)


set(HCX_SRC
    ${PROJECT_SOURCE_DIR}/src/CharsetConverter.cpp
    ${PROJECT_SOURCE_DIR}/src/Extensions.cpp
    ${PROJECT_SOURCE_DIR}/src/Node.cpp
    ${PROJECT_SOURCE_DIR}/src/ParserDom.cpp
    ${PROJECT_SOURCE_DIR}/src/ParserSax.cpp
    ${PROJECT_SOURCE_DIR}/src/Uri.cpp
    ${PROJECT_SOURCE_DIR}/src/utils.cpp
)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(htmlcxx ${HCX_SRC})
target_include_directories(htmlcxx PUBLIC "${PROJECT_SOURCE_DIR}/include")


