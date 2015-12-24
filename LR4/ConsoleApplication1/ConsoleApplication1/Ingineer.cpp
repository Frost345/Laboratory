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
	cout << "Инжинер" << endl;
	cout << "Имя: " << name << endl;
	cout << "Возраст: " <<age<< endl;
	cout << "Стаж: " << work_year << endl;
}

void ingineer::Input(void)
{
	cout << "Инжинер" << endl;
	cout << "Имя: ";
	cin >> name;
	cout << "Возраст: ";
	cin >> age;
	cout << "Стаж: ";
	cin >> work_year;
}