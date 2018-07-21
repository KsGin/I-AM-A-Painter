/*
 * File   : CoordinateAxis
 * Author : KsGin 
 * Date   : 2018/7/21
 */

#ifndef I_AM_A_PAINTER_COORDINATEAXIS_H
#define I_AM_A_PAINTER_COORDINATEAXIS_H

#include "./include/device.h"

class CoordinateAxis {
public:
    static void DrawCoordinateAxis(Device &device , int width , int height){
        // X轴中点坐标轴
        for (int i = 5; i < width - 5; ++i) {
            device.setPixelColor(i , height / 2 , Color::green());
        }
        for (int i = width - 10; i < width-5; ++i) {
            device.setPixelColor(i , height / 2 + abs(width - 5 - i) , Color::green());
            device.setPixelColor(i , height / 2 - abs(width - 5 - i) , Color::green());
        }
        // Y轴中点坐标轴
        for (int i = 5; i < height - 5; ++i) {
            device.setPixelColor(width / 2 , i , Color::green());
        }
        for (int i = 0; i < 5; ++i) {
            device.setPixelColor(width / 2 + i , i , Color::green());
            device.setPixelColor(width / 2 - i , i , Color::green());
        }
    }
};

#endif //I_AM_A_PAINTER_COORDINATEAXIS_H
