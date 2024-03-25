#include "linkedlist.cpp"

int main(){
	//Creating first Linked List
	LinkedList l1;
	l1.create_LL();
	cout<<"Created Linked List 1"<<endl;
	l1.display();

	l1.insert_at_begin(1);
	l1.insert_at_end(100);
	cout<<"Linked List after insertion at beginning and end"<<endl;
	l1.display();

	l1.delete_at_begin();
	l1.delete_at_end();
	cout<<"Linked List after deletion at end and beginning"<<endl;
	l1.display();

	cout<<"Searching for a key in Linked List"<<endl;
	l1.search(20);
	
	cout<<"Reverse of Linked List 1"<<endl;
	l1.reverse_list();
	l1.display();

	//Creating second linked list
	LinkedList l2;
	l2.create_LL();
	cout<<"Created Linked List 2"<<endl;
	l2.display();
	
	l2.insert_after_key(4,2);
	l2.insert_before_key(3,9);
	cout<<"Linked List after insertion before and after certain keys"<<endl;
	l2.display();

	l2.delete_key(3);
	cout<<"Linked List after deleting a key"<<endl;
	l2.display();

    cout<<"Sorting Linked List 2"<<endl;
	l2.sort();
	l2.display();

    cout<<"Concatinated Linked List 1 with 2 :"<<endl;
	l1.concat_lists(l2);
	l1.display();

	cout<<"Reverse traversal of Linked List 2"<<endl;
	l2.reverse_traversal();
}