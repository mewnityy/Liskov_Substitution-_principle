#pragma once
#include "BadRect.h"

class BadSquare : public BadRect {
public:
    BadSquare(double side) : BadRect(side, side) {}

    void setWidth(double side) override {
        _width = side;
        _height = side;
    }

    void setHeight(double side) override {
        _width = side;
        _height = side;
    }
};