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
	cout << "�������" << endl;
	cout << "���: " << name << endl;
	cout << "�������: " <<age<< endl;
	cout << "����: " << work_year << endl;
}

void ingineer::Input(void)
{
	cout << "�������" << endl;
	cout << "���: ";
	cin >> name;
	cout << "�������: ";
	cin >> age;
	cout << "����: ";
	cin >> work_year;
}