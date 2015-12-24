#include "stdafx.h"
#include "Stack.h"
#include <iostream>

MyStack::MyStack()
{
	top = NULL;
}

MyStack::MyStack(const MyStack& c)
{
	top = NULL;
	stack *temp = c.top;
	while (temp != NULL)
	{
		Push(temp->Node);
		temp = temp->next;
	}
}

MyStack::~MyStack()
{
	stack *temp = top;
	while (temp != NULL)
	{
		temp = top->next;
		delete top;
		top = temp;
	}
}

void MyStack::Push(int d)
{

	stack *tmp = new stack;
	tmp->Node = d;
	tmp->next = top;
	top = tmp;
}

int MyStack::Pop()
{
	if (IsEmpty())
	{
		std::cout << "Error" << std::endl;
		return -1;
	}
	int tmp = top->Node;
	stack *temp = top;
	top = top->next;
	delete temp;
	return tmp;
}

bool MyStack::IsEmpty()
{
	if (top)
		return false;
	else
		return true;
}

void MyStack::GetStack()
{
	while (top)
	{
		std::cout << Pop() << std::endl;
	}
	std::cout << std::endl;
}
