// SchoolCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"


int main()
{
    std::vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    student* stud = new student("Petrov", "Ivan", "Alekseevich", scores);
    std::cout << stud->get_full_name() << std::endl;

    std::cout << "Average score : " << stud->get_average_score() << std::endl;

    return 0;
}

