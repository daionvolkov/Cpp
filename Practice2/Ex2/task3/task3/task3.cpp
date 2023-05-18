// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double x, x1, x2, y;
    int a, b, temp;
    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;
    cout << "\tx\tsin(x)\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;


    x = x1;
    while (x <= x2); {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }



    do {

        if (x1 > x2)
            x1 -= b; // аналогично выражению a = a - b
        else
            b -= a;
    }
    while (x != x2);

    cout << "НОД = " << a << endl;
    return 0;
}

