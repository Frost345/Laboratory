// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

const int size = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> v1;
	vector<int>::iterator ptr = v1.begin();

	//1. —оздать объект-контейнер в соответствии  с вариантом задани€ и заполнить его данными,
	//тип которых определ€етс€ вариантом задани€. ѕросмотреть контейнер. 
	for (int i = 0; i < size; i++)
	{
		v1.push_back(i+1);
	}
	cout <<"Show: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << v1[i] << " ";
	}
	cout << endl;

	//2. »зменить контейнер, удалив из него одни элементы и заменив другие. 
	v1.erase(v1.begin());
	v1.insert(v1.begin()+2, 0);
	cout << "Show with erase and insert: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << v1[i] << " ";
	}
	cout << endl;

	//3. ѕросмотреть контейнер, использу€ дл€ доступа к элементам итераторы.
	ptr = v1.begin();
	cout << "Show with iterator: ";
	while (ptr != v1.end())
	{
		cout << " " << *ptr << " ";
		ptr++;
	}
	cout << endl;

	//4. —оздать второй контейнер этого же класса и заполнить его данными того же типа, что и первый контейнер. 
	vector<int> v2;
	for (int i=0; i < size; i++)
	{
		v2.push_back(i + 6);
	}
	cout << "Show v2: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << v2[i] << " ";
	}
	cout << endl;

	//5. »зменить первый контейнер, удалив из него n элементов после заданного и добавив затем в него 
	//все элементы из второго контейнера. ѕросмотреть первый  и второй контейнеры. 
	int f = 0,s=0;
	cout << "Enter first: ";
	cin >> f;
	cout << "Enter second: ";
	cin >> s;
	int e = f + s;
	v1.erase(v1.begin()+f, v1.begin()+s);
	ptr = v1.begin();
	cout << "Show v1: ";
	while (ptr != v1.end())
	{
		cout << " " << *ptr << " ";
		ptr++;
	}
	cout << endl;
	vector<int>::iterator ptr2 = v2.begin();
	while (ptr2 != v2.end())
	{
		v1.push_back(*ptr2);
		ptr2++;
	}
	ptr = v1.begin();
	cout << "Show v1: ";
	while (ptr != v1.end())
	{
		cout << " " << *ptr << " ";
		ptr++;
	}
	ptr2 = v2.begin();
	cout <<endl<< "Show v2: ";
	while (ptr2 != v2.end())
	{
		cout << " " << *ptr2 << " ";
		ptr2++;
	}
	cout << endl;
	return 0;
}