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

	//untuk menghapus
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value: " << top->data << endl;
		top = top->next;

	}


	void peek() {
		if (top == NULL) {
			cout << "Listy is empty." << endl;
		}
		else {
			Node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}

	bool isEmpty() {
		return top == NULL;

	}

};

int main() {
	Stack stack; //variabel stack

	int choice = 0;
	int value;



}




	




	




