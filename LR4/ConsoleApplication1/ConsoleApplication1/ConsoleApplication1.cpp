#include "stdafx.h"
#include "Persona.h"
#include "Ingineer.h" 
#include "Slushahi.h"
#include "list.h"
#include "locale"
#include <iostream> 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	List list;
	slushahi *ps;
	ingineer *pi;
	ps = new slushahi("Иван",30, 15);
	list.Input(ps);
	pi = new ingineer("Петр",29, 4);
	list.Input(pi);
	ps = new slushahi;
	ps->Input();
	list.Input(ps);
	pi = new ingineer;
	pi->Input();
	list.Input(pi);
	list.Show();
	return 0;
}