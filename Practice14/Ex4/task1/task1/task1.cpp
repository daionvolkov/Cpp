// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

#include "array.h";

using std::cout;
using std::endl;

int main()
{
    Array<int, long> numbers(100);
    Array<float, float> values(200);

    for (int i = 0; i < 50; i++)
        numbers.add_value(i);
    numbers.show_array();
    cout << "Sum = " << numbers.sum() << endl;
    cout << "Average = " << numbers.average_value() << endl;

    for (int i = 0; i < 100; i++)
        values.add_value(i * 100);
    values.show_array();
    cout << "Sum = " << values.sum() << endl;
    cout << "Average = " << values.average_value() << endl;

    return 0;
}
