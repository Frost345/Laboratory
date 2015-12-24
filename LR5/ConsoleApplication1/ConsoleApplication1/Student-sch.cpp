#include "stdafx.h"
#include "Student-sch.h"
#include <iostream> 

using namespace std;

student_sch::student_sch(void)
{
	kurs = 0;
}

student_sch::student_sch(char *name, int age, int kurs) :persona(name, age)
{
	this->kurs = kurs;
}

void student_sch::Show(void)
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Kurs: " << kurs << endl;
}

void student_sch::Input(void)
{
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Kurs: ";
	cin >> kurs;
}