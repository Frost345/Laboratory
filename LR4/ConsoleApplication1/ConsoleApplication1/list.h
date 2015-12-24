#pragma once

#include"Persona.h"

class List
{
public:
	List();
	~List();
	void Input(persona *);
	void Show(void);
protected:
	persona *begin;
};
