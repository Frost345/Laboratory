#include "stdafx.h"
#include "Worker.h"
#include <iostream> 

using namespace std;

worker::worker(void)
{
	cout << "Вызов конструктора рабочего" << endl;
}

void worker::setPlaceWork(char *Place_Work)
{
	this->place_work = Place_Work;
}

void worker::getPlaceWork()
{
	cout << "Место работы рабочего: " << this->place_work << endl;
}

void worker::f()
{
	cout << "call worker" << endl;
}

worker::~worker(void)
{
	cout << "Вызов деструктора рабочего" << endl;
}