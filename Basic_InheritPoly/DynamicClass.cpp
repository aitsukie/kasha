#include <iostream>
#include <string>

using namespace std;

#include "BasicClass.h"
#include "DynamicClass.h"

//Constructors
DynamicClass :: DynamicClass() : BasicClass()
{
	//empty body
}	

DynamicClass :: DynamicClass(const int &a, const int &b)
{
	this -> a = a;
	this -> b = b;
}

DynamicClass :: DynamicClass(const int &a) //copy
{
	a = new a; //????
}

DynamicClass :: DynamicClass() //copy
{
	//Something
}


int  DynamicClass :: operator =(const int &a)
{
	if(this != &a)
	{
	 //im tired
	}
	return *this; 
}


//Member functions
void DynamicClass :: InputData()
{
	cout << "Num 1: ";
	cin >> a; 
	cout << "Num 2: ";
	cin >> b;
}


void DynamicClass :: OutputData() const //Overriding function
{
	cout << "Dynamic: " << endl;
	BasicClass :: OutputData();

}

void DynamicClass :: setA(int Num1)
{
	a = Num1;
}

int DynamicClass :: getA() const
{
	return a;
}

void DynamicClass :: setB(int Num2)
{
	b = Num2;
}

int DynamicClass :: getB() const
{
	return b;
}



