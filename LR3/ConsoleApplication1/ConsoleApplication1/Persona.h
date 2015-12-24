#pragma once

#include<iostream>

class persona
{
	char *name;
public:
	persona(void);
	void setName(char *name);
	void getName();
	virtual void f();
	void print()
	{
		std::cout << "print" << std::endl;
	}
	~persona(void);
};