#include "stdafx.h"
#include "persona.h"
#include <iostream> 

using namespace std; 

persona::persona(void)
{
	cout << "����� ������������ �������" << endl; 
} 

void persona::setName(char *name)
{ 
	this->name = name;
}

void persona::getName()
{ 
	cout << "��� �������: " << this->name << endl;
}

void persona::f()
{
	cout << "Call virtual" << endl;
}

persona::~persona(void)
{ 
	cout << "����� ����������� �������" << endl;
}