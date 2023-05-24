// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring> 
#include <cstdlib> 
using std::string;



int main(int argc, char* argv[])
{
    if (argc < 4) {
        std::cout << "Invalid number of arguments. Usage: nameProg -a/-m operand1 operand2" << std::endl;
        return 1;
    }

    if (strncmp(argv[1], "-a", 3) != 0 && strncmp(argv[1], "-m", 3) != 0) {
        std::cout << "Invalid flag parameter. Usage: nameProg -a/-m operand1 operand2" << std::endl;
        return 1;
    }

    int operand1 = atoi(argv[2]);
    int operand2 = atoi(argv[3]);
    int result;

    if (strncmp(argv[1], "-a", 3) == 0) {
        result = operand1 + operand2;
    }
    else if (strncmp(argv[1], "-m", 3) == 0) {
        result = operand1 * operand2;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

