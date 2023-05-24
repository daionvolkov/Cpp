// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;

int main()
{
    const int n = 10;
    int mas[n];
    int s = 0;
    double middle = 0;
    int sum_neg = 0; 
    int sum_pos = 0; 
    int sum_odd = 0; 
    int sum_even = 0;
    int max_index = 0; 
    bool min_index = 0;
    bool found_max = false; 
    bool found_min = false;
    int prod = 1;

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (mas[i] < 0) {
            sum_neg += mas[i];
        }
        else {
            sum_pos += mas[i];
        }

        if (i % 2 == 0) {
            sum_even += mas[i];
        }
        else {
            sum_odd += mas[i];
        }

        if (!found_max || mas[i] > mas[max_index]) {
            max_index = i;
            found_max = true;
        }

        if (!found_min || mas[i] < mas[min_index]) {
            min_index = i;
            found_min = true;
        }
    }
    
    for (int i = min_index; i < max_index; i++)
    {
        prod *= mas[i];
    }

    middle = s / n;
    cout << "Sum: " << s << endl;
    cout << "Middle value: " << middle << endl;
    cout << "Sum of negative elements: " << sum_neg << endl;
    cout << "Sum of positive elements: " << sum_pos << endl;
    cout << "Sum of elements with odd indices: " << sum_odd << endl;
    cout << "Sum of elements with even indices: " << sum_even << endl;
    cout << "Maximal element index: " << max_index << endl;
    cout << "Minimal element index: " << min_index << endl;
    cout << "Product of array elements located between the maximal and minimal elements: " << prod << endl;



}

