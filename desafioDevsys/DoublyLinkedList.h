#include "Node.h"


class DoublyLinkedList {

private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int getSize() const {
        
        return size;
    
    }

    void addElementStart(int value) {
        Node* newNode = new Node(value);  // Creamos un nuevo nodo

        if (!head) {  // Lista vacía
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        size++;  // Incrementamos el tamaño
    }

    void addElementEnd(int value) {
        Node* newNode = new Node(value);  // Creamos un nuevo nodo

        if (!tail) {  // Lista vacía
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        size++;  // Incrementamos el tamaño
    }

    void deleteElementStart() {

        if (!head) {
            return;
        }

        head = head->next;
        head->prev = nullptr;
    }

    void deleteElementEnd() {
        if (tail == nullptr) {
            return;
        }

        tail = tail->prev;
        tail->next = nullptr;
    }
};
