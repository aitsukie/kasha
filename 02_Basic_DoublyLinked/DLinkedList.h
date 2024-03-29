#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H

//using namespace std;
#include "DNode.h"

class DLinkedList
{
	public:
		DLinkedList();
		~DLinkedList();
		
		bool empty() const;
		
		const string& front() const;
		const string& back() const;
		
		void addFront(const string &e);
		void addBack(const string &e);
		void removeFront();
		void removeBack();
	
	private: 
		DNode *header;  //sentinels
		DNode *trailer;
		
	protected:
		void add(DNode *v, const string& e); //insert new node before v
		void remove(DNode *v); //remove node

};










#endif 
