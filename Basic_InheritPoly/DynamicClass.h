#ifndef DYNAMICCLASS_H
#define DYNAMICCLASS_H
#include "BasicClass.h"

#include <iostream>
#include <string>

class DynamicClass : public BasicClass
{

	public: // constructors
	
	DynamicClass(); //default
	DynamicClass(const int &a, const int &b); //parameter Constructor
	DynamicClass(const int &a); //invoked when a copy of the object is needed, ie when object is passed as a function parameter by value
	~DynamicClass(); //Destructor
	
	
	//Member functions
	void InputData(); // modifier
	virtual void OutputData() const; //Accessor
	
	//Overloaded Operands
	int operator =(const int &a);
	
	//Setters and Getters
	void setA(int Num1); //modify
	int  getA() const; //access
	
	void setB(int Num2);
	int  getB() const;
	
	
	
	
	private: //private data fields
	int a;
	int b;

};

#endif
