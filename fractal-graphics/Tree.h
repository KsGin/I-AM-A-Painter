//
// Created by ksgin on 18-8-13.
//

#ifndef I_AM_A_PAINTER_TREE_H
#define I_AM_A_PAINTER_TREE_H

#include "../include/Turtle.hpp"

class Tree {

    static void Helper(Turtle turtle , int distance , int level) {
        turtle.Forward(distance);
        if (level < 1) return;
        turtle.Left(70);
        Helper(turtle , distance / 3 * 2 , level-1);
        turtle.Right(140);
        Helper(turtle , distance / 3 * 2 , level-1);
    }

public:
    static void Draw(Turtle &turtle) {
        turtle.Goto(400 , 450);
        turtle.Left(90);
        Helper(turtle , 120 , 9);
    }
};

#endif //I_AM_A_PAINTER_TREE_H
