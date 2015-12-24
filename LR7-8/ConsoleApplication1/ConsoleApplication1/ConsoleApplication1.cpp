// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "array.h"
#include "UserClass.h"
#include <string>

using namespace std;

const int sz = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "7 LABOR WORK" << endl;
	Array<int> Ar1;
	Array<int> Ar2;
	Ar1.Set(1);
	Ar1.Set(2);
	Ar1.Set(3);
	Ar2.Set(4);
	Ar2.Set(5);
	Ar2.Set(6);
	cout << endl << "Size Ar1= " << Ar1.getSize() << endl;
	cout << "Size Ar2= " << Ar2.getSize() << endl;
	cout << "Get Ar1: ";
	Ar1.Get();
	cout << "Get Ar2: ";
	Ar2.Get();

	Array<double> Ar3;
	Array<double> Ar4;
	Ar3.Set(1.1);
	Ar3.Set(2.2);
	Ar3.Set(3.3);
	Ar4.Set(4.4);
	Ar4.Set(5.5);
	Ar4.Set(6.6);
	cout << "Size Ar3= " << Ar3.getSize() << endl;
	cout << "Size Ar4= " << Ar4.getSize() << endl;
	cout << "Get Ar3: ";
	Ar3.Get();
	cout << "Get Ar4: ";
	Ar4.Get();

	Array<Person> Ar5;
	Ar5.Set(Person("Ivan", 4));
	Ar5.Set(Person("Petr", 5));
	cout << "Size Ar5= " << Ar5.getSize() << endl;
	cout << "Get Ar5: ";
	Ar5.Get();
	cout << endl;

	cout << "8 LABOR WORK" << endl;
	Array<int> oldArr;
	int k = 6;
	for (int i = 0; i < 5; i++)
	{
		oldArr.Set(k);
		k--;
	}
	oldArr.Get();
	sortik(oldArr);
	oldArr.Get();
	cout << endl;

	Array<double> oldArr1;
	double d = 6.6;
	for (int i = 0; i < 5; i++)
	{
		oldArr1.Set(d);
		d = d - 1.1;
	}
	oldArr1.Get();
	sortik(oldArr1);
	oldArr1.Get();
	cout << endl;

	Array<Person>oldArr2;
	oldArr2.Set(Person("Sidor", 10));
	oldArr2.Set(Person("Viktor", 8));
	oldArr2.Set(Person("Nikolay", 7));
	oldArr2.Get();
	sortik(oldArr2);
	oldArr2.Get();
	return 0;
}