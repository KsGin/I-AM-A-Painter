/*
 * File   : StraightLine
 * Author : KsGin 
 * Date   : 2018/7/20
 */

#ifndef I_AM_A_PAINTER_STRAIGHTLINE_H
#define I_AM_A_PAINTER_STRAIGHTLINE_H

#include "include/device.h"

class StraightLine {
public:
    static void DrawStraightLine(Device &device) {
        int lineStartX = 100, lineEndX = 300, Y = 100;
        for (int i = lineStartX; i < lineEndX; ++i) {
            device.setPixelColor(i, Y, Color::white());
        }
    }
};


#endif //I_AM_A_PAINTER_STRAIGHTLINE_H
