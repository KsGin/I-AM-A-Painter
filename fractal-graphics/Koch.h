//
// Created by ksgin on 18-8-2.
//

#ifndef I_AM_A_PAINTER_KOCH_H
#define I_AM_A_PAINTER_KOCH_H

#include "Turtle.hpp"

/**
 * Von Koch 分形曲线
 */
class Koch {

    static void helper(Turtle &turtle , int distance){
        if (distance <= 5)
            return;
        int len = static_cast<int>(distance / 3.0 + 0.5);
        turtle.Forward(len);
        turtle.Left(60);
        helper(turtle , len);
        turtle.Right(120);
        helper(turtle ,len);
        turtle.Left(60);
        turtle.Forward(len);
    }

public:
    static void Draw(Turtle & turtle) {
        turtle.Goto(350 , 250);
        for (int i = 0; i < 12; ++i) {
            helper(turtle ,50);
            turtle.Left(72);
            helper(turtle ,50);
            turtle.Right(108);
        }
    }
};

#endif //I_AM_A_PAINTER_KOCH_H
