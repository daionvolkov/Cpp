#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Person.h"



class PeopleCollection
{
    private:
        std::vector<Person*> people;

    public:
        ~PeopleCollection();

        void addPerson(Person* person);

        void printAllDetails();

        void saveToFile(const std::string& filename);
};

