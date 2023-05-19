// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


bool checkSSN(string snils) {
   
    snils.erase(remove(snils.begin(), snils.end(), ' '), snils.end());
    snils.erase(remove(snils.begin(), snils.end(), '-'), snils.end());

    
    if (!isdigit(snils[0])) {
        return false;
    }


    if (snils.length() != 11) {
        return false;
    }

    for (int i = 0; i < 9; i++) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            return false;
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
        return (snils[9] - '0' == 0 && snils[10] - '0' == control_number);
    }
    else {
        return (snils[9] - '0' == control_number / 10 && snils[10] - '0' == control_number % 10);
    }
}



int main()
{
    string snils;
    cout << "Enter SNILS number: ";
    getline(cin, snils);


    cout << checkSSN(snils) << endl;

   /* if (checkSSN(snils)) {
        cout << "Valid Snils" << endl;
    }
    else {
        cout << "Invalid Snlis" << endl;
    }*/

    return 0;
}

