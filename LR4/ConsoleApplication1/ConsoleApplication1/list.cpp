#include "stdafx.h"
#include"list.h"

List::List()
{
	begin = 0;
}

List::~List()
{
	persona *tmp;
	while (begin)
	{
		tmp = begin;
		begin = begin->next;
		delete tmp;
	}
}

void List::Show(void)
{
	persona *tmp;
	tmp = begin;
	while (tmp)
	{
		tmp->Show();
		tmp = tmp->next;
	}
}

void List::Input(persona *old)
{
	persona *tmp;
	tmp = begin;
	begin = old;
	old->next = tmp;
}