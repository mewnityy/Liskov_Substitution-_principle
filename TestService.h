#pragma once
#include "BadSquare.h"
#include "BasePolygon.h"

class TestService {
public:
    void processRect(BadRect* rect) {
        rect->setWidth(10);
        rect->setHeight(5);
        cout << "  Expected area: 50" << endl;
        cout << "  Actual area: " << rect->calcArea() << endl;
    }

    void processPolygon(string type, BasePolygon* polygon) {
        cout << "  " << type << " area: ";
        cout << polygon->calcArea() << endl;
    }
};
