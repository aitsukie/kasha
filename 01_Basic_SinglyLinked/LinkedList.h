#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
	public:
	LinkedList(); //empty list contructor
	~LinkedList(); //Destructor
	
	bool empty() const;//is list emtpy
	//const string& front() const; // get front element? why is it so ugly?
	
	string CurrentHead();
	void addFront(const string& e); //add to front of list
	void removeFront(); //remove front item from list
	
	//extras
	
	void Output() const;
	
	private:
	Node *head; //pointer to head

};


#endif
