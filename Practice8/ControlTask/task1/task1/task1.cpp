// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.cpp"


int main()
{
    const Time t1(1, 30, 45);
    const Time t2(2, 45, 24);
    Time t3; 

    t3 = t1.addTime(t2); 
    t3.displayTime(); 

    return 0;
}

