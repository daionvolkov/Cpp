#pragma once
#include "dot.h"


class Triangle {
    
private:
        Dot point1;
        Dot point2;
        Dot point3;

    public:
        Triangle();
        Triangle(Dot p1, Dot p2, Dot p3);

        double getPerimeter();
        double getArea();
        double sideA();
        double sideB();
        double sideC();
};
