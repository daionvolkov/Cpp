
// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
    Distance dist1 = 2.35F;
    float mtrs;
    mtrs = static_cast<float>(dist1);
    cout << mtrs << endl;
    mtrs = dist1;
    cout << mtrs << endl;
	
}

