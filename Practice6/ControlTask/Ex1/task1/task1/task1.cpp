// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char c;
    ofstream file("poem.txt"); 

    cout << "Enter a poem:\n";
    cout << "to stop enter $\n";
    while (cin.get(c) && c != '$') {
        file << c; 
    }
    file.close();

    return 0;
}

