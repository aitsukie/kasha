#include <iostream>
#include "CNode.h"
#include "CList.h"

CList :: CList()
{
	cursor = nullptr;

}

CList :: ~CList()
{

	while(!empty())
	{
		remove();
	}
}

bool CList:: empty() const
{
	return cursor == nullptr;

}


const Elem& CList :: front() const
{
	return cursor ->next -> elem;

}

const Elem& CList :: back() const
{
	return cursor -> elem;


}

void CList :: advance()
{
	cursor = cursor -> next;

}

void CList :: add(const Elem &e)
{
	CNode *v = new CNode;
	v -> elem =  e;
	
	if(cursor == nullptr)
	{
		v -> next = v;
		cursor = v;
	}
	else
	{
		v -> next = cursor -> next;
		cursor -> next = v;	
	}

}

void CList :: remove()
{
	CNode *old = cursor -> next;
	if(old == cursor )
	{
		cursor == nullptr;
	}
	else
	{
		cursor -> next = old -> next;
		
		delete old;
	
	}

}
