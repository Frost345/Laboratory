#pragma once

#include"stdafx.h"

template <class t> 
class Array
{
//private:
public:
	t *ptr;
	int size;
public:
	Array();
	Array(int,t);
    Array(const Array &tmp);
	t operator[](int);
	int getSize();
	void Get();
	void Set(t);
	friend void sortik(t*);
};

template<class t>
Array<t>::Array()
{
		ptr = NULL;
		size = 0;
}

template<class t>
Array<t>::Array(int arrSize, t a)
{
	size = arrSize;
	ptr = new t[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		ptr[i] = a;
	}
}

template<class t>
Array<t>::Array(const Array&tmp)
{
	ptr = new t[tmp.size];
	size = tmp.size;
	for (int i = 0; i < size; i++)
	{
		ptr[i] = tmp.ptr[i];
	}
}

template <class t>
int Array<t>::getSize()
{
	return size;
}

template <class t>
t Array<t>::operator[](int i)
{
	return ptr[i];
}

template <class t>
void Array<t>::Get()
{
	for (int i = 0; i < size; i++)
	{
		std::cout<<" " << ptr[i];
	}
	cout << endl;
}

template <class t>
void Array<t>::Set(t tmp)
{
	if (ptr == NULL)
	{
		size = 1;
		ptr = new t[size];
		ptr[0] = tmp;
		return;
	}
	t*a = new t[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = ptr[i];
	}
	delete[]ptr;
	ptr = new t[++size];
	for (int i = 0; i < size - 1; i++)
	{
		ptr[i] = a[i];
	}
	delete[]a;
	ptr[size - 1] = tmp;
}

template<class t>
void sortik(t &tmp)
{
	for (int i = 0; i < tmp.size; i++)
	{
		int min = i;
		for (int j = i + 1; j < tmp.size; j++)
		{
			if (tmp.ptr[j] < tmp.ptr[min])
				min = j;
		}
		if (min != i)
			std::swap(tmp.ptr[i], tmp.ptr[min]);
	}
}