#include "stdafx.h"
#include "Student-sch.h"
#include <iostream> 

using namespace std;

student_sch::student_sch(void)
{
	cout << "����� ������������ ��������-��������" << endl;
}

void student_sch::setKurs(int Kurs)
{
	this->kurs = Kurs;
}

void student_sch::getKurs()
{
	cout << "���� ��������-��������: " << this->kurs<< endl;
}

void student_sch::f()
{
	cout << "call student" << endl;
}

student_sch::~student_sch(void)
{
	cout << "����� ����������� ��������-��������" << endl;
}