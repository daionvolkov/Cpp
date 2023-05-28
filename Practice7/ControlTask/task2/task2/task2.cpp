// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


struct Quad {
    double x1;
    double x2;
};

Quad solve(double a, double b, double c) {
    Quad solution;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
       
        solution.x1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
      
        solution.x1 = -b / (2 * a);
        solution.x2 = solution.x1;
    }
    else { 
        solution.x1 = numeric_limits<double>::quiet_NaN();
        solution.x2 = numeric_limits<double>::quiet_NaN();
        
    }

    return solution;
}


int main()
{
    double a; 
    double b; 
    double c;
    cout << "Enter the coefficients a b c: ";
    cin >> a >> b >> c;

    Quad solution = solve(a, b, c);

    if (isnan(solution.x1) && isnan(solution.x2)) {
        cout << "No solutions." << endl;
    }
    else if (solution.x1 == solution.x2) {
        cout << "x1 = x2 = : " << solution.x1 << endl;
    }
    else {
        cout << "x1 = " << solution.x1 << endl;
        cout << "x2 = " << solution.x2 << endl;
    }

    return 0;
}

