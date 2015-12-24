#include "stdafx.h"
#include "Stack.h"
#include <iostream>

using namespace std;

MyStack::MyStack()
{
	top = NULL;
}

MyStack::MyStack(int key)
{
	stack *tmp = new stack;
	tmp->Node = key;
	tmp->next = top;
	top = tmp;
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
	std::cout << "Call Konstruktor copy" << std::endl;
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
	std::cout << "Call Destruktor" << std::endl;
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
		std::cout << "Error" <<std::endl;
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

ostream& operator <<(ostream& os,const MyStack& st)
	{
		os<<st.GetStack;
		 return os;
	}