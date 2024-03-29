#include <iostream>  

using namespace std; 

int main() //main function block
{

	int number = 69;	
	int* MemoryLocation = &number;
	
	cout << "Memory location of: " << number << " in different ways\n" << endl;
	cout << "&number: " << &number << endl; //shows location
	cout << "Memory location " << MemoryLocation << endl; //shows location
	cout << "(*MemoryLocation): " << (*MemoryLocation) << endl;//shows the number;
	
	*MemoryLocation = 42; //dereference the pointer
	cout << "Dereference (*MemoryLocation) " << (*MemoryLocation) << endl; //shows new number
	cout << "number: " << number << endl;//shows new number
	
	
	
	return 0; 

}

/*
======================================================================
EXCERCIES
======================================================================
Exercise 1. Write a program that creates an integer variable and prints out its logical address in the standard output. Test the program by starting it multiple times. 
Does the address of the variable change? - yes

Exercise 2. Implement the code from Listing 3. 
Can you redirect the pointer ptr to another integer variable? - yes
======================================================================
NOTES
======================================================================
Each variable has a unique logical address in computer memory, represented by an integer in a hexadecimal format (numeral system with base 16). The address of a variable can be extracted using the address operator & in front of it.

!! Note the different meaning of some operators of the language in different program context.

*/
