#pragma once

#include "Persona.h"

class slushahi:
	public persona
{
	char *post;
public:
	slushahi(void);
	void setPost(char *post);
	void getPost();
	void f();
	~slushahi(void);
};