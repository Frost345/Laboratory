// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//туц

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
	//1. Создать объект-контейнер в соответствии  с вариантом задания и заполнить его данными,
	//тип которых определяется вариантом задания. Просмотреть контейнер.
	list<Array> myList; // объявляем пустой список
	list<Array>::iterator ptr = myList.begin();
	Array Ar[3];
	Array Arrik;
	cout << "Заполнение 3-ех массивов" << endl;
	for (int i = 0; i < 3; i++)
	{
		Ar[i].Set();
	}
	for (int i = 0; i < 3; i++) 
	{
		myList.push_back(Ar[i]); // добавляем в список новые элементы
	}
	cout << "Просмотр списка: ";
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl;
	//2. Изменить контейнер, удалив из него одни элементы и заменив другие. 
	cout << "Просмотр списка после удаления первого элемента: ";
	myList.erase(myList.begin());
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl << "Заполнение массива, который будет вставлен в список: " << endl;;
	Arrik.Set();
	myList.emplace(myList.begin(),Arrik);
	cout << "Просмотр списка после добавления элемента: ";
	copy(myList.begin(), myList.end(), ostream_iterator<Array>(cout, " "));
	cout << endl;
	//3. Просмотреть контейнер, используя для доступа к элементам итераторы.
	cout << "Просмотр списка: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;
	//4. Создать второй контейнер этого же класса и заполнить его данными того же типа, что и первый контейнер. 
	list<Array> myList2;
	list<Array>::iterator ptr2 = myList2.begin();
	for (int i = 0; i < 3; i++)
	{
		myList2.push_back(Ar[i]); // добавляем в список новые элементы
	}
	//5. Изменить первый контейнер, удалив из него n элементов после заданного и добавив затем в него 
	//все элементы из второго контейнера. Просмотреть первый  и второй контейнеры. 
	ptr = myList.begin();
	advance(ptr, 1);
	myList.erase(ptr);
	cout << "Просмотр списка 1 после удаления: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	myList.splice(myList.begin(),myList2);
	cout<<endl << "Просмотр списка 1 после splice: ";
	for (ptr = myList.begin(); ptr != myList.end(); ptr++)
	{
		cout << *ptr << " ";
	}
	cout << endl;
	cout << "Просмотр списка 2: ";
	for (ptr2 = myList2.begin(); ptr2 != myList2.end(); ptr2++)
	{
		cout << *ptr2 << " ";
	}
	cout << endl;
	return 0;
}

