// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int search(int key, int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (i != 0) 
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            return i;
        }
    }
    return -1;
}


int main()
{
    const int size = 10;
    int arr[size] = { 5, 8, 3, 1, 9, 2, 4, 7, 6, 10 };
    int key;

    cout << "Enter the key: ";
    cin >> key;

    int index = search(key, arr, size);

    if (index != -1) {
        cout << "Element: " << key << " index: " << index << endl;
    }
    else {
        cout << "Element: " << key << " not found" << endl;
    }

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

