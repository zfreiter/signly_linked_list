#include "linked_list.h"

linked_list::linked_list()
{
	head = NULL;
}

linked_list::~linked_list()
{
	remove_list();
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

int linked_list::remove_list(void)
{
	return remove_list(head);
}

int linked_list::remove_list(node *& head)
{
	if(!head)
	{
		return 0;	
	}

	int num = remove_list(head->next);
	
	delete head;
	head = NULL;
	return num + 1;	
}

bool linked_list::search_data(int d)
{
	return search_data(head, d);
}

bool linked_list::search_data(node * head, int d)
{
	if(!head)
	{
		return false;
	}
	else if(d == head->data)
	{
		return true;
	}
	else
	{
		search_data(head->next, d);
	}
}

bool linked_list::remove_item(int d)
{
	return remove_item(head, d);
}

bool linked_list::remove_item(node *& head, int d)
{
	if(!head)
	{
		return false;
	}
	
	if(head->data == d)
	{
		node * temp = head;
		head = head->next;
		delete temp;
		temp = NULL;

		return true;
	}	

	bool item = remove_item(head->next, d);
	
	return item;
}
