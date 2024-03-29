#include <iostream>

using namespace std;

#include "BasicClass.h"
#include "InheritClass.h"

//Constructors
InheritClass :: InheritClass() : BasicClass()
{
	//empty body
}

InheritClass :: InheritClass(const int &a, const int &b)
{
	this -> a = a;
	this -> b = b;
}

//Member functions
void InheritClass :: InputData()
{
	cout << "Num 1: ";
	cin >> a; 
	cout << "Num 2: ";
	cin >> b;
}


void InheritClass :: OutputData() const //Overriding function
{
	BasicClass :: OutputData();
	cout << "Inherited" << endl;
}

void InheritClass :: setA(int Num1)
{
	a = Num1;
}

int InheritClass :: getA() const
{
	return a;
}

void InheritClass :: setB(int Num2)
{
	b = Num2;
}

int InheritClass :: getB() const
{
	return b;
}

