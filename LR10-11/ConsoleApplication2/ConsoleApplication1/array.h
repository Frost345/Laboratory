#pragma once

#include <iostream>


using namespace std;

class Array
{
public:
	int *ptr;
	int size;
public:
	Array();
	Array(int);
	Array(const Array &ar);
	int getSize();
	void Get();
	void Set();
	int operator [](int);
	bool operator > (int);
	bool operator !=(const Array &);
	Array operator +(Array &);
	bool operator ==(Array);
	//void operator =(Array);
	friend ostream& operator << (ostream &os,const Array& Ar);
	friend istream& operator>>(istream&is, Array& Ar);
};