//
// Created by ksgin on 18-8-1.
//

#ifndef I_AM_A_PAINTER_PENTAGRAM_H
#define I_AM_A_PAINTER_PENTAGRAM_H

#include "Turtle.hpp"

/***
 * 使用 Turtle 绘制 五芒星
 */
class Pentagram {
public:
    static void Draw(Turtle &turtle) {
        turtle.Goto(350 , 250);
        for (int i = 0; i < 5; ++i) {
            turtle.Forward(150);
            turtle.Right(144);
            turtle.Forward(150);
            turtle.Left(72);
        }
    }
};

#endif //I_AM_A_PAINTER_PENTAGRAM_H
