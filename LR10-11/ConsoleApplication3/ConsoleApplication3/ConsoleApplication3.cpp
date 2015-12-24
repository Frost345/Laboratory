// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

bool great7(int key)
{
	return key >7;
}

bool mod_lesser(int elem1, int elem2)
{
	if (elem1 < 0)
		elem1 = -elem1;
	if (elem2 < 0)
		elem2 = -elem2;
	return elem1 < elem2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//1. Создать контейнер, содержащий объекты пользовательского типа.
	//Тип контейнера выбирается в соответствии с вариантом задания. 
	//Отсортировать его по убыванию элементов. 
	//Если алгоритмы не поддерживают используемые контейнеры, написать свой алгоритм.
	//Просмотреть контейнер. 
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	cout << "Vector: ";
	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}
	sort(v1.begin(), v1.end(),greater<int>());
	cout<<endl << "Vector: ";
	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//2. Используя подходящий алгоритм, найти в контейнере элемент, удовлетворяющий заданному условию.
	if (binary_search(v1.begin(), v1.end(), 5, greater<int>()))
	{
		cout << "Yes!" << endl;
	}
	else
		cout << "No!" << endl;
	//3. Переместить элементы, удовлетворяющие заданному условию в другой (предварительно пустой) контейнер. 
	//Тип второго контейнера определяется вариантом задания (при перемещении элементов ассоциативного контейнера
	//в неассоциативный перемещаются только данные, ключи не перемещаются и наоборот, при перемещении элементов 
	//неассоциативного контейнера в ассоциативный должен быть сформирован ключ). Просмотреть второй контейнер. 
	list<int> myList1;
	int y = 0,v2[5];
	for (int i = 0; i < 10; i++)
	{
		if (v1[i]>5)
		{
			v2[y] = v1[i];
			y++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		myList1.push_back(v2[i]);
	}
	cout << "List: ";
	copy(myList1.begin(), myList1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//4. Отсортировать первый и второй контейнеры по возрастанию элементов.Просмотреть их.
	sort(v1.begin(), v1.end());
	cout << endl << "Vector: ";
	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}
	myList1.sort();
	cout<<endl << "List: ";
	copy(myList1.begin(), myList1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//5. Получить третий контейнер путем слияния первых двух. Просмотреть третий контейнер. 
	vector<int>v3(15);
	merge(v1.begin(), v1.end(), myList1.begin(), myList1.end(),v3.begin());
	cout << endl << "Vector: ";
	for (int i = 0; i < 15; i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	//6. Подсчитать, сколько элементов, удовлетворяющих заданному условию, содержит третий контейнер.
	//Определить, есть ли в третьем контейнере элемент, удовлетворяющий заданному условию. 
	cout << "Great 7: ";
	cout<<count_if(v3.begin(), v3.end(), great7);
	cout<<endl;
	if (binary_search(v3.begin(), v3.end(), 8, mod_lesser))
	{
		cout << "Yes!" << endl;
	}
	else
		cout << "No!" << endl;
	return 0;
}

