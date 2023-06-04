// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.cpp"


int main()
{
    Time t1(1, 30, 45);
    Time t2(0, 45, 15);
    Time t3;

    t3 = t1 + t2;
    cout << "t1 + t2 = "; 
    t3.displayTime();


    t3 = t1 - t2;
    cout << "t1 - t2 = ";
    t3.displayTime();


    t3 = t1 + 300.5;
    cout << "t1 + 300.5 = ";
    t3.displayTime();


    t3 = 500.25 + t1;
    cout << "500.25 + t1 = ";
    t3.displayTime();

    
    if (t1 == t2) {
        cout << "t1 and t2 are equal." << endl;
    }
    else {
        cout << "t1 and t2 are not equal." << endl;
    }

    return 0;
}

