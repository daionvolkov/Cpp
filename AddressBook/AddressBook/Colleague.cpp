#include "Colleague.h"

using namespace std;


Colleague::Colleague(const std::string& name, int age, const std::string& company)
    : Person(name, age), company(company) {}

void Colleague::printDetails()  {
    std::cout << "Colleague: " 
        << name << ", Age: " 
        << age << ", Company: " 
        << company << std::endl;
}