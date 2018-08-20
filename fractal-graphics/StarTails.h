//
// Created by ksgin on 18-8-20.
//

#ifndef I_AM_A_PAINTER_STARTAILS_H
#define I_AM_A_PAINTER_STARTAILS_H

#include "../include/Turtle.hpp"

class StarTails {
public:
    static void Draw(Turtle & turtle){
        turtle.Goto(300 , 200);
        for (int i = 0; i < 18; ++i) {
            turtle.Forward(200);
            turtle.Right(95);
        }
    }
};

#endif //I_AM_A_PAINTER_STARTAILS_H
