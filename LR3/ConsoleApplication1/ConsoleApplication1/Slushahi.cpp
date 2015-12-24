#include "stdafx.h"
#include "Slushahi.h"
#include <iostream> 

using namespace std;

slushahi::slushahi(void)
{
	cout << "Вызов конструктора служащего" << endl;
}

void slushahi::setPost(char *post)
{
	this->post = post;
}

void slushahi::getPost()
{
	cout << "Должность служащего: " << this->post << endl;
}

void slushahi::f()
{
	cout << "call sluhahi" << endl;
}

slushahi::~slushahi(void)
{
	cout << "Вызов деструктора служащего" << endl;
}