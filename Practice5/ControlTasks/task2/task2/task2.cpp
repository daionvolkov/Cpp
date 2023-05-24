// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* max_vect(int size, const int* arr1, const int* arr2) {
    int* result = new int[size]; 

    for (int i = 0; i < size; i++) {
        if (arr1[i] > arr2[i]) {
            result[i] = arr1[i];
        }
        else {
            result[i] = arr2[i];
        }
    }

    return result;
}


int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };
    int kc = sizeof(a) / sizeof(a[0]); 
    int* c; 

    c = max_vect(kc, a, b);

    for (int i = 0; i < kc; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    delete[] c;
    return 0;
}

