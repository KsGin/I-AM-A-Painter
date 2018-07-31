/*
 * File   : QuadraticCruve
 * Author : KsGin 
 * Date   : 2018/7/26
 */

#ifndef I_AM_A_PAINTER_QUADRATICCRUVE_H
#define I_AM_A_PAINTER_QUADRATICCRUVE_H

#include "../include/device.h"

class QuadraticCruve {
public:
    static void DrawQuadraticCruve(Device &device) {
        /**
         * 方程
         * y = (1/100)x^2 - 3x + 10
         */
        for (int i = -390; i < 390; ++i) {
            int y = ((i * i / 100 - 3 * i + 10) + 300);
            y = y >= 0 ? y : 0;
            y = y <= 600 ? y : 600;
            device.setPixelColor(i + 400, y, Color::white());
        }
    }
};

#endif //I_AM_A_PAINTER_QUADRATICCRUVE_H
