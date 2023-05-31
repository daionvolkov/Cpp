#include <iostream>
#include <string>
#include "student.h"
#include "student.cpp"
using namespace std;
int main()
{

    string name;
    string last_name;
    
    cout << "Name: ";
    getline(cin, name);
 
    cout << "Last name: ";
    getline(cin, last_name);
    Student* student03 = new Student(name, last_name);
  
    int scores[5];
    
    int sum = 0;
   
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
   
    double average_score = sum / 5.0;
    student03->set_scores(scores);
    student03->set_average_score(average_score);
    cout << "Average ball for " << student03->get_name() << " "
        << student03->get_last_name() << " is "
        << student03->get_average_score() << endl;
    delete student03;
    return 0;
}