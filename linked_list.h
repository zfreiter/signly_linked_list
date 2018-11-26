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
		int clear_list(void);
	private:
		node * insert_orderd(node * head, int d);
		int display(node * head) const;	
		int clear_list(node *& head);
		node * head;	
};

#endif //H_LINKED_LIST	
