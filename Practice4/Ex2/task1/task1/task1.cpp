// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;


void swap(int*, int*);
void swap(int&, int&);

int main()
{

    int x = 5;
    int y = 10;
   
    
    swap(&x, &y);
    cout << "swap(&x, &y): x = " << x << ", y = " << y << endl;

    swap(x, y);
    cout << "swap(x, y): x = " << x << ", y = " << y << endl;

    return 0;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}