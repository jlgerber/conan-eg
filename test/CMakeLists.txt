
file(GLOB testcpps src/*.cpp)
add_executable(testSpeedlog main.cpp ${testcpps})
target_link_libraries(testSpeedlog speedloglib)