#pragma once

#include "stdafx.h"
#include "array.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Exception
{
public:
	int id;
	string buf;
	Exception()
	{};
	Exception(int tmpid, string tmpbuf)
	{
		try
		{
			id = tmpid;
			buf = tmpbuf;
		}
		catch (...)
		{
			id = 0;
			buf = " ";
		}
	}
};

class ExceptionArr: Exception
{
public:
	int id;
	string buf;
	ExceptionArr()
	{};
	ExceptionArr(int tmpid, string tmpbuf) : id(tmpid), buf(tmpbuf)
	{};
	friend int divided(int x, int y);
};

int divided(int x, int y)
{
	if (x == 0 || y == 0)
		throw ExceptionArr(1, "X or Y is 0");
	return x / y;
}

class ExceptionFile : public Exception
{
	public:
	int id;
	string buf;
	ExceptionFile()
	{};
	ExceptionFile(int tmpid, string tmpbuf) :id(tmpid), buf(tmpbuf)
	{};
	void WriteFile(string tmp)
	{
		ofstream File("123.txt");
		if (!File)
		{
			throw ExceptionFile(2, "Error open file to write");
		}
		File << tmp << endl;
	}
	void ReadFile(string tmp)
	{
		ifstream File("456.txt");
		if (!File)
		{
			throw ExceptionFile(3, "Error open file to read");
		}
		File >> tmp;
		cout << tmp<<endl;
	}
};