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
    ${PROJECT_SOURCE_DIR}/src/entities.c
)
include_directories("${PROJECT_SOURCE_DIR}/include")

# leave OFF so it doesn't cause problems with already existing libraries
option(HCX_LIBRARY "Build static library (builds objects only by default)." OFF)
if(HCX_LIBRARY)
    add_library(htmlcxx ${HCX_SRC})
    
    # rules for installing
    install(TARGETS dukp
        INCLUDES DESTINATION "include"
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
    )
    install(DIRECTORY "include/" DESTINATION "include")
    
else(HCX_LIBRARY)
    add_library(htmlcxx OBJECT ${HCX_SRC})
endif(HCX_LIBRARY)

target_include_directories(htmlcxx PUBLIC "${PROJECT_SOURCE_DIR}/include")


