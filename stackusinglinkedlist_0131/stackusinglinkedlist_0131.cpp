#include <iostream>
using namespace std;

//node class merepresentasiakan single node di linked list
class node {
public:
	int data;
	node* next;

	node() {
		next = NULL;
	}
};