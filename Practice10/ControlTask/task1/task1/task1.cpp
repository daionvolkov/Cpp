// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "triangle.h"
using std::cout;
using std::endl;

int main()
{
    
    Dot p1(0, 0);
    Dot p2(3, 0);
    Dot p3(0, 4);


    //Composition method
    /*Triangle t1(p1, p2, p3);
    double perimeter1 = t1.getPerimeter();
    double area1 = t1.getArea();

    cout << "Composition method" << endl;
    cout << "Perimeter: " << perimeter1 << endl;
    cout << "Area: " << area1 << endl;*/

    // Aggregation method
    Triangle t2(p1, p2, p3);

    double perimeter2 = t2.getPerimeter();
    double area2 = t2.getArea();

    cout << "Aggregation method" << endl;
    cout << "Perimeter: " << perimeter2 << endl;
    cout << "Area: " << area2 << endl;

    return 0;
}

