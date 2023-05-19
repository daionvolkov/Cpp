// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void decToBinary(int num) {
    if (num > 1) {
        decToBinary(num / 2);
    }
    cout << num % 2;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Binary: ";
    decToBinary(n);
    cout << endl;
    return 0;
}

