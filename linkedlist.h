#include<iostream>
using namespace std;

class Node{
	int data;
	Node* link;
	

public:
	Node(int);
	int get_data();
	void set_data(int);
	void set_link(Node*);
	Node* get_link();
};

class LinkedList{
	Node* head;
public:
	LinkedList();
	void create_LL();
	void traverse();
	void display();
	void insert_at_begin(int);
	void insert_at_end(int);
	void insert_after_key(int, int);
	void insert_before_key(int,int);
	void delete_at_begin();
	void delete_at_end();
	void delete_key(int);
	void concat_lists(LinkedList);
	Node* search(int);
	void reverse_list();
	void reverse_traversal();
	void sort();
	Node* find_min(Node*) const;
};
