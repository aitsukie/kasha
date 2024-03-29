#include <iostream>  

using namespace std; 

int* MemoryLocation(int& number)
{
	//int number = 5;
	
	return &number;

}

int main() //main function block
{
	int number = 42;
	int* Address =  MemoryLocation(number) ;
	cout << "Address: " << Address << endl;
	
	return 0; 

}

/*
======================================================================
EXCERCIES
======================================================================
Exercise 4. 
Write a function that returns the address of local variable. 
What is going to be the response of the compiler? 


04_pointfunc.cpp: In function ‘int* MemoryLocation()’:
04_pointfunc.cpp:9:16: warning: address of local variable ‘number’ returned [-Wreturn-local-addr]
    9 |         return &number;
      |                ^~~~~~~
04_pointfunc.cpp:7:13: note: declared here
    7 |         int number = 5;
      |             ^~~~~~




int* MemoryLocation()
{
	int number = 5;
	
	return &number;

}

int main() //main function block
{

	int* Address =  MemoryLocation() ;
	cout << "Address: " << Address << endl;
	
	return 0; 

}



Modify the above code (Listing 7 and Listing 8) to work correctly.

idk if it is the correct way.
======================================================================
NOTES
======================================================================

*/
