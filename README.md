# example usage of conan
this setup makes use of spdlog boost and catch.
It generates a static lib and two executables - all trivial. It is meant to illustrate / work through using conan to manage c++ packages.

usage

### Set up conan

```
mkdir conan && cd conan
conan install .. 
```

### extend CMakeLists.txt file

Add this to the main CMakeLists.txt file to make cmake aware of conan. I print out the libraries so that I can be selective when i link against them. If I don't do this when i use boost, for instance, I link against a whole lot of stuff that I don't want....
```
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
```

### Get your build on
I use CLion, so I build from the ui. However, you could do this:

```
mkdir build && cd build
cmake ..
cmake --build .
```

