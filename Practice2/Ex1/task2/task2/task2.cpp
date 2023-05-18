// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char op;
    std::cout << "Make your choice, build your dream car:  ";
    std::cin >> op;

    switch (op)
    {
    case 'S':
        std::cout << "The radio should play \n";
        //std::cout << "Wheels round\n";
        //std::cout << "Powerful engine\n";
        //break;
    case 'V':
        std::cout << "I want air conditioning\n";
        //std::cout << "The radio should play\n";
        //std::cout << "Wheels round\n";
        //std::cout << "Powerful engine\n";
        //break;
    default:
        std::cout << "Wheels round\n";
        std::cout << "Powerful engine\n";
    }

    return 0;
}

