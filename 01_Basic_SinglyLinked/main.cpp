#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main()
{
	
	string a= "hello";
	string b= "how";
	LinkedList list;
	
	list.addFront(a);
	list.addFront(b);
	string head = list.CurrentHead();
	
	cout << head << endl;
	
	bool em = list.empty();
	cout << em;
	
	return 0;

}
