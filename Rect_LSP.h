#pragma once
#include "BasePolygon.h"

class Rect_LCP : public BasePolygon {
protected:
    double _width;
    double _height;
    
public:
    Rect_LCP(double width, double height) : _width(width), _height(height) {}
    void setWidth(double width) {_width = width; }
    void setHeight(double height) {_height = height; }
    double calcArea() const override { return _width * _height; }
};