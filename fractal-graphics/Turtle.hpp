//
// Created by ksgin on 18-7-31.
//

#ifndef I_AM_A_PAINTER_TURTLE_HPP
#define I_AM_A_PAINTER_TURTLE_HPP

#include <algorithm>
#include "../include/device.h"

/**
 * 海龟程序
 */
class Turtle {

public:

    /**
     * 画笔当前坐标
     */
    int cx, cy;

    /**
     * 画笔当前角度
     */
    double angle;

    /**
     * 画笔设备
     */
    Device *device;


public:
    /**
     * 构造方法
     */
    Turtle(Device *device) {
        this->cx = 0;
        this->cy = 0;
        this->angle = 0;
        this->device = device;
    }

    /**
     * 带参构造方法
     */
    Turtle(const int &x, const int &y , const float &angle , Device *device) {
        this->cx = x;
        this->cy = y;
        this->angle = angle;
        this->device = device;
    }

    /**
     * GO TO 方法（定位画笔
     */
    void Goto(const int &nx , const int &ny){
        cx = nx;
        cy = ny;
    }

    /*
     * Forward
     */
    void Forward(int distance) {
        if (distance <= 0) return;
        double radians = M_PI / 180 * angle;
        for (int i = 0; i <= distance; ++i) {
            this->cx += cos(radians);
            this->cy += sin(radians);
            this->device->clamp(cx , cy);
            this->device->setPixelColor(cx , cy , Color::white());
        }
    }

    /**
     * Backward
     */
    void Backward(int distance) {
        if (distance <= 0) return;
        double radians = M_PI / 180 * angle;
        for (int i = 0; i <= distance; ++i) {
            this->cx -= cos(radians);
            this->cy -= sin(radians);
            this->device->clamp(cx , cy);
            this->device->setPixelColor(cx , cy , Color::white());
        }
    }

    /**
     * Left
     */
    void Left(int angle) {
        this->angle -= angle;
    }

    /**
     * Right
     */
    void Right(int angle) {
        this->angle += angle;
    }

};

#endif //I_AM_A_PAINTER_TURTLE_HPP
