/*
 * File   : Circle
 * Author : KsGin 
 * Date   : 2018/7/21
 */

#ifndef I_AM_A_PAINTER_CIRCLE_H
#define I_AM_A_PAINTER_CIRCLE_H

#include "./include/device.h"

class Circle {
public:
    static void DrawCircle(Device &device) {
        const int originX = 400, originY = 300, radius = 200;
        for (int i = originX - radius; i <= originX + radius; ++i) {

            float biaX = abs(originX - i);
            /**
             * cos(a) * radius = biaX cos(a) = biaX / radius
             * a = arccos(a) biaY = sin(a) * radius
             */
            auto biaY = static_cast<int>(sin(acos(biaX / radius)) * radius);

            device.setPixelColor(i, originY + biaY, Color::white());
            device.setPixelColor(i, originY - biaY, Color::white());
        }
    }
};

#endif //I_AM_A_PAINTER_CIRCLE_H
