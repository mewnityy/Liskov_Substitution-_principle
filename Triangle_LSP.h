#pragma once
#include "BasePolygon.h"

class Triangle_LSP : public BasePolygon {
    double _base; // osnova
    double _height; // wysota
public:
    Triangle_LSP(double base, double height)
        : _base(base), _height(height) {}

    void setBase(double base) { _base = base; }
    void setHeight(double height) { _height = height; }

    double calcArea() const override {
        return 0.5 * _base * _height;
    }
};
