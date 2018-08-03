//
// Created by ksgin on 18-7-31.
//

#ifndef I_AM_A_PAINTER_HILBERT_H
#define I_AM_A_PAINTER_HILBERT_H

#include "../include/Turtle.hpp"

/**
 * 海龟绘图绘制希尔伯特曲线
 * 变数：L,R
 * 常数：F + -
 * 规则：
 *      L -> —— R F + L F L + F R ——
 *      R -> —— L F + R F R + F L ——
 *      F : Forward
 *      + : Right
 *      - : Left
 */
class Hilbert {
public:
    static void Draw(Turtle & turtle) {

    }
};

#endif //I_AM_A_PAINTER_HILBERT_H
