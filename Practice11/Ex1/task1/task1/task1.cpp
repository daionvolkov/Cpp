
// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();

	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;

	cout << "\ndist1 = ";
	dist1.showdist();



	dist3 = dist1 - dist2;

	cout << "\ndist1 = " << dist1;
	
}

