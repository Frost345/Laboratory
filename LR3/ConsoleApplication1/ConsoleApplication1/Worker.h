#pragma once

#include "Persona.h"

class worker:
	public persona 
{
	char *place_work;
public:
	worker(void);
	void setPlaceWork(char *place_work);
	void getPlaceWork();
	void f();
	~worker(void);
};