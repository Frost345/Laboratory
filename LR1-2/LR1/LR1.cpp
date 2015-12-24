// LR1.cpp: ���������� ����� ����� ��� ����������� ����������.
// �������:
//a)   �����  � ���������/���������� ������� ���������;  
//b)  ������ ������, ���������� ������������� ��������

#include "stdafx.h"
#include "Stack.h"
#include <iostream>

const int size = 3;

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int  elem,min=9999,max=-9999,k,l=0,temp[size];
	setlocale(LC_CTYPE, "Russian");
	MyStack a[size];
	MyStack b(4);
	cout << "������� " << size << " �����(-��)" << endl;
	cout << "������� ������ � ����(2 ����� � �����)" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> elem;
		a[i].Push(elem);
		cin >> elem;
		a[i].Push(elem);
	}
	cout << "���� ��������" << endl;
	cout << "Stack with min top:" << endl;
	for (int i = 0; i < size; i++)
	{
		int tmp = a[i].Pop();
		if (tmp < min)
		{
			min = tmp;
			k = i;
		}
		a[i].Push(tmp);
	}
	for (int i = 0; i < size-1; i++)
	{
		temp[i] = a[k].Pop();
	}
	for (int i = 0; i < size - 1; i++)
	{
		a[k].Push(temp[i]);
	}
	cout << endl;
	a[k].GetStack();
	for (int i = 0; i < size-1; i++)
	{
		a[k].Push(temp[i]);
	}
	cout << endl;
	cout << "Stack with max top:" << endl;
	for (int i = 0; i < size; i++)
	{
		int tmp = a[i].Pop();
		if (tmp > max)
		{
			max = tmp;
			k = i;
		}
		a[i].Push(tmp);
	}
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = a[k].Pop();
	}
	for (int i = 0; i < size - 1; i++)
	{
		a[k].Push(temp[i]);
	}
	cout << endl;
	a[k].GetStack();
	for (int i = 0; i < size-1; i++)
	{
		a[k].Push(temp[i]);
	}
	cout << endl;
	cout << "Stack with - element:" << endl;
	for (int i = 0; i < size; i++)
	{
		int tmp = a[i].Pop();
		if (tmp < 0)
		{
			a[i].Push(tmp);
			a[i].GetStack();
		}
		else
		{
			a[i].Push(tmp);
		}
	}
	cout << "Test copy" << endl;
	MyStack d = a[1];
	d.GetStack();
	return 0;
}