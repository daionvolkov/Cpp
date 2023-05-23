// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::cerr;
using namespace std;


bool Input(int& a, int& b) 
{
	std::cout << "Input numbers (format: a b): ";
	std::cin >> a;
	std::cin >> b;
	if (a != 0 && b != 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
	

    
}


int main()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;

	return 0;
}

