#pragma once

#include "Persona.h"

class tokar:
	public persona
{
	int zarplata;
public:
	tokar(void);
	void setZarplata(int zarplata);
	void getZarplata();
	void f();
	~tokar(void);
};