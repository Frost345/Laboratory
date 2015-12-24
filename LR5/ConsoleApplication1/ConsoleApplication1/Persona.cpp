#include "stdafx.h"
#include <cstring>
#include <string.h>
#include "persona.h"
#include <iostream> 

using namespace std; 

persona::persona()
{
	strcpy(name,"noname");
	age = 0;
	next = 0;
};

persona::persona(char *name,int age)
{
	strcpy(this->name , name);
	this->age = age;
	next = 0;
}

persona::~persona(void)
{ 
}