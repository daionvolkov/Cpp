#include "PeopleCollection.h"



PeopleCollection::~PeopleCollection() 
{
    for (Person* person : people) 
    {
        delete person;
    }
}

void PeopleCollection::addPerson(Person* person) 
{
    people.push_back(person);
}

void PeopleCollection::printAllDetails() 
{
    for (Person* person : people) 
    {
        person->printDetails();
    }
}

void PeopleCollection::saveToFile(const std::string& filename) 
{
    std::ofstream file(filename);
    if (file.is_open()) 
    {
        for (Person* person : people) 
        {
            file << person->getName() << "," << person->getAge() << std::endl;
        }
        file.close();
        std::cout << "Data saved to file: " << filename << std::endl;
    }
    else 
    {
        std::cout << "Error opening file: " << filename << std::endl;
    }
}