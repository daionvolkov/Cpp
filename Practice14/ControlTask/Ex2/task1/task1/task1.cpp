// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

template<typename Container>
void Print(const Container& container, const std::string& separator) {
    for (const auto& element : container) {
        std::cout << element << separator;
    }
    std::cout << '\n';
}


int main()
{
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", ");

    return 0;
}

