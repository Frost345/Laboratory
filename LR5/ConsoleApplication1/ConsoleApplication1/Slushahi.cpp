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
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zar: " << zar << endl;
}

void slushahi::Input(void)
{
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Zar: ";
	cin >> zar;
}

int slushahi::GetZar()
{
	return zar;
}