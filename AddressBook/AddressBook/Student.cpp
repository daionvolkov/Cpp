#include "Student.h"
#include <iostream>
#include <fstream>

using namespace std;


Student::Student(const std::string& name, int age, const std::string& school)
    : Person(name, age), school(school) {}

void Student::printDetails() 
{
    std::cout << "Student: " 
        << name << ", Age: " 
        << age << ", School: " 
        << school << std::endl;
}