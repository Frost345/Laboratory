#include "stdafx.h"
#include "Tokar.h"
#include <iostream> 

using namespace std;

tokar::tokar(void)
{
	cout << "Вызов конструктора токаря" << endl;
}

void tokar::setZarplata(int Zarplata)
{
	this->zarplata = Zarplata;
}

void tokar::getZarplata()
{
	cout << "Зарплата токаря: " << this->zarplata << endl;
}

void tokar::f()
{
	cout << "call tokar" << endl;
}

tokar::~tokar(void)
{
	cout << "Вызов деструктора токаря" << endl;
}