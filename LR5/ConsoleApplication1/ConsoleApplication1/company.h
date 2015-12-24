#pragma once

#include "Ingineer.h"
#include "Slushahi.h"
#include "Student-sch.h"

class Company
{
public:
	static Company *head;
	void *adress;
	int kind;
	Company *next;
	Company ()
	{
	};
};