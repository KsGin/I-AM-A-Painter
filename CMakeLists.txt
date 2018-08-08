cmake_minimum_required(VERSION 3.10)
project(I_AM_A_Painter)

set(CMAKE_CXX_STANDARD 11)

add_executable(I_AM_A_Painter
        include/color.cpp
        include/color.h
        include/device.cpp
        include/device.h
        basic-graphics/StraightLine.h
        main.cpp
        basic-graphics/Circle.h
        basic-graphics/CoordinateAxis.h
        basic-graphics/QuadraticCruve.h
        fractal-graphics/Hilbert.h
        include/Turtle.hpp
        fractal-graphics/Pentagram.h
        fractal-graphics/Koch.h
        fractal-graphics/LevyC.h)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIR})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARY})