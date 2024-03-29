#ifndef INHERITCLASS_H
#define INHERITCLASS_H
#include "BasicClass.h"

#include <iostream>

class InheritClass : public BasicClass
{

	public: // constructors
	
	InheritClass(); //default
	InheritClass(const int &a, const int &b); //parameter Constructor
	
	//Member functions
	void InputData(); // modifier
	virtual void OutputData() const; //Accessor
	
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
