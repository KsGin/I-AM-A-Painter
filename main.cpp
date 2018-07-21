/*
 * File   : main
 * Author : KsGin 
 * Date   : 2018/7/20
 */

#include "StraightLine.h"
#include "Circle.h"
#include "CoordinateAxis.h"

int main() {
    Device device;
    device.initialize(800, 600, false);

    CoordinateAxis::DrawCoordinateAxis(device , 800 , 600);

//    StraightLine::DrawStraightLine(device);
    Circle::DrawCircle(device);

    device.updateRender();
    device.show();

    while (!device.windowShouldClose()) {
        device.handleEvent();
    }

    device.destory();
    return 0;
}