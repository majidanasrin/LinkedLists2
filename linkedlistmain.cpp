#include "linkedlist.cpp"

int main(){
	
	LinkedList x1;
	x1.create_LL();
	cout<<"Created Linked List 1"<<endl;
	x1.display();

	x1.insert_at_begin(1);
	x1.insert_at_end(100);
	cout<<"Linked List after insertion at beginning and end"<<endl;
	x1.display();

	x1.delete_at_begin();
	x1.delete_at_end();
	cout<<"Linked List after deletion at end and beginning"<<endl;
	x1.display();

	cout<<"Searching for a key in Linked List"<<endl;
	x1.search(20);
	
	cout<<"Reverse of Linked List 1"<<endl;
	x1.reverse_list();
	x1.display();

	LinkedList x2;
	x2.create_LL();
	cout<<"Created Linked List 2"<<endl;
	x2.display();
	
	x2.insert_after_key(4,2);
	x2.insert_before_key(3,9);
	cout<<"Linked List after insertion before and after certain keys"<<endl;
	x2.display();

	x2.delete_key(3);
	cout<<"Linked List after deleting a key"<<endl;
	x2.display();

    cout<<"Sorting Linked List 2"<<endl;
	x2.sort();
	x2.display();

    cout<<"Concatinated Linked List 1 with 2 :"<<endl;
	x1.concat_lists(l2);
        x1.display();

	cout<<"Reverse traversal of Linked List 2"<<endl;
	x2.reverse_traversal();
}
