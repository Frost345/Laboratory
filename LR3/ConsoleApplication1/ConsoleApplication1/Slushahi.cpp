#include "stdafx.h"
#include "Slushahi.h"
#include <iostream> 

using namespace std;

slushahi::slushahi(void)
{
	cout << "����� ������������ ���������" << endl;
}

void slushahi::setPost(char *post)
{
	this->post = post;
}

void slushahi::getPost()
{
	cout << "��������� ���������: " << this->post << endl;
}

void slushahi::f()
{
	cout << "call sluhahi" << endl;
}

slushahi::~slushahi(void)
{
	cout << "����� ����������� ���������" << endl;
}