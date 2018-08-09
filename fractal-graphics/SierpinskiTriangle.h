//
// Created by ksgin on 18-8-9.
//

#ifndef I_AM_A_PAINTER_SIERPINSKITRIANGLE_H
#define I_AM_A_PAINTER_SIERPINSKITRIANGLE_H

#include "../include/Turtle.hpp"

/**
 * 海龟绘图绘制谢尔宾斯基三角
 *  Alphabet : A , B
 *  Constants : + −
 *  Axiom : A
 *  Production rules:
 *      A -> B-A-B
 *      B -> A+B+A
 *      Here, "A , B" means "draw forward", "−" means "turn left 60°", "+" means "turn right 60°"
 */

class SierpinskiTriangle {

    static void A (Turtle &turtle , int distance , int level) {
        if (level < 1) {
            turtle.Forward(distance);
            return;
        }
        B(turtle , distance , level-1);
        turtle.Left(60);
        A(turtle , distance , level-1);
        turtle.Left(60);
        B(turtle , distance , level-1);
    }

    static void B (Turtle &turtle , int distance , int level) {
        if (level < 1) {
            turtle.Forward(distance);
            return;
        }
        A(turtle , distance , level-1);
        turtle.Right(60);
        B(turtle , distance , level-1);
        turtle.Right(60);
        A(turtle , distance , level-1);
    }

public:
    static void Draw(Turtle & turtle) {
        turtle.Goto(200 , 450);
        A(turtle , 10 , 5);
    }
};

#endif //I_AM_A_PAINTER_SIERPINSKITRIANGLE_H
