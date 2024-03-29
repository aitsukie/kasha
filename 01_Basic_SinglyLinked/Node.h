#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{
	public:	
		Node(); //Default
		Node(Node *next); //Parameter1
		Node(const string &data, Node *next);//Parameter2
		
	private:
		string data; //string element
		Node *next; //pointer to next item in list
	
	friend class LinkedList; //so that Linked list can access private

};


#endif
