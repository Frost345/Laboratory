#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class MyStack
{
	struct stack
	{
		int Node;
		stack *next;
	};
	stack *top= NULL;
public:
	MyStack();
	MyStack(int key);
	MyStack(const MyStack& c);
	~MyStack();
	void Push(int d);
	int Pop();
	bool IsEmpty();
	void GetStack();
	friend ostream& operator<<(ostream& os, MyStack& st);
};