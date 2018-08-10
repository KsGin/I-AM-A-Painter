//
// Created by ksgin on 18-8-10.
//

#ifndef I_AM_A_PAINTER_DRAGON_H
#define I_AM_A_PAINTER_DRAGON_H

#include "../include/Turtle.hpp"

class Dragon {

    static void A(Turtle &turtle, int distance, int level) {
        if (level < 1) {
            return;
        }
        A(turtle, distance, level - 1);
        turtle.Right(90);
        B(turtle, distance, level - 1);
        turtle.Forward(distance);
        turtle.Right(90);
    }

    static void B(Turtle &turtle, int distance, int level) {
        if (level < 1) {
            return;
        }
        turtle.Left(90);
        turtle.Forward(distance);
        A(turtle, distance, level - 1);
        turtle.Left(90);
        B(turtle, distance, level - 1);
    }

public:
    static void Draw(Turtle &turtle) {
        turtle.Goto(200, 350);
        A(turtle, 2, 16);
    }
};

#endif //I_AM_A_PAINTER_DRAGON_H
