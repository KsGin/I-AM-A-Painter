cmake_minimum_required(VERSION 3.10)
project(I_AM_A_Painter)

set(CMAKE_CXX_STANDARD 11)

add_executable(I_AM_A_Painter include/color.cpp include/color.h include/device.cpp include/device.h
        StraightLine.h main.cpp)

target_link_libraries(I_AM_A_Painter /usr/local/Cellar/sdl2/2.0.8/lib/libSDL2.dylib)