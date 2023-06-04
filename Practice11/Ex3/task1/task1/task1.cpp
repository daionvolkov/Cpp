
// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
    Distance dist1 = Distance(2.35F);
    float mtrs;
    mtrs = dist1 + 2.8F;
    cout << mtrs << endl;
    mtrs = 2.8F + dist1;
    cout << mtrs << endl;
	
}

