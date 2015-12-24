#pragma once

#include "company.h"

class Controller :public Company
{
public:
	Controller() :Company()
	{

	};
	static void Show();
	static void Add(slushahi *);
	static void Add(ingineer *);
	static void Add(student_sch *);
	static void SearchSlush(int);
	static void Deleted(void *);
	static void KolStud();
	static void KolIng(int);
};