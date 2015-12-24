#pragma once

#include<iostream>
#include <cstring>
#include <string.h>

class persona
{
public:
	persona();
	persona(char *name,int age);
	//void setName(char *name);
	//void getName();
	virtual void Show(void)=0;
	virtual void Input(void) = 0;
	virtual ~persona(void);
protected:
	char name[20];
	int age;
	persona *next;
	friend class List;
};