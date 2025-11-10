#pragma once
#include "TestService.h"
#include "Square_LCP.h"
#include "Rect_LSP.h"

class DemoManager {
    TestService& _service;
public:
    DemoManager(TestService& service) : _service(service) {}

    void demoOfBadRectProcess1() {
        cout << "\n> Normal rectangle process" << endl;
        BadRect testRect(1, 2);
        _service.processRect(&testRect);
    }

    void demoOfBadRectProcess2() {
        cout << "\n> Square process" << endl;
        BadSquare testSquare(1);
        _service.processRect(&testSquare);
    }

    void demoOfGoodRectProcess() {
        cout << "\n> Very good rectangle process: " << endl;
        Rect_LCP rectangle(10, 5);
        _service.processPolygon("Rectangle", &rectangle);
    }

    void demoOfGoodSquareProcess() {
        cout << "\n> Very good square process: " << endl;
        Square_LCP square(10);
        _service.processPolygon("Square", &square);
    }

 void demoOfGoodTriangleProcess() {
        cout << "\n> just really good triangle process: " << endl;
        Triangle_LSP triangle(10, 5);
        _service.processPolygon("Triangle", &triangle);
    }
};
