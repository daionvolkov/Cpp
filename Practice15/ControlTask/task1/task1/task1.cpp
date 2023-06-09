// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>


struct StudentGrade {
    std::string name;
    char grade;
};


int main()
{
    std::map<std::string, char> gradeMap;

    gradeMap["Alex"] = 'A';
    gradeMap["John"] = 'J';
    gradeMap["Max"] = 'M';
    gradeMap["David"] = 'D';

    
    std::string studentName;
    std::cout << "Enter student name: ";
    std::cin >> studentName;

    if (gradeMap.count(studentName) > 0) 
    {
        std::cout << "Grade for " 
            << studentName << ": " 
            << gradeMap[studentName] 
            << std::endl;
    }
    else {
        std::cout << "No grade found for " 
            << studentName << std::endl;
    }

    return 0;
}

