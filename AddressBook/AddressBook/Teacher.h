#pragma once
#include "Person.h";


class Teacher : public Person
{
	private:
		std::string subject;
	
    public:
		Teacher(const std::string& name, int age, const std::string& subject);


            void printDetails() override;


};

