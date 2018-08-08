//
// Created by ksgin on 18-8-8.
//

#ifndef I_AM_A_PAINTER_LEVYC_H
#define I_AM_A_PAINTER_LEVYC_H

#include "../include/Turtle.hpp"

/**
 * 海龟绘图绘制莱维 C 形曲线
 *  Alphabet : F
 *  Constants : + −
 *  Axiom : F
 *  Production rules:
 *      F -> +F--F+
 *      Here, "F" means "draw forward", "−" means "turn left 90°", "+" means "turn right 90°" and "A" and "B" are ignored during drawing.
 */

class LevyC {
    static void helper(Turtle &turtle , int distance , int level) {
        if (level < 0) {
            turtle.Forward(distance);
            return;
        }
        turtle.Right(45);
        helper(turtle,distance,level-1);
        turtle.Left(45);
        turtle.Left(45);
        helper(turtle,distance,level-1);
        turtle.Right(45);
    }
public:
    static void Draw(Turtle &turtle) {
        turtle.Goto(300 , 250);
        helper(turtle , 3 , 11);
    }
};

#endif //I_AM_A_PAINTER_LEVYC_H
