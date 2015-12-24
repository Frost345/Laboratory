#include "stdafx.h"
#include "array.h"
#include <iostream>

using namespace std;

Array::Array()
{
	size = 5;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}

Array::Array(int arrSize)
{
	if (arrSize > 0)
	{
		size = arrSize;
	}
	else
	{
		size = 5;
	}
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}

int Array::getSize()
{
	return size;
}

void Array::Set()
{
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}

void Array::Get()
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}

bool Array::operator!=(const Array &rgt)
{
	if (size != rgt.size)
	{
		cout << "different size" << endl;
		return true;
	}
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] != rgt.ptr[i])
		{
			cout << "different " << i+1 << " element" << endl;
			return true;
		}
	}
	cout << "same" << endl;
	return false;
}

int Array::operator[](int index)
{
	if (index < 0 || index >= size)
	{
		cout << "Error index" << endl;
		return -1;
	}
	return ptr[index];
}

bool Array::operator>(int key)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == key)
		{
			cout << "True" << endl;
			return true;
		}
	}
	cout << "false" << endl;
	return false;
}

Array Array::operator+(Array &ar)
{
	Array newAr(size + ar.size);
	int i = 0,y=0;
	for (i; i < size; i++)
	{
		newAr.ptr[i] = ptr[i];
	}
	for (i,y; i < size + ar.size,y<ar.size; i++,y++)
	{
		newAr.ptr[i] = ar.ptr[y];
	}
	return newAr;
}