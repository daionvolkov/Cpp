// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
#include "Paperbook.h"
#include "AudioBook.h"


int main()
{
    SetConsoleOutputCP(1251);
    Item* pubarr[100];


    int n = 0;
    char choice;
    do
    {
        cout << "\nEnter data for a book or sound file (b / a) ? ";
        cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        pubarr[n++]->getdata();
        cout << "Continue (у / n) ? ";
        cin >> choice;
    } 
    while (choice == 'y');

    for (int j = 0; j < n; j++) 
        pubarr[j]->putdata(); 
    cout << endl;
    return 0;
}

