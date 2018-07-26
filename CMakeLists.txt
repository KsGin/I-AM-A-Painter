cmake_minimum_required(VERSION 3.10)
project(I_AM_A_Painter)

set(CMAKE_CXX_STANDARD 11)

add_executable(I_AM_A_Painter include/color.cpp include/color.h include/device.cpp include/device.h
        StraightLine.h main.cpp Circle.h CoordinateAxis.h QuadraticCruve.h)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIR})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARY})