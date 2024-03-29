#ifndef BASICCLASS_H
#define BASICCLASS_H

#include <iostream>

using namespace std;

class BasicClass
{

	public: // constructors
	
	//Constructors
	BasicClass(); //initialize the data - usually empty or 0.
	BasicClass(const int &a, const int &b); //parameter Constructor
	
	//Memberfunctions
	void InputData(); //Read/Modify by reading data - modifier / mutator
	virtual void OutputData() const; //Print - Accessor, acessing the modified data
	
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
