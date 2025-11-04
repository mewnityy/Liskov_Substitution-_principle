#pragma once
#include "BasePolygon.h"

class Square_LCP : public BasePolygon {
    double _side;
public:
    Square_LCP(double side) : _side(side) {}
    void setSide(double side) { _side = side; }
    double calcArea() const override { return _side * _side; }
};