#pragma once
#include "Header.h"

class BadRect {
protected:
    double _width;
    double _height;
public:
    BadRect(double width, double height) : _width(width), _height(height) {}
    double getWidth() const { return _width; }
    double getHeight() const { return _height; }
    virtual void setWidth(double width) { _width = width; }
    virtual void setHeight(double height) { _height = height; }
    double calcArea() const { return _width * _height; }
};