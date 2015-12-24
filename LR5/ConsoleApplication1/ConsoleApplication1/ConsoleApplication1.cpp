#include "stdafx.h"
#include "Persona.h"
#include "Ingineer.h" 
#include "Slushahi.h"
#include "Student-sch.h"
#include "controller.h"
#include "company.h"
#include "locale"
#include <iostream> 

using namespace std;

Company *Company::head = nullptr;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	slushahi sl1("Petr1", 40, 50000);
	student_sch st1("Ivan1", 25, 5);
	ingineer in1("Sidor1", 45, 20);
	slushahi sl2("Petr2", 35, 45000);
	student_sch st2("Ivan2", 20, 2);
	ingineer in2("Sidor2", 40, 15);
	Controller::Add(&sl1);
	Controller::Add(&sl2);
	Controller::Add(&st1);
	Controller::Add(&st2);
	Controller::Add(&in1);
	Controller::Add(&in2);
	cout << "Show list:" << endl;
	Controller::Show();
	int zarplata;
	cout << "Enter the zarplata Slushahi: ";
	cin >> zarplata;
	cout << "Show Slushahi >= zarplata: "<<endl;
	Controller::SearchSlush(zarplata);
	cout << "Show ";
	Controller::KolStud();
	int work;
	cout << "Enter the work year: ";
	cin >> work;
	cout << "Show Number ingineer: ";
	Controller::KolIng(work);
	slushahi ads("asdas",25,34);
	Controller::Add(&ads);
	cout << "list:" << endl;
	Controller::Show();
	return 0;
}