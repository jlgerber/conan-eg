
set( cpps TimeMe.cpp)
set( hpps TimeMe.hpp)

add_library(speedloglib ${cpps} ${hpps})
target_link_libraries(speedloglib boost_chrono boost_timer boost_system)