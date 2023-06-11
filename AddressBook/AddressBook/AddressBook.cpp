// AddressBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PeopleCollectionSingleton.h"
#include "Student.h"
#include "Teacher.h"
#include "Colleague.h"
using std::cin;
using std::cout;
using std::endl;




int main()
{
    PeopleCollection* collection;
    collection = PeopleCollectionSingleton::getInstance().getCollectionInstance();

    int choice;

    do
    {
        cout << "1. Add Student" << endl;
        cout << "2. Add Teacher" << endl;
        cout << "3. Add Colleague" << endl;
        cout << "4. Print All Details" << endl;
        cout << "5. Save to File" << endl;
        cout << "6. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            std::string name, school;
            int age;
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter school: ";
            std::cin >> school;
            collection->addPerson(new Student(name, age, school));
        }

        else if (choice == 2)
        {
            std::string name, subject;
            int age;
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter subject: ";
            std::cin >> subject;
            collection->addPerson(new Teacher(name, age, subject));
        }

        else if (choice == 3)
        {
            std::string name, company;
            int age;
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter company: ";
            std::cin >> company;
            collection->addPerson(new Colleague(name, age, company));
        }
        else if (choice == 4)
        {
            collection->printAllDetails();
        }

        else if (choice == 5)
        {
            std::string filename;
            std::cout << "Enter filename: ";
            std::cin >> filename;
            collection->saveToFile(filename);
        }

    } while (choice != 6);

    return 0;
}

