#ifndef DNODE_H
#define DNODE_H

using namespace std;
//typedef string Elem;

class DNode
{

	private:
		string elem;
		DNode *prev;
		DNode *next;
		friend class DLinkedList;

};



#endif
