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
#include "fractal-graphics/Turtle.hpp"

const int screenWidth = 800;
const int screenHeight = 600;

int main() {
    Device *device = new Device();
    device->initialize(screenWidth, screenHeight, false);

    Turtle turtle = Turtle(screenWidth / 2, screenHeight / 2, 0 , device);

    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);

    turtle.Goto(100 , 100);

    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);
    turtle.Right(90);
    turtle.Forward(50);

    device->updateRender();
    device->show();

    while (!device->windowShouldClose()) {
        device->handleEvent();
    }

    device->destory();

    delete device;
    return 0;
}