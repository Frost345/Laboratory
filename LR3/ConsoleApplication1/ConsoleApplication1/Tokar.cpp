#include "stdafx.h"
#include "Tokar.h"
#include <iostream> 

using namespace std;

tokar::tokar(void)
{
	cout << "����� ������������ ������" << endl;
}

void tokar::setZarplata(int Zarplata)
{
	this->zarplata = Zarplata;
}

void tokar::getZarplata()
{
	cout << "�������� ������: " << this->zarplata << endl;
}

void tokar::f()
{
	cout << "call tokar" << endl;
}

tokar::~tokar(void)
{
	cout << "����� ����������� ������" << endl;
}