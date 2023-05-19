// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int addNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return (n + addNumbers(n - 1));
}

int addNumbers(int a, int b, int sum = 0) {
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}


int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int result = addNumbers(n);

    cout << "Result: " << result << endl;

    int start = 1, end = 5;
    result = addNumbers(start, end);
    cout << "Result: " << result << endl;
}

