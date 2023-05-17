// Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double perimeter;
    double halfPerimeter;
    double side; 
    double s;


    std::cout << "Enter the perimeter of triangle: ";
    std::cin >> perimeter;
    side = perimeter / 3.0;
    halfPerimeter = perimeter / 2;

    s = std::sqrt(halfPerimeter *(halfPerimeter -side) * (halfPerimeter - side) * (halfPerimeter - side));

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Side\tArea\n";
    std::cout << side << "\t" << s << std::endl;

    return 0;

}
    
