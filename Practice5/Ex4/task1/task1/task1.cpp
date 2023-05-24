// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void show_array(const int Arr[], const int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a > b;
}
bool from_max(const int a, const int b)
{
    return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
        }
    }
}

int main()
{
    int my_size = 0;
    int my_choose = 0;

    cout << "Enter the size of the array: ";
    cin >> my_size;

    int* A = new int[my_size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < my_size; i++)
    {
        cin >> A[i];
    }

    cout << "1. Sort ascending\n";
    cout << "2. Sort in descending order\n";
    cin >> my_choose;

    
    bool (*from_f[2])(int, int) = { from_min, from_max };

    
    bubble_sort(A, my_size, (*from_f[my_choose - 1]));

    cout << "Sorted array: ";
    show_array(A, my_size);

    delete[] A; 

    return 0;
}


