// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    while (a != b)
    {
        if (a > b)
            a -= b; // аналогично выражению a = a - b
        else
            b -= a;
    }
   cout << "НОД = " << a << endl;
   return 0;

}

