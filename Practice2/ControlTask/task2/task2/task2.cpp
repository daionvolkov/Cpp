// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;


int main()
{
    char snils[12]; 
    cout << "Enter SNILS number: ";
    cin >> snils;

    if (strlen(snils) != 11) {
        cout << false << endl;
        return 0;
    }
    for (int i = 0; i < 9; i++) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            cout << false << endl;
            return 0;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += (snils[i] - '0') * (9 - i);
    }
    int control_number;
    if (sum < 100) {
        control_number = sum;
    }
    else if (sum == 100 || sum == 101) {
        control_number = 0;
    }
    else {
        int remainder = sum % 101;
        if (remainder < 100) {
            control_number = remainder;
        }
        else {
            control_number = 0;
        }
    }

    if (control_number < 10) {
        cout << true << endl;
        cout << "Control number is 0" << control_number << endl;
    }
    else {
        cout << true << endl;
        cout << "Control number is " << control_number << endl;
    }

    return 0;
}

