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
	cout << "��������" << endl;
	cout << "���: " << name << endl;
	cout << "�������: " << age << endl;
	cout << "��������: " << zar << endl;
}

void slushahi::Input(void)
{
	cout << "��������" << endl;
	cout << "���: ";
	cin >> name;
	cout << "�������: ";
	cin >> age;
	cout << "��������: ";
	cin >> zar;
}
