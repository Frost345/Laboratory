#include "stdafx.h"
#include "array.h"
#include <iostream>

using namespace std;

Array::Array()
{
	size = 3;
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
		size =3;
	}
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}

Array::Array(const Array &Ar)
{
	size = Ar.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = Ar.ptr[i];
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

bool Array::operator==(Array Ar)
{
	int key = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == Ar.ptr[i]);
		else
			key = 1;
	}
	if (key = 0)
		return true;
	else
		return false;
}
//
//void Array::operator=(Array ar)
//{
//	for (int i = 0; i < size; i++)
//	{
//		ptr[i] = ar.ptr[i];
//	}
//}

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

ostream& operator <<(ostream& os, const Array& Ar)
{
	for (int i = 0; i < Ar.size; i++)
	{
		os << Ar.ptr[i] << "";
	}
	return os;
}

istream& operator>>(istream&is, Array& Ar)
{
	Ar.Set();
	return is;
}