#pragma once
#include "dot.h"


class Triangle {
    
    public:
        // Aggregation method
        Triangle(Dot& p1, Dot& p2, Dot& p3);


        //Composition method
        //Triangle(const Dot& p1, const Dot& p2, const Dot& p3);

        double sideA();
        double sideB();
        double sideC();
        double getPerimeter();
        double getArea();


    private:

        //Composition method
        //Dot point1;
        //Dot point2;
        //Dot point3;

        // Aggregation method
        Dot& point1;
        Dot& point2;
        Dot& point3;

};
