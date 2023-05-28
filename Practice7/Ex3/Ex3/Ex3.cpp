// Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	double inches;
};

Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	return d;
}

void ShowDist(Distance d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int  ConvertToInch(Distance d) 
{
	int distInch = d.feet * 12 + d.inches;
	return distInch;
}


int main()
{
	int n;
	int sum = 0;
	cout << "Введите размер массива расстояний ";
	cin >> n;
	Distance* masDist = new Distance[n];

	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}

	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
		sum += ConvertToInch(masDist[i]);

	}
	int resultFeet = sum / 12;
	int resultInch = sum - resultFeet*12;

	cout << "сумма всех расстояний" << endl;
	cout << resultFeet << "\'-" << resultInch << "\"\n";

	delete[] masDist;
}

