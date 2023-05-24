// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::ends;
using std::endl;

int main()
{
    std::vector<int> v1;
    std::vector<int> v2;

    srand(time(NULL)); 
    int a, b, c; 
    int k = 0;
    const int n = 10; 
    int mas[n];


    for (int i = 0; i < n; i++)
    {
        
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;
        
        if (a * b != c)
        {
            v2.push_back(c);
            k++; 
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else 
        { 
            v1.push_back(c); 
        }
    }
    cout << "\nAll: "; 
    
    for (int i = 0; i < n; i++) 
    { 
        cout << mas[i]<<" "<< ends;
    }
    cout << endl;
    cout << "Count error: " << k << endl;

    cout << "\nGood: "; 
    for (int i = 0; i < v1.size(); i++) 
    { 
        cout << v1[i] <<" " << ends;
    } 
    cout << "\nBad: "; 
    for (int i = 0; i < v2.size(); i++) 
    { 
        cout << v2[i] <<" " << ends;
    }
    return 0;
}

