#include "stdafx.h"
#include "controller.h"
#include <iostream>

using namespace std;

void Controller::Show()
{
	ingineer *pi1 = nullptr;
	slushahi *psl1 = nullptr;
	student_sch *pss1 = nullptr;
	Company *p = Controller::head;
	while (p)
	{
		switch (p->kind)
		{
		case 0: pi1 = (ingineer *)p->adress;
			pi1->Show();
			break;
		case 1: psl1 = (slushahi *)p->adress;
			psl1->Show();
			break;
		case 2: pss1 = (student_sch *)p->adress;
			pss1->Show();
			break;
		}
		p = p->next;
	}
}

void Controller::Add(ingineer * addr)
{
	if (head == nullptr)
	{
		head = new Company();
		head->next = nullptr;
		head->adress = addr;
		head->kind = 0;
	}
	else
	{
		Company* p = head;
		while (p->next != nullptr)
		{
			p = p->next;
		}
		p->next = new Company();
		p->next->next = nullptr;
		p->next->adress = addr;
		p->next->kind = 0;
	}
}

void Controller::Add(slushahi * addr)
{
	if (head == nullptr)
	{
		head = new Company();
		head->next = nullptr;
		head->adress = addr;
		head->kind = 1;
	}
	else
	{
		Company* p = head;
		while (p->next != nullptr)
		{
			p = p->next;
		}
		p->next = new Company();
		p->next->next = nullptr;
		p->next->adress = addr;
		p->next->kind = 1;
	}
}

void Controller::Add(student_sch * addr)
{
	if (head == nullptr)
	{
		head = new Company();
		head->next = nullptr;
		head->adress = addr;
		head->kind = 2;
	}
	else
	{
		Company* p = head;
		while (p->next != nullptr)
		{
			p = p->next;
		}
		p->next = new Company();
		p->next->next = nullptr;
		p->next->adress = addr;
		p->next->kind = 2;
	}
}

void Controller::SearchSlush(int tmpzar)
{
	slushahi *psl1 = nullptr;
	Company *p = Controller::head;
	while (p)
	{
		psl1 = (slushahi*)p->adress;
		if (psl1->GetZar() >= tmpzar)
		{
			psl1->Show();
		}
		p = p->next;
	}
}

void Controller::KolIng(int tmpwork)
{
	int koling = 0;
	ingineer *pin1 = nullptr;
	Company *p = Controller::head;
	while (p)
	{
		pin1 = (ingineer*)p->adress;
		if (pin1->GetWork_year() == tmpwork)
		{
			koling++;
		}
		p = p->next;
	}
	cout << "Number of ingineers: " << koling << endl;
}

void Controller::Deleted(void *addr)
{
	Company *p = Company::head;
	Company *pnext = Company::head->next;
	if (p->adress != addr)
	{
		while (pnext)
		{
			if (pnext->adress == addr)
			{
				p->next = pnext->next;
				Company *del = pnext;
				pnext = pnext->next;
				delete[] del;
			}
			else
			{
				p = p->next;
				pnext = pnext->next;
			}
		}
	}
	else
	{
		Company::head = pnext;
		Company *del = p;
		p = pnext;
		pnext = pnext->next;
		delete[] del;
	}
}

void Controller::KolStud()
{
	int kolstud = 0;
	Company *p = Company::head;
	while (p)
	{
		if (p->kind == 2)
			kolstud++;
		p = p->next;
	}
	cout << "Number of students: " << kolstud << endl;
}