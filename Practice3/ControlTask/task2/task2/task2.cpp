// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using std:: cin;
using std::cout;
using std::endl;

double cube_root_first(double num) {
    return cbrt(num);
}

double cube_root_second(double num) {
    double x1 = num / 3; 
    double x2 = (2 * x1 + num / (x1 * x1)) / 3;
    
    while (abs(x2 - x1) > 0.0001) { 
        x1 = x2;
        x2 = (2 * x1 + num / (x1 * x1)) / 3;
    }
    return x2;
}

int main()
{
    double x;
    std::cout << "Enter number: \n";
    cin >> x;
    cout << "Result first method: " << cube_root_first(x) << endl;
    cout << "Result second method: " << cube_root_first(x);
}
