// ControlTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double x[5]; 
	double y[5];
	double s = 0.0;

	std::cout << "Enter the x and y coordinates of the five vertices of the pentagon:\n";

	for (int i = 0; i < 5; i++) {
		std::cin >> x[i] >> y[i];
	}
	
	for (int i = 0; i < 4; i++) {
		s += x[i] * y[i + 1] - x[i + 1] * y[i];
	}


	s += x[4] * y[0] - x[0] * y[4];
	s = std::abs(s) / 2.0;

	std::cout << "The area of the pentagon is " << s << std::endl;

	return 0;
}

