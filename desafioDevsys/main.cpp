#include <iostream>
using namespace std;

#include "Node.h"
#include "DoublyLinkedList.h"

int main() {

    // Creo la lista
    DoublyLinkedList list;

    // Agrego elementos al inicio y al final
    list.addElementStart(5);
    list.addElementStart(3);
    list.addElementEnd(20);
    list.addElementEnd(30);
    list.addElementEnd(40);
    

    cout << "Lista después de agregar elementos: " << endl;
    list.printElements();
    cout << endl;

    // Probando metodos para eliminar
    list.deleteElementStart();
    list.deleteElementEnd();

    cout << "Lista después de eliminar primer y último elemento: " << endl;
    list.printElements();
    cout << endl;

     //Insertar después del índice 1
    list.addElementNextIdx(25, 1);

    cout << "Lista después de insertar 25 después del índice 1: " << endl;
    list.printElements();
    cout << endl;

    list.addElementNextIdx(27, 0);

    cout << "Lista después de insertar 27 después del índice 0: " << endl;
    list.printElements();
    cout << endl;

    cout << "Tamaño de la lista: " << list.getSize() << endl;
    cout << endl;

    
    list.addElementNextIdx(70, 4);

    cout << "Lista después de insertar 70 después del índice 4: " << endl;
    list.printElements();
    cout << endl;

    cout << "Eliminamos el elemento en índice 3: " << endl;;
    list.deleteElementForIdx(3);
    list.printElements();
    cout << endl;
    list.printReverse();
    cout << endl;

    return 0;
};


