#include "linkedlist.h"

Node::Node(int data){
		this->data=data;
		this->link=NULL;
}

int Node :: get_data(){
		return data;
}

void Node :: set_link(Node* link){
		this->link=link;
}

void Node :: set_data(int value){
	this->data = value;
}

Node* Node :: get_link(){
		return link;
}

LinkedList :: LinkedList(){
		head=NULL;
}

void LinkedList :: create_LL(){
		string op;
		int x;
		Node* current;
		current=head;

		do{
			cout<<"Enter the value:";
			cin>>x;
			Node* node=new Node(x);
			if (head==NULL){
				head=node;
				current=head;
			}
			else {
				
				current->set_link(node);
				current=node;
			}
			cout<<"Do you wanna add number(y/n):";
			cin>>op;
		}while(op=="y");
}

void LinkedList :: display(){
		Node* p=head;
		while (p!=NULL){
			cout<<p->get_data()<<endl;
			p=p->get_link();
		}
}

void LinkedList :: insert_at_begin(int key){
    Node* node=new Node(key);
    node->set_link(head);
    head = node;
}

void LinkedList :: insert_at_end(int key){
	Node* p=head;
	while (p->get_link() != NULL){
		p = p->get_link();
	}
	Node* node = new Node(key);
	node->set_link(NULL);
	p->set_link(node);
}

void LinkedList :: insert_after_key(int key, int item){
	Node* p=head;
	while(p->get_link()!=nullptr && p->get_data()!=key){
		p=p->get_link();
	}
	if (p == nullptr) {
        cout << "Key not found in the list." << endl;
        return;
    }
	Node* q = p->get_link();
	Node* node = new Node(item);
	node->set_link(q);
	p->set_link(node);
}

void LinkedList :: insert_before_key(int key, int item){
	if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    if (head->get_data() == key) {
        insert_at_begin(item);
        return;
    }
	Node* p = head->get_link();
	Node* q = p->get_link();
	while (q->get_data()!= key){
		p = q;
		q = q->get_link();
	}
	if (q == NULL) {
        cout << "Key not found in the list." << endl;
        return;
    }
    Node* node = new Node(item);
    node->set_link(q);
    p->set_link(node);
}

void LinkedList :: delete_at_begin(){
	if (head == nullptr) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

	Node* temp = head;
	head = head->get_link();
	delete temp;
}

void LinkedList :: delete_at_end(){
	Node* p = head;
	Node* q = p->get_link();
	while (q->get_link()!=NULL){
		p = q;
		q = q->get_link();
	}
	delete p->get_link();
	p->set_link(NULL);
}

void LinkedList :: delete_key(int key){
	Node* p = head;
	Node* q = p->get_link(); 
	while(q->get_data()!=key){
		p = q;
		q = q->get_link();
	}
	p->set_link(q->get_link());
	delete q;
}

void LinkedList :: concat_lists(LinkedList l1){
	if (head == nullptr){
		head = l1.head;
		return;
	}
	Node* current = head;
	while(current->get_link() != NULL){
		current = current->get_link();
	}
	current->set_link(l1.head);
}

Node* LinkedList :: search(int key){
	Node* current = head;
	while(current->get_link()!=nullptr){
		if(current->get_data()==key){
			cout<<"Target found : "<<current->get_data()<<endl;
			return current;
		}
		current = current->get_link();
	}
	return nullptr;
}

void LinkedList :: reverse_list() {
    Node* previous = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->get_link();
        current->set_link(previous);
        previous = current;
        current = next;
    }
    
    head = previous;
}

void LinkedList::reverse_traversal() {
    Node* current = head;
    Node* previous = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->get_link();  
        current->set_link(previous); 
        previous = current;
        current = next;
    }

    current = previous; 

    while (current != nullptr) {
        cout << current->get_data() <<endl;
        current = current->get_link();
    }
}

Node* LinkedList::find_min(Node* start) const {
    if (start == NULL) {
        return NULL;
    }

    Node* minNode = start;
    Node* current = start->get_link();

    while (current != NULL) {
        if (current->get_data() < minNode->get_data()) {
            minNode = current;
        }
        current = current->get_link();
    }

    return minNode;
}

void LinkedList::sort() {
    if (head == NULL || head->get_link() == NULL) {
        cout << "List is already sorted or empty. Nothing to sort." << endl;
        return;
    }

    Node* current = head;

    while (current != NULL) {
        Node* minNode = find_min(current);

        int temp = current->get_data();
        current->set_data(minNode->get_data());
        minNode->set_data(temp);

        current = current->get_link();
    }
}