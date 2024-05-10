#include <iostream>
using namespace std;

//node class merepresentasiakan single node di linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// stack class
class Stack {
private:
	Node* top; //pointer top node stack

public:
	Stack() {
		top = NULL; //intialize the stack with null top pointer
	}

	//push operation
	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push value: " << value << endl;
		return value;
	}
	

	




	




