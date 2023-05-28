// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


struct Time {
    int hours;
    int minutes;
    int seconds;

    void add(Time t) 
    {
        seconds += t.seconds;
        minutes += t.minutes + seconds / 60;
        hours += t.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }

    void subtract(Time t) 
    {
        seconds -= t.seconds;
        minutes -= t.minutes + seconds / 60;
        hours -= t.hours + minutes / 60;
        seconds = (seconds + 60) % 60;
        minutes = (minutes + 60) % 60;
        hours = (hours + 24) % 24;
    }
};




int main()
{
    Time t;
    cout << "Enter the time (hours minutes seconds) : ";
    cin >> t.hours >> t.minutes >> t.seconds;

    Time t1{ 1, 30, 45 };
   // Time t2{ 0, 45, 15 };

    t1.add(t);
    cout << "Time after add: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;

    t1.subtract(t);
    cout << "Time after subtracting: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;

    int total_seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;
    cout << "Total number of seconds: " << total_seconds << endl;
}

