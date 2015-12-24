#pragma once

#include "Persona.h"
#include<iostream>

class ingineer:public persona
{
public:
	ingineer();
	ingineer(char *name,int age, int work_year);
	void Show(void);
	void Input(void);
protected:
	int work_year;
};