// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

template<typename Container>
void Print(const Container& container, const std::string& separator) {
    auto it = container.begin();
    if (it != container.end()) {
        std::cout << *it;
        ++it;
    }

    while (it != container.end()) {
        std::cout << separator << *it;
        ++it;
    }
    std::cout << '\n';
}


int main()
{
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", ");

    return 0;
}

