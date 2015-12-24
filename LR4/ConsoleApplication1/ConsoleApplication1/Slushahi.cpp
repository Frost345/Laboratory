#include "stdafx.h"
#include "Slushahi.h"
#include <iostream> 

using namespace std;

slushahi::slushahi()
{
	zar = 0;
}

slushahi::slushahi(char *name,int age, int zar):persona(name,age)
{
	this->zar = zar;
}

void slushahi::Show(void)
{
	cout << "Служащий" << endl;
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Зарплата: " << zar << endl;
}

void slushahi::Input(void)
{
	cout << "Служащий" << endl;
	cout << "Имя: ";
	cin >> name;
	cout << "Возраст: ";
	cin >> age;
	cout << "Зарплата: ";
	cin >> zar;
}
