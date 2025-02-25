﻿#include "Node.h"
#include <iostream>
using namespace std;


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
        Node* newNode = new Node(value);  

        if (head == nullptr) {  
            head =  newNode;
            tail =  newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        size++;  
    }

    void addElementEnd(int value) {
        Node* newNode = new Node(value);  

        if (tail == nullptr) {  // Lista vacía
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        size++;  
    }

    void deleteElementStart() {

        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {

            head->prev = nullptr;  
        }
        else {
            tail = nullptr;  // Si la lista quedó vacía, tail también debe ser nullptr
        }
        delete temp;  

        size--;
    }

    void deleteElementEnd() {
        if (tail == nullptr) {
            return;
        }

        Node* temp = tail;  
        tail = tail->prev;  

        if (tail != nullptr) {
            tail->next = nullptr;  
        }
        else {
            head = nullptr;  
        }

        delete temp;  // Liberamos la memoria
        size--;
    }

    void addElementNextIdx(int value , int index) {

        if (index < 0 || index >= size) {
            cout << "Índice fuera de rango." << endl;
            return;  
        }

        if (index == 0) {
            addElementStart(value);
            return;
        }

        if (index == size-1) {
            addElementEnd(value);
            return;
        }
        
        Node* temp = head;
        for (int i = 0; i < index  ; i++) {
            temp = temp->next;
        
        }
        Node* newNode = new Node(value);
        temp->next->prev = newNode;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        
        size++;
            

        }

    void deleteElementForIdx(int index) {

        if (index < 0 || index >= size) {
            cout << "Índice fuera de rango." << endl;
            return;
        }

        if (index == 0) {  
            deleteElementStart();
            return;
        }

        if (index == size - 1) {  
            deleteElementEnd();
            return;
        }

        Node* temp = head;
        
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;  
        size--;

    }

    void printElements() {

        if (head == nullptr) {
            cout << "La lista está vacía." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ; ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printReverse() {
        if (tail == nullptr) {
            cout << "La lista está vacía." << endl;
            return;
        }

        Node* temp = tail;
        while (temp != nullptr) {
            cout << temp->data << " ; ";
            temp = temp->prev;
        }

        cout << endl;
     
    }

    };


