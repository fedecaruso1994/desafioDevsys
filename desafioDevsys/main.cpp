#include <iostream>
using namespace std;

#include "Node.h"

int main() {

	Node* nodo1 = new Node(10);
	Node* nodo2 = new Node(20);
	Node* nodo3 = new Node(30);

	nodo1->next = nodo2;
	nodo2->next = nodo3;

	nodo2->prev = nodo1;
	nodo3->prev = nodo2;

	// Accedemos a los datos desde nodo1
	cout << "Nodo 1: " << nodo1->data << endl;
	cout << "Nodo 2: " << nodo1->next->data << endl;
	cout << "Nodo 3: " << nodo1->next->next->data << endl;

	// Liberamos memoria
	delete nodo1;
	delete nodo2;
	delete nodo3;

	return 0;

}