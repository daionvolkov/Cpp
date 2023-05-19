// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double area(double s) 
{
    double area = sqrt(3) / 4 * (s * s);
    return area;
}


double area(double a, double b, double c) 
{
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}


int main()
{
    double s;
    double a; 
    double b; 
    double c;
    int choice = 0;

    cout << "For which triangle should I calculate the area? " << endl;
    cout << "Equilateral, press 1 " << endl;
    cout << "Sided press 2 " << endl;
    cin >> choice;
    if (choice == 1) 
    {
        cout << "Enter side of an equilateral triangle: ";
        cin >> s;
        cout << "Area of the equilateral triangle is: " << area(s) << endl;
    }
    else if (choice == 2) 
    {
        cout << "Enter sides of an irregular triangle: ";
        cin >> a >> b >> c;
        cout << "Area of the irregular triangle is: " << area(a, b, c) << endl;
    }
    else 
    {
        cout << "wrong input";
    }

    
    return 0;
}

