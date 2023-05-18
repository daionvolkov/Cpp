// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double x;
    double y;
    std::cout << "Enter the x, y coordinates\n";
    std::cin >> x;
    std::cin >> y;

    if (x * x + y * y < 9 && y > 0) {
        std::cout << "inside";
    }

    else if (x * x + y * y > 9 || y < 0) {
        std::cout << "outside";
    }
    else {
        std::cout << "at the borders";
    }
    return 0;
}
