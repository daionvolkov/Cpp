// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

//    int center_x = rand() % 3;
//    int center_y = rand() % 3;
        int center_x = 0;
        int center_y = 0;
    int points = 0;
    int shots = 0;
    while (points < 50) {
        int x, y;
        cout << "Enter x and y coordinates of your shot: ";
        cin >> x >> y;
//      x += rand() % 3 - 1;        //сдвиг мишени
//      y += rand() % 3 - 1;        //сдвиг мишени
        
    
        int distance = (x - center_x) * (x - center_x) + (y - center_y) * (y - center_y);
        if (distance <= 1) {
            points += 10;
        }
        else if (distance <= 4) {
            points += 5;
        }
        else if (distance <= 9) {
            points += 1;
        }
        shots++;
    }
    if (shots <= 10) {
        cout << "You are a sniper!" << endl;
    }
    else if (shots <= 20) {
        cout << "You are a marksman!" << endl;
    }
    else {
        cout << "You are a beginner!" << endl;
    }
    cout << "You fired " << shots << " shots and scored " << points << " points." << endl;
    return 0;
}

