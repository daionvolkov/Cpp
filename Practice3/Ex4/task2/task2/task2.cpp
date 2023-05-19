// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
    int n, m;
    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number m: ";
    cin >> m;
    int result = gcd(m, n);
    cout <<"Result: " << result << endl;

}
