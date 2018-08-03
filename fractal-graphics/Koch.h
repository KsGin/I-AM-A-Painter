//
// Created by ksgin on 18-8-2.
//

#ifndef I_AM_A_PAINTER_KOCH_H
#define I_AM_A_PAINTER_KOCH_H

#include "../include/Turtle.hpp"

/**
 * Von Koch 分形曲线
 */
class Koch {

    static void helper(Turtle &turtle , int distance , int level){
        if (level <= 0) {
            turtle.Forward(distance);
            return;
        }
        int len = static_cast<int>(distance / 3.0 + 0.5);
        helper(turtle , len , level - 1);
        turtle.Left(60);
        helper(turtle , len , level - 1);
        turtle.Right(120);
        helper(turtle ,len , level - 1);
        turtle.Left(60);
        helper(turtle , len , level - 1);
    }

public:
    static void Draw(Turtle & turtle) {
        turtle.Goto(350 , 250);
        helper(turtle ,150 , 3);
        turtle.Right(120);
        helper(turtle ,150 , 3);
        turtle.Right(120);
        helper(turtle ,150 , 3);
    }
};

#endif //I_AM_A_PAINTER_KOCH_H
