// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::sin;
using std::cout;
using std::cin;
using std::endl;


int Myroot(double a, double b, double c, double& x1, double& x2) {
    double discriminant = b * b - 4 * a * c;
    int result = -1;
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        result = 1;
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        result = 0;
    }
    return result;
    
}



int main()
{
    double a, b, c , x1, x2;
    cout << "Enter the coefficients of the quadratic equation: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    int result = Myroot(a, b, c, x1, x2);
    if (result == -1) {
        cout << "No roots of the equation" << endl;
    }
    else if (result == 0) {
        cout << "Root of the equation one x1 = x2 = " << x1 << endl;
    }
    else {
        cout << "Roots of the equation x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    return 0;
}

