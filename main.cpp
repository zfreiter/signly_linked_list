#include "linked_list.h"


int main()
{
	linked_list a;
	a.insert_orderd(5);

	a.insert_orderd(10);
	a.insert_orderd(7);
	a.display();
	if(a.remove_item(70))
	{
		cout << endl << "match" << endl;
	}
	else
	{
		cout << endl << "no match" << endl;
	}

	a.display();
	return 0;
}
