#pragma once

#include "Person.h";
#include <iostream>
#include <fstream>

class Colleague : public Person
{
    private:
        std::string company;

    public:
        Colleague(const std::string& name, int age, const std::string& company);
        void printDetails() override;

};

