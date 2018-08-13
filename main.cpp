/*
 * File   : main
 * Author : KsGin 
 * Date   : 2018/7/20
 */

#include <iostream>
#include "basic-graphics/StraightLine.h"
#include "basic-graphics/Circle.h"
#include "basic-graphics/CoordinateAxis.h"
#include "basic-graphics/QuadraticCruve.h"
#include "include/Turtle.hpp"
#include "fractal-graphics/Pentagram.h"
#include "fractal-graphics/Koch.h"
#include "fractal-graphics/Hilbert.h"
#include "fractal-graphics/LevyC.h"
#include "fractal-graphics/SierpinskiTriangle.h"
#include "fractal-graphics/Dragon.h"
#include "fractal-graphics/Tree.h"

const int screenWidth = 800;
const int screenHeight = 600;

int main() {
    Device *device = new Device();
    device->initialize(screenWidth, screenHeight, false);

    Turtle turtle = Turtle(device);
//
//    Pentagram::Draw(turtle);
//    Koch::Draw(turtle);
//    Hilbert::Draw(turtle);
//    LevyC::Draw(turtle);
//    SierpinskiTriangle::Draw(turtle);
//    Dragon::Draw(turtle);
    Tree::Draw(turtle);
    device->updateRender();
    device->show();

    while (!device->windowShouldClose()) {
        device->handleEvent();
    }

    device->destory();

    delete device;
    return 0;
}