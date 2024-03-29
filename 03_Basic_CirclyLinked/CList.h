#ifndef CLIST_H
#define CLIST_H
#include "CNode.h"
//using namespace std;

class CList
{

	public:
		CList();//Defailt
		~CList();//dstructr
		bool empty() const;
		
		const Elem& front() const;
		const Elem& back() const;
		
		void advance();
		void add(const Elem &e);
		void remove();
 		
	private:
		CNode *cursor;
	


};



#endif
