#pragma once

#include "Persona.h"

class student_sch:
	public persona
{
	int kurs;
public:
		student_sch(void);
		void setKurs(int kurs);
		void getKurs();
		void f();
		~student_sch(void);
};