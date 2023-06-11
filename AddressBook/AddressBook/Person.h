#pragma once
#include <fstream>
#include <vector>
#include <string>



class Person
{
    protected:
        std::string name;
        int age;

public:
    Person(const std::string& name, int age);

    virtual void printDetails() = 0; 

    
    void setName(const std::string& name);
    void setAge(int age);
    std::string getName() const;
    int getAge() const;



};

