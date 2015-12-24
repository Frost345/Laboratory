#include "stdafx.h"

class MyStack
{
	struct stack
	{
		int Node;
		stack *next;
	};
	stack *top = NULL;
public:
	MyStack();
	MyStack(const MyStack& c);
	~MyStack();
	void Push(int d);
	int Pop();
	bool IsEmpty();
	void GetStack();
};