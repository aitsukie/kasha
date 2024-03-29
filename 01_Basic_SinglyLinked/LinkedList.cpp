#include <iostream>
#include "LinkedList.h"
#include "Node.h"


LinkedList::LinkedList()
{
//Object automatically calls the default constructor, which is an empty list and head pointing to NULL.
	Node *EmptyList = new Node; 
	
}
	
LinkedList::~LinkedList()
{
	while(!empty())
	{
		removeFront();	
	}

} 

bool LinkedList::empty() const
{
	//return head == nullptr;
	if(true)
	{
		return head == nullptr;
	}
	else if(false)
	{
		return head != nullptr;		
	}

}

/*
const string& LinkedList::front() const
{
	//Current head data, most recent added node
	return head ->data; 

}*/

string LinkedList::CurrentHead()
{
	//Current head data, most recent added node
	return head ->data; 

}

void LinkedList::addFront(const string& e)
{
	//new node V, where e points to the data and the head
	Node *v = new Node(e, head);
	head = v;
}

void LinkedList::removeFront()
{
	Node *curr= head; //get current head
	head = curr -> next; //skip over old head?
	delete curr; //remove the old head*/
	
}




void LinkedList :: Output() const
{
	if (head == NULL)
	{
        cout << "List is empty!" << endl;
    }
    else
    {
        Node* temp = new Node;
        temp = head;
        while(temp != NULL) 
        {
        
            cout << temp -> data << " ";
            temp = temp -> next;
     	}
    }
}



