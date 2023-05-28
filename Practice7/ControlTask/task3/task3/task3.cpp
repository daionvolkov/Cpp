// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;


struct Quad {
    double x1;
    double x2;
};


std::tuple<bool, Quad> solve(double a, double b, double c) 
{
    
    double discriminant = b * b - 4 * a * c;
    Quad solution;

    if (discriminant > 0) 
    {
        solution.x1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.x2 = (-b - sqrt(discriminant)) / (2 * a);
        return make_tuple(true, solution);
    }
    else if (discriminant == 0) 
    {
        solution.x1 = -b / (2 * a);
        solution.x2 = solution.x1;
        return make_tuple(true, solution);
    }
    else 
    {
        return make_tuple(false, solution);
    }
}


int main()
{
    double a;
    double b; 
    double c;
    cout << "Enter the coefficients a b c: ";
    cin >> a >> b >> c;

  
    tuple<bool, Quad> solution = solve(a, b, c);
    bool rootsExist = get<0>(solution);
    Quad roots = get<1>(solution);

    if (rootsExist) {
        cout << "x1 = " << roots.x1 << std::endl;
        cout << "x2 = " << roots.x2 << std::endl;
    }
    else {
        cout << "No solutions " << std::endl;
    }

    return 0;
}

