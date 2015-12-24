// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
//Одномерный массив.перегрузить следующие операции: 
//  [] - доступ по индексу;
//  >  - проверка на вхождение; 
//  != - проверка на неравенство;
//  +  - объединение массивов

#include "stdafx.h"
#include <iostream>
#include "array.h"

using namespace std;

const int sz = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	Array Ar1;
	Array Ar2(sz);
	cout << "Size Ar1= " << Ar1.getSize() << endl;
	cout << "Size Ar2= " << Ar2.getSize() << endl;
	cout << "Set Ar1(5): " << endl;
	Ar1.Set();
	cout << "Set Ar2(" << sz << "): " << endl;
	Ar2.Set();
	cout << "Get Ar1: ";
	Ar1.Get();
	cout << endl;
	cout << "Get Ar2: ";
	Ar2.Get();
	cout << endl;
	cout << "Element Ar2, index 5: " << Ar2[5-1] << endl;
	cout << "5 in Array?: ";
	Ar2 > 5;
	cout << "Array same or different?: ";
	Ar1 != Ar2;
	cout << "Union Array 1 and 2: " << endl;
	(Ar1 + Ar2).Get();
	Array *ar4 = new Array(5);
	if (ar4 > 0)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	bool x=(ar4 > 0);
	return 0;
}

