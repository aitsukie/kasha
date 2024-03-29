#include <iostream>
#include "Node.h"


Node :: Node()
{
	data = " "; //empty string
	next = nullptr; //pointer pointing to 'nothing', null
}

Node :: Node(const string &data, Node *next)
{
	this -> data = data;
	this -> next = next;
}

Node :: Node(Node *next)
{
	this -> next = next;
}
