/*
 * File   : main
 * Author : KsGin 
 * Date   : 2018/7/20
 */

#include "StraightLine.h"
#include "Circle.h"
#include "CoordinateAxis.h"
#include "QuadraticCruve.h"

const int screenWidth = 800;
const int screenHeight = 600;

int main() {
    Device device;
    device.initialize(screenWidth, screenHeight, false);

    CoordinateAxis::DrawCoordinateAxis(device , screenWidth , screenHeight);

//    StraightLine::DrawStraightLine(device);
//    Circle::DrawCircle(device);
    QuadraticCruve::DrawQuadraticCruve(device);

    device.updateRender();
    device.show();

    while (!device.windowShouldClose()) {
        device.handleEvent();
    }

    device.destory();
    return 0;
}