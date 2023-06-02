#include <string>
#include <fstream>
#include "student.h"


Students::Students(string name, string last_name, IdCard* id)
{
	Students::set_name(name);
	Students::set_last_name(last_name);
	Students::setIdCard(id);
}


Students::~Students()
{
	Students::save();
}

void Students::save()
{
	ofstream fout("students.txt", ios::app);
	fout << Students::get_name() << " "
		<< Students::get_last_name() << " ";
	for (int i = 0; i < 5; ++i) {
		fout << Students::scores[i] << " ";
	}
	fout << endl;
	fout.close();
}

void Students::set_name(std::string student_name) 
{
	Students::name = student_name;
}


std::string Students::get_name() 
{
	return Students::name;
}


void Students::set_last_name(std::string student_last_name) 
{
	Students::last_name = student_last_name;
}


std::string Students::get_last_name() 
{
	return Students::last_name;
}


void Students::set_scores(int scores[]) 
{
	for (int i = 0; i < 5; ++i) {
		Students::scores[i] = scores[i];
	}
}


void Students::set_average_score(double ball) 
{
	Students::average_score = ball;
}


double Students::get_average_score() 
{
	return Students::average_score;
}

void Students::setIdCard(IdCard* c) 
{
	Students::iCard = c;
}

IdCard Students::getIdCard() 
{
	return *Students::iCard;
}