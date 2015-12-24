#include "stdafx.h"
#include "Ingineer.h"
#include <iostream> 

using namespace std;

ingineer::ingineer(void)
{
	cout << "Вызов конструктора инжинера" << endl;
}

void ingineer::setWorkYear(int work_year)
{
	this->work_year = work_year;
}

void ingineer::getWorkYear()
{
	cout << "Стаж работы инжинера: " << this->work_year<< endl;
}

void ingineer::f()
{
	cout << "call ingineer" << endl;
}

ingineer::~ingineer(void)
{
	cout << "Вызов деструктора инжинера" << endl;
}