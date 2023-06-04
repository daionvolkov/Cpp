
#include "Distance.cpp"

#pragma once
#include <iostream>
#include <xkeycheck.h>

using namespace std;


class Distance
{

public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; 
		feet = int(fltfeet); 
		inches = 12 * (fltfeet - feet);
	}


	void getdist()
	{

		cout << "\nEnter feets : ";
		cin >> feet;
		cout << "\nEnter inches : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\" - " << inches << "\"\n";
	}

	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;

private:
	int feet;
	float inches;
	const float MTF;
};
Distance Distance::operator+ (const Distance& d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}


Distance Distance::operator- (const Distance& d2) const {
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i < 0.0) {
		i += 12.0;
		f--;
	}
	return Distance(f, i);
}

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\" - " << dist.inches << "\"\n";
	return out;
}


