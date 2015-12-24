// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//���

#include "stdafx.h"
#include <iostream>
#include "array.h"
#include <list>
#include <iterator>

using namespace std;

const int size = 2;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian");
	//1. ������� ������-��������� � ������������  � ��������� ������� � ��������� ��� �������,
	//��� ������� ������������ ��������� �������. ����������� ���������.
	list<Array> myList; // ��������� ������ ������
	list<Array>::iterator ptr = myList.begin();
	Array Ar[3];
	Array Arrik;
	cout << "���������� 3-�� ��������" << endl;
	for (int i = 0; i < 3; i++)
	{
		Ar[i].Set();
	}
	for (int i = 0; i < 3; i++) 
	{
		myList.push_back(Ar[i]); // ��������� � ������ ����� ��������
	}
	cout << "�������� ������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl;
	//2. �������� ���������, ������ �� ���� ���� �������� � ������� ������. 
	cout << "�������� ������ ����� �������� ������� ��������: ";
	myList.erase(myList.begin());
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl << "���������� �������, ������� ����� �������� � ������: " << endl;;
	Arrik.Set();
	myList.emplace(myList.begin(),Arrik);
	cout << "�������� ������ ����� ���������� ��������: ";
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl;
	//3. ����������� ���������, ��������� ��� ������� � ��������� ���������.
	cout << "�������� ������: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;
	//4. ������� ������ ��������� ����� �� ������ � ��������� ��� ������� ���� �� ����, ��� � ������ ���������. 
	list<Array> myList2;
	list<Array>::iterator ptr2 = myList2.begin();
	for (int i = 0; i < 3; i++)
	{
		myList2.push_back(Ar[i]); // ��������� � ������ ����� ��������
	}
	//5. �������� ������ ���������, ������ �� ���� n ��������� ����� ��������� � ������� ����� � ���� 
	//��� �������� �� ������� ����������. ����������� ������  � ������ ����������. 
	ptr = myList.begin();
	advance(ptr, 1);
	myList.erase(ptr);
	cout << "�������� ������ 1 ����� ��������: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	myList.splice(myList.begin(),myList2);
	cout<<endl << "�������� ������ 1 ����� splice: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;
	cout << "�������� ������ 2: ";
	for (ptr2 = myList2.begin(); ptr2 != myList2.end(); ptr2++)
	{
		cout << *ptr2 << " ";
	}
	cout << endl;
	return 0;
}

