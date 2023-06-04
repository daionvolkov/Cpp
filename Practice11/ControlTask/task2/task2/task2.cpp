// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Point.cpp"

int main()
{
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    std::sort(v.begin(), v.end());

    for (const auto& point : v)
        std::cout << point << '\n';

    return 0;
}

