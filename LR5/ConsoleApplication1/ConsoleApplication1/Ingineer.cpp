#include "stdafx.h"
#include "Ingineer.h"
#include <iostream> 

using namespace std;

ingineer::ingineer()
{
	work_year = 0;
}

ingineer::ingineer(char *name, int age, int work_year) :persona(name,age)
{
	this->work_year = work_year;
}

void ingineer::Show(void)
{
	cout << "Name: " << name << endl;
	cout << "Age: " <<age<< endl;
	cout << "Work year: " << work_year << endl;
}

void ingineer::Input(void)
{
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Work Year: ";
	cin >> work_year;
}

int ingineer::GetWork_year()
{
	return work_year;
}