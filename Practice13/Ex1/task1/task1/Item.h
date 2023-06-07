#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Item
{
private:
	string title;
	double price;
public:
	virtual void getdata()
	{
		cout << "\nEnter Title : ";
		cin >> title;
		cout << "Enter price : ";
		cin >> price;
	}
	virtual void putdata()
	{
		cout << "\nTilte: " << title;
		cout << "\nPrice: " << price;
	}
};