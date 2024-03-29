#include <iostream>  

using namespace std; 

void byValue(int a)
{
	//a = 0;
	
	cout << "Value: " << a << endl;
	cout << "Value Address: " << &a << endl;

}

void byReference(int &a)
{
	//a = 0;
	cout << "Reference: " << a << endl;
	cout << "Reference Address: " << &a << endl;
}

void byPointer(int *MemLoc)
{

	//*MemLoc = 0;
	cout << "pointer: " << (*MemLoc) << endl;
	cout << "pointer Address: " << MemLoc << endl;

}


int main() //main function block
{
	int number = 42;
	int *MemoryLocation = &number;
	cout << "Main: " << number << "loc: " << MemoryLocation << endl;
	
	byValue(number);
	cout << endl;
	
	byReference(number);
	cout << endl;
	
	byPointer(MemoryLocation);
	cout << endl;
	
	
	return 0; 

}

/*
======================================================================
EXCERCIES
======================================================================
Exercise 3. Write a program that defines three functions with a single parameter: by value, by reference, and using a pointer. 

Test them and explain their behaviour.

They all became 0
======================================================================
NOTES
======================================================================

*/
