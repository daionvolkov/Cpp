// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;



int sum(int n) {
    if (n == 1) {
        return 5;
    }
    else {
        return 5 * n + sum(n - 1);
    }
}


int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Result: " << sum(n) << endl;
    return 0;
}
