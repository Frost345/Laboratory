#include "stdafx.h"
#include "Worker.h"
#include <iostream> 

using namespace std;

worker::worker(void)
{
	cout << "����� ������������ ��������" << endl;
}

void worker::setPlaceWork(char *Place_Work)
{
	this->place_work = Place_Work;
}

void worker::getPlaceWork()
{
	cout << "����� ������ ��������: " << this->place_work << endl;
}

void worker::f()
{
	cout << "call worker" << endl;
}

worker::~worker(void)
{
	cout << "����� ����������� ��������" << endl;
}