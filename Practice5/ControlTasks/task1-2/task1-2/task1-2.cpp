// task1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}


int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    selectionSort(a, N);

    for (int i : a) {
       cout << i << '\t';
    }

    return 0;
}

