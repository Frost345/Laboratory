// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Exception.h"
#include "array.h"
#include <fstream>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian");
	try
	{
		Array<int> Arr(3, 5);
		Array<double> Arr1(2, 8);
		cout << "Divided 5/6 = " << divided(5, 6) << endl;
		int key= Arr[2];
		cout << key << endl;
		ExceptionFile file;
		file.WriteFile("Test TEXT");
		file.ReadFile("456.txt");
	}
	catch (const ExceptionArr exception)
	{
		cout << "Exception Array: " << endl;
		cout << "ID exception: " << exception.id << endl;
		cout << "Message exception: " << exception.buf << endl;
	}
	catch (const ExceptionFile exception)
	{
		cout << "Exception File " << endl;
		cout << "ID exception: " << exception.id << endl;
		cout << "Message exception: " << exception.buf << endl;
	}
	catch (const Exception exception)
	{
		cout << "Exception  : " << endl;
		cout << "ID exception: " << exception.id << endl;
		cout << "Message exception: " << exception.buf << endl;
	}
	return 0;
}