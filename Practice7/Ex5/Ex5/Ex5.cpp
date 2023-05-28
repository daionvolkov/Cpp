// Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
#include "Ex5.h"
using namespace std;
//typedef tuple<string, int, double> Tuple;
using Tuple = tuple<string, int, double>;


void printTupleOfThree(Tuple t)
{
	cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << endl;
}

void printTupleOfTwo(tuple<string, double> tup) {
	
	cout << "("
	<< get<0>(tup)<< ", "
	<< get<1>(tup) <<")" << endl;
	
}

Tuple funtup(string s, int a, double d)
{
	s.append("!");
	return make_tuple(s, a, d * 10);
}

tuple<string, int, double> convertTuple(Tuple t) {
	string strVal = get<0>(t);  
	int intVal = get<1>(t);     
	double doubleVal = get<2>(t);


	intVal *= 2;
	doubleVal *= 3;
	strVal = "$" + strVal;

	return make_tuple(strVal, intVal, doubleVal);
}

tuple<string, double> convertTuple2(Tuple t) {
	std::string strVal = get<0>(t);   
	int intVal = get<1>(t);           
	double doubleVal = get<2>(t);


	strVal += " Updated";
	doubleVal *= intVal;

	string newString = strVal;
	double newDouble = doubleVal;

	
	return make_tuple(newString, newDouble);
}


int main()
{
	

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	auto t1 = funtup(v1[1], v2[1], v3[1]);
	
	auto t3 = convertTuple(t1);
	auto t4 =  convertTuple2(t0);

	printTupleOfThree(t0);
	printTupleOfThree(t1);
	printTupleOfThree(t3);
	
	printTupleOfTwo(t4);

	return 0;
}
