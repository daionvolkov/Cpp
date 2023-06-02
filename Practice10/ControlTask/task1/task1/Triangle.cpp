#include "Triangle.h"
#include "dot.h"
#include <math.h>

// Aggregation method
Triangle::Triangle(Dot& p1, Dot& p2, Dot& p3) : point1(p1), point2(p2), point3(p3) {}


//Composition method
//Triangle::Triangle(const Dot& p1, const Dot& p2, const Dot& p3): point1(p1), point2(p2), point3(p3) {}

double Triangle::sideA()
{
    return point1.distanceTo(point2);
}
double Triangle::sideB()
{
    return point2.distanceTo(point3);
}
double Triangle::sideC()
{
    return point3.distanceTo(point1);
}

double Triangle::getPerimeter() {
    double perimeter = sideA() + sideB() + sideC();
    return perimeter;
}

double Triangle::getArea() {
    double s = getPerimeter() / 2;
    
    double area = sqrt(s * (s - sideA()) * (s - sideB()) * (s - sideC()));
    return area;
}