#include "linked_list.h"

linked_list::linked_list()
{
	head = NULL;
}

linked_list::~linked_list()
{
	int num = clear_list();
	cout << endl << "removed: " << num << endl;
}

void linked_list::insert_orderd(int d)
{
	head = insert_orderd(head, d);
}

node * linked_list::insert_orderd(node * head, int d)
{
	if(!head)
	{
		head = new node;
		head->data = d;

		return head;
	}
	else if(head && d <= head->data)
	{
		node * temp = new node;
		temp->data = d;
		temp->next = head;
		head = temp;

		return head;
	}
	else if(!head->next)
	{
		head->next = new node;
		head->next->data = d;

		return head;	
	}
	else
	{
		head->next = insert_orderd(head->next, d);
		return head;
	}
}


int linked_list::display(void) const
{
	return display(head);
}
		
int linked_list::display(node * head) const
{
	if(!head)
	{
		return 0;
	}
	else
	{
		cout << "Data: " << head->data << endl;
		return display(head->next) + 1;
	}
}

int linked_list::clear_list(void)
{
	return clear_list(head);
}

int linked_list::clear_list(node *& head)
{
	if(!head)
	{
		return 0;	
	}

	int num = clear_list(head->next);
	
	delete head;
	head = NULL;
	return num + 1;	
}
