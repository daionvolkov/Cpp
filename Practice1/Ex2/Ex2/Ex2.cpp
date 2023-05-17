// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "Введите свое имя\n";
	double a, b; cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	cout <<"Объем занимаемой памяти " << sizeof(a / b) << ends << sizeof(x) << endl;
	return 0;
}

