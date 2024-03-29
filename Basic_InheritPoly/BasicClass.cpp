#include <iostream>

using namespace std;

#include "BasicClass.h"

//Constructors
BasicClass :: BasicClass()
{
	a = 0;
	b = 0;
}

BasicClass :: BasicClass(const int &a, const int &b)
{
	this -> a = a;
	this -> b = b;
}

//Member functions
void BasicClass :: InputData()
{
	cout << "Num 1: ";
	cin >> a; 
	cout << "Num 2: ";
	cin >> b;
}


void BasicClass :: OutputData() const
{
	cout << "Num 1 - [" << a << "] Num 2 - [" << b << "]" << endl;
}

void BasicClass :: setA(int Num1)
{
	a = Num1;
}

int BasicClass :: getA() const
{
	return a;
}

void BasicClass :: setB(int Num2)
{
	b = Num2;
}

int BasicClass :: getB() const
{
	return b;
}

