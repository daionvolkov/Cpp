#pragma once
#include "Person.h"

class Student : public Person
{
	private:
		std::string school;


    public:
		Student(const std::string& name, int age, const std::string& school);

		void printDetails() override;
};

