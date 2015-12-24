#pragma once

#include "Persona.h"
#include<iostream>

class ingineer:
	public persona
{
	int work_year;
public:
	ingineer(void);
	void setWorkYear(int work_year);
	void getWorkYear();
	void f();
	void print()
	{
	std::cout << "inginer print" <<std:: endl;
	}
	~ingineer(void);
};