#include "Teacher.h"
#include <iostream>
#include <fstream>


Teacher::Teacher(const std::string& name, int age, const std::string& subject)
    : Person(name, age), subject(subject) {}

void Teacher::printDetails()  
{
    std::cout << "Teacher: " 
        << name << ", Age: " 
        << age << ", Subject: " 
        << subject << std::endl;
}