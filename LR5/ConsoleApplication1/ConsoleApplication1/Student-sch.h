#pragma once

#include "Persona.h"

class student_sch:public persona
{
public:
		student_sch(void);
		student_sch(char *name, int age, int kurs);
		void Show(void);
		void Input(void);
protected:
	int kurs;
};