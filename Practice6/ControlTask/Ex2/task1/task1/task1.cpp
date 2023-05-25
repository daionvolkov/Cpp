// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int b[N];
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями

    ofstream file("arrays.txt");
    file << "Source array: ";
    for (int i = 0; i < N; i++) {
        file << a[i] << ' ';
    }

    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    file << "\nSorted array: ";
    for (int i = 0; i < N; i++) {
       file << a[i] << ' ';
    }
    file.close();

    return 0;
}

