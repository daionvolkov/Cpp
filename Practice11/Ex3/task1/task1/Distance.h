
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
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	void metersToFeetInches(float meters, int& convertedFeet, float& convertedInches) const
	{
		float fltfeet = MTF * meters;
		convertedFeet = int(fltfeet);
		convertedInches = 12 * (fltfeet - convertedFeet);
	}

	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;
	Distance::operator+ (const Distance& d2) const
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


	Distance operator- (const Distance& d2) const {
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i < 0.0) {
			i += 12.0;
			f--;
		}
		return Distance(f, i);
	}
	Distance operator+ (float d2) const
	{
		int d2Feet;
		float d2Inches;
		metersToFeetInches(d2, d2Feet, d2Inches);
		int f = feet + d2Feet;
		float i = inches + d2Inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator- (float d2) const
	{
		int d2Feet;
		float d2Inches;
		metersToFeetInches(d2, d2Feet, d2Inches);
		int f = feet - d2Feet;
		float i = inches - d2Inches;
		if (i < 0.0)
		{
			i += 12.0;
			f--;
		}
		return Distance(f, i);
	}

private:
	int feet;
	float inches;
	const float MTF;

	
};

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\'-" << dist.inches << "\"\n";
	return out;
}


