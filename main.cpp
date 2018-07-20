/*
 * File   : main
 * Author : KsGin 
 * Date   : 2018/7/20
 */

#include "StraightLine.h"

int main() {
    Device device;
    device.initialize(800, 600, false);

    StraightLine::DrawStraightLine(device);

    device.updateRender();
    device.show();

    while (!device.windowShouldClose()) {
        device.handleEvent();
    }

    device.destory();
    return 0;
}