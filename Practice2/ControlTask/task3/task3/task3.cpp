// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::string;
using std::fixed;
using std::setprecision;
using std::endl;

int main()
{
    double amount;
    cout << "Enter the amount: ";
    cin >> amount;

    double coins[7] = { 10, 5, 2, 1, 0.5, 0.1, 0.05 };
    string names[7] = { "10 rubles", "5 rubles", "2 rubles", "1 ruble", "50 kopeeks", "10 kopeeks", "5 kopeeks" };
    int coinCounts[7] = { 0 }; 

    for (int i = 0; i < 7; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            coinCounts[i]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 7; i++) {
        count += coinCounts[i];
    }

    cout << "Minimum number of coins required: " << count << endl;

    for (int i = 0; i < 7; i++) {
        if (coinCounts[i] > 0) {
            cout << fixed << setprecision(2) << names[i] << " x " << coinCounts[i] << endl;
        }
    }
    return 0;

}


