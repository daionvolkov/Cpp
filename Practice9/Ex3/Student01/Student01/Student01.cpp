// Student01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student01_main.cpp"

int main()
{
    Student student01;
    string name;
    string last_name;
    int scores[5];

    cout << "Name: ";
    getline(cin, name);

    cout << "Last name: ";
    getline(cin, last_name);

    int sum = 0;

    for (int i = 0; i < 5; ++i) 
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    student01.set_name(name);
    student01.set_last_name(last_name);
    try 
    {
        student01.set_scores(scores);
    }
    catch (Student::ExScore& ex)
    {
        cout << "\nОшибка инициализации " << ex.origin;
        cout << "\nВведенное значение оценки " << ex.iValue << "является недопустимым\n";
    }
    double average_score = sum / 5.0;
    student01.set_average_score(average_score);

    cout << "Average ball for " << student01.get_name() << " "
        << student01.get_last_name() << " is "
        << student01.get_average_score() << endl;
    return 0;
}

