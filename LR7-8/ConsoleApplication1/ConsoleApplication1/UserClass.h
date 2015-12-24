#pragma once

#include"stdafx.h"
#include<iostream>
#include<string>

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string n, int a);
	Person(const Person&p);
	~Person();
	friend ostream& operator<<(ostream& os, Person& ps);
	void show();
	string getName();
	int getAge();
	void setName(string tmp);
	void setAge(int tmp);
	friend bool operator>(const Person &tmp,const Person &tmp1);
	friend bool operator<(const Person &tmp, const Person &tmp1);
	Person &operator =(Person &tmp1);
};