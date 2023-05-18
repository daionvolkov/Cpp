// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    double s = 0.0;
    double k, m;
    cout << "k = ";
    cin >> k;
    cout << "m = ";
    cin >> m;
    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    cout << s;
    return 0;
}
