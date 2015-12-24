#include"stdafx.h"
#include"UserClass.h"
#include<iostream>
#include<string>

using namespace std;

Person::Person()
{
	name = "";
	age = 0;
};

Person::Person(string n, int a)
{
	name = n;
	age = a;
};

Person::Person(const Person &p)
{
	name = p.name;
	age = p.age;
}

std::string Person::getName()
{
	return name;
};

int Person::getAge()
{
	return age;
}

void Person::show()
{
	std::cout<<" "<< getName()  << " " << getAge();
};

void Person::setName(string tmpname)
{
	name = tmpname;
}

void Person::setAge(int tmpage)
{
	age = tmpage;
}

bool operator>(const Person &tmp,const Person &tmp1)
{
	if (tmp.age > tmp1.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(const Person &tmp, const Person &tmp1)
{
	if (tmp.age < tmp1.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Person &Person::operator=(Person &tmp1)
{
	name = tmp1.name;
	age = tmp1.age;
	return *this;
}

ostream& operator<<(ostream& os, Person& ps)
{
	ps.show();
	return os;
};

Person::~Person()
{

};