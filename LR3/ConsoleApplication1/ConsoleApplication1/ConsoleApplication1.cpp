#include "stdafx.h"
#include "Persona.h"
#include "Ingineer.h" 
#include "Slushahi.h"
#include "Tokar.h"
#include "Worker.h"
#include "Student-sch.h"
#include "locale"
#include <iostream> 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	persona a,*p; 
	a.setName("Иван"); 
	a.getName();
	cout << endl;
	ingineer b; 
	b.setName("Петров Иван Петрович"); 
	b.getName(); 
	b.setWorkYear(5);
	b.getWorkYear();
	cout << endl;
	student_sch c;
	c.setName("Константин");
	c.getName(); 
	c.setKurs(3);
	c.getKurs();
	cout << endl;
	slushahi d;  
	d.setName("Сидоров Николай Владимирович"); 
	d.getName(); 
	d.setPost("Завсклада");
	d.getPost();   
	cout << endl;
	tokar e;
	e.setName("Иванов Василий Иванович");
	e.getName();
	e.setZarplata(5000000);
	e.getZarplata();
	cout << endl;
	worker f;
	f.setName("Медведев Петр Дмитриевич");
	f.getName();
	f.setPlaceWork("Завод 'ПЭМ'");
	f.getPlaceWork();
	p = &a;
	p->f();
	p = &b;
	p->f();
	p = &c;
	p->f();
	persona *p1 = new persona();
	p1->f();
	p1->print();
	persona *p2 = new ingineer();
	p2->f();
	p2->print();
	ingineer *i1 = new ingineer();
	i1->f();
	i1->print();
	ingineer *i2 = NULL;
	return 0;
}