#include <iostream>

using namespace std;

#include "BasicClass.h"
#include "InheritClass.h"
#include "DynamicClass.h"

int main()
{
	
	/*
	cout << "Default Constructor Demonstration - Basic Class" << endl;
	BasicClass mC;
	mC.OutputData();
	
	
	cout << "\nRead and Print Member functions Demonstration" << endl;
	mC.InputData();s
	mC.OutputData();
	
	cout << "\nSet and Get Functions Demonstration" << endl;
	int a = 5;
	int b = 6;	
	mC.setA(a);
	mC.setB(b);
	mC.OutputData();
	
	cout << "\nDefault Constructor Demonstration - Inherited Class" << endl;
	InheritClass inC;
	inC.OutputData(); */
	
	
	cout << "\nSlicing Problem" << endl; //Polymorphism
	//slicing problem			//Wrong - error
	//Data of Inherit is gone
	InheritClass In;			//BasicClass base;
	BasicClass base	= In;		//InheritClass In = base;	
	base.OutputData();			//In.OutputData(); 
	
	
	BasicClass base;
	InheritClass In = base;	
	In.OutputData(); 
	/*
	cout << "\n Slicing Problem fix with pointers" << endl;
	BasicClass* base_pointer = &In;
	base_pointer -> OutputData(); */ //for this to work, make the overriden function 'virtual' in both classes - only in the header file
	
	/*
	DynamicClass D;
	int a = 5;
	int b = 6;
	
	BasicClass* base_pointer = &D;
	base_pointer -> setA(a);
	base_pointer -> setB(b);
	base_pointer -> OutputData();
	*/

	
	
	return 0;
}
