cmake_minimum_required(VERSION 3.6)
project(speedlog)

set(CMAKE_VERBOSE_MAKEFILE ON)

# CONAN
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/build/conanbuildinfo.cmake) #Clion, with conanbuildinfo.cmake in build folder
    include(${CMAKE_CURRENT_SOURCE_DIR}/build/conanbuildinfo.cmake)
else()
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake) # Not CLion
endif()
conan_basic_setup()

foreach(LIB ${CONAN_LIBS})
message(STATUS "connan ${LIB}")
    endforeach()
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)
include_directories(src)

set(SOURCE_FILES main.cpp)

add_executable(speedlog ${SOURCE_FILES})
target_link_libraries(speedlog speedloglib)

add_subdirectory(test)