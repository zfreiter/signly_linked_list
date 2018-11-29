#ifndef	H_LINKED_LIST
#define	H_LINKED_LIST
#include <iostream>
using namespace std;

struct node
{
	int data;
	node * next;
};

class linked_list
{
	public:
		linked_list();
		~linked_list();
		void insert_orderd(int d);
		int display(void) const;
		int remove_list(void);
		bool search_data(int d);
		bool remove_item(int d);
		int display_every_other(void);		
		int insert_before_last(int d);
	private:
		node * insert_orderd(node * head, int d);
		int display(node * head) const;	
		int remove_list(node *& head);
		bool search_data(node * head, int d);
		bool remove_item(node *& head, int d);
		int display_every_other(node * head);	
		int insert_before_last(node *& head, int d);
		node * head;	
};

#endif //H_LINKED_LIST	
