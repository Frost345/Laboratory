#pragma once

#include "Persona.h"

class slushahi:public persona
{
public:
	slushahi();
	slushahi(char *name,int age, int zar);
	void Show(void);
	void Input(void);
	int GetZar();
//protected:
	int zar;
};