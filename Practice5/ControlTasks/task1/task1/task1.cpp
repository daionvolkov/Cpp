// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int calcSum(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double calcMiddleValue(const int* arr, int size) {
    int sum = calcSum(arr, size);
    return static_cast<double>(sum);
}

int calcSumOfNegativeElements(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int calcSumOfPositiveElements(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int calcSumOfElementsWithOddIndices(const int* arr, int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int calcSumOfElementsWithEvenIndices(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int findMaximalElementIndex(const int* arr, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findMinimalElementIndex(const int* arr, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int calcProductOfElementsBetween(const int* arr, int size, int startIndex, int endIndex) {
    int product = 1;
    for (int i = startIndex; i < endIndex; i++) {
        product *= arr[i];
    }
    return product;
}


int main()
{
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    int sum = calcSum(mas, n);
    double middle = calcMiddleValue(mas, n);
    int sumNeg = calcSumOfNegativeElements(mas, n);
    int sumPos = calcSumOfPositiveElements(mas, n);
    int sumOdd = calcSumOfElementsWithOddIndices(mas, n);
    int sumEven = calcSumOfElementsWithEvenIndices(mas, n);
    int maxIndex = findMaximalElementIndex(mas, n);
    int minIndex = findMinimalElementIndex(mas, n);
    int prod = calcProductOfElementsBetween(mas, n, minIndex, maxIndex);

    cout << "Sum: " << sum << endl;
    cout << "Middle value: " << middle << endl;
    cout << "Sum of negative elements: " << sumNeg << endl;
    cout << "Sum of positive elements: " << sumPos << endl;
    cout << "Sum of elements with odd indices: " << sumOdd << endl;
    cout << "Sum of elements with even indices: " << sumEven << endl;
    cout << "Maximal element index: " << maxIndex << endl;
    cout << "Minimal element index: " << minIndex << endl;
    cout << "Product of array elements located between the maximal and minimal elements: " << prod << endl;

    return 0;
}
