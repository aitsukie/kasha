#ifndef CNODE_H
#define CNODE_H
using namespace std;
typedef string Elem;
class CNode
{
	private:
	Elem elem;
	CNode *next;
	
	friend class CList;


};



#endif
