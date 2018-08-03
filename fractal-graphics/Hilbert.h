//
// Created by ksgin on 18-7-31.
//

#ifndef I_AM_A_PAINTER_HILBERT_H
#define I_AM_A_PAINTER_HILBERT_H

#include "../include/Turtle.hpp"

/**
 * 海龟绘图绘制希尔伯特曲线
 *  Alphabet : A, B
 *  Constants : F + −
 *  Axiom : A
 *  Production rules:
 *      A → − B F + A F A + F B −
 *      B → + A F − B F B − F A +
 *      Here, "F" means "draw forward", "−" means "turn left 90°", "+" means "turn right 90°" and "A" and "B" are ignored during drawing.
 */
class Hilbert {
    // B → + A F − B F B − F A +
    static void B(Turtle &turtle, int distance, int level) {
        if (level <= 0) {
            return;
        }
        int step = distance;
        turtle.Right(90);
        A(turtle, step, level - 1);
        turtle.Forward(step);
        turtle.Left(90);
        B(turtle, step, level - 1);
        turtle.Forward(step);
        B(turtle, step, level - 1);
        turtle.Left(90);
        turtle.Forward(step);
        A(turtle, step, level - 1);
        turtle.Right(90);
    }
    // A → − B F + A F A + F B −
    static void A(Turtle &turtle, int distance, int level) {
        if (level <= 0) {
            return;
        }
        int step = distance;
        turtle.Left(90);
        B(turtle, step, level - 1);
        turtle.Forward(step);
        turtle.Right(90);
        A(turtle, step, level - 1);
        turtle.Forward(step);
        A(turtle, step, level - 1);
        turtle.Right(90);
        turtle.Forward(step);
        B(turtle, step, level - 1);
        turtle.Left(90);
    }

public:
    static void Draw(Turtle &turtle) {
        turtle.Goto(130, 550);
        A(turtle, 4, 7);
    }
};

#endif //I_AM_A_PAINTER_HILBERT_H
