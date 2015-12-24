#pragma once

class Array
{
private:
	int *ptr;
	int size;
public:
	Array();
	Array(int);
	int getSize();
	void Get();
	void Set();
	int operator [](int);
	bool operator > (int);
	bool operator !=(const Array &);
	Array operator +(Array &);
};