#include "linked_list.h"


int main()
{
	linked_list a;
	a.insert_orderd(5);

	a.insert_orderd(10);
	a.insert_orderd(7);
	
	a.insert_orderd(70);

	a.insert_orderd(54);
	a.display();

	int num = a.insert_before_last(700);
	cout << endl << "NUM: " << num  << endl;
	a.display();
	int num2 = a. remove_special();
	cout << endl;
	cout << endl << "total removed: " << num2  << endl;
	a.display();

	return 0;
}
