// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string privet(string name)
{

    string str = name + ", " + "hello!\n";
    return str;
}

void privet(string name, int k)
{
    cout << name << ", " << "hello! " << "you input " << k << endl;
}



int main()
{
    string name;
    int k;
    cout << "What is your name?" << endl;
    cin >> name;
    
    
    cout << "Input number:" << endl;
    cin >> k;

    privet(name);
    privet(name, k);
}
