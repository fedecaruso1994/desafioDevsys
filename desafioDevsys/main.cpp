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
    

    cout << "Lista despu�s de agregar elementos: " << endl;
    list.printElements();
    cout << endl;

    // Probando metodos para eliminar
    list.deleteElementStart();
    list.deleteElementEnd();

    cout << "Lista despu�s de eliminar primer y �ltimo elemento: " << endl;
    list.printElements();
    cout << endl;

     //Insertar despu�s del �ndice 1
    list.addElementNextIdx(25, 1);

    cout << "Lista despu�s de insertar 25 despu�s del �ndice 1: " << endl;
    list.printElements();
    cout << endl;

    list.addElementNextIdx(27, 0);

    cout << "Lista despu�s de insertar 27 despu�s del �ndice 0: " << endl;
    list.printElements();
    cout << endl;

    cout << "Tama�o de la lista: " << list.getSize() << endl;
    cout << endl;

    
    list.addElementNextIdx(70, 4);

    cout << "Lista despu�s de insertar 70 despu�s del �ndice 4: " << endl;
    list.printElements();
    cout << endl;

    cout << "Eliminamos el elemento en �ndice 3: " << endl;;
    list.deleteElementForIdx(3);
    list.printElements();
    cout << endl;
    list.printReverse();
    cout << endl;

    return 0;
};


