// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


template<typename T>
T calculateArithmeticMean(T arr[], size_t size) {
    T sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / static_cast<T>(size);
}

int main()
{
    int intArray[] = { 1, 2, 3, 4, 5 };
    long longArray[] = { 10L, 20L, 30L, 40L, 50L };
    double doubleArray[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    char charArray[] = { 'a', 'b', 'c', 'd', 'e' };

    int intMean = calculateArithmeticMean(intArray, sizeof(intArray) / sizeof(int));
    long longMean = calculateArithmeticMean(longArray, sizeof(longArray) / sizeof(long));
    double doubleMean = calculateArithmeticMean(doubleArray, sizeof(doubleArray) / sizeof(double));
    char charMean = calculateArithmeticMean(charArray, sizeof(charArray) / sizeof(char));

    std::cout << "Arithmetic Mean of int Array: " << intMean << std::endl;
    std::cout << "Arithmetic Mean of long Array: " << longMean << std::endl;
    std::cout << "Arithmetic Mean of double Array: " << doubleMean << std::endl;
    std::cout << "Arithmetic Mean of char Array: " << static_cast<int>(charMean) << std::endl;
}

