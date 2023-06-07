#pragma once
#include "Item.h"

class AudioBook : public Item
{
private:
	double time;
public:
	void getdata()
	{
		Item::getdata();
		cout << "Enter sounding time : ";
		cin >> time;
	}
	void putdata()
	{
		Item::putdata();
		cout << "\nSounding time : " << time;
	}
};