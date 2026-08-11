#pragma once

#include <string>
#include "Node.h"

/*
* ----------------------------------------------------------------
* LISTA DOBLEMENTE ENLAZADA (DOUBLY LINKED LIST)
* ----------------------------------------------------------------
*
* Una lista doblemente enlazada es una estructura de datos lineal
* formada por nodos conectados en ambas direcciones.
*
* Cada Node conoce la dirección del nodo anterior mediante previous
* y la dirección del siguiente nodo mediante next.
*
* DoublyLinkedList conserva dos punteros:
*
*     - head: almacena la dirección del primer Node.
*     - tail: almacena la dirección del último Node.
*
* Representación conceptual:
*
*     head                                             tail
*       |                                                |
*       v                                                v
*     nullptr <- [ A ] <-> [ B ] <-> [ C ] -> nullptr
*
* Cuando la lista está vacía, head y tail contienen nullptr.
* Cuando contiene un solo Node, head y tail apuntan al mismo objeto.
*
* A diferencia de una lista simplemente enlazada, esta estructura
* puede recorrerse en ambas direcciones:
*
*     - Desde head hacia tail mediante next.
*     - Desde tail hacia head mediante previous.
*
* Operaciones de esta implementación:
*
*     - append(): agrega un elemento al final.
*     - remove(): busca y retira un elemento por su valor.
*     - displayForward(): muestra los elementos desde head.
*     - displayBackward(): muestra los elementos desde tail.
*     - isEmpty(): comprueba si la lista está vacía.
*
* Los atributos head y tail son privados porque solamente
* DoublyLinkedList debe administrar el inicio, el final y los enlaces
* de la estructura. Esto aplica encapsulamiento.
*
* DoublyLinkedList también cumple con SRP (Single Responsibility
* Principle), porque tiene una sola responsabilidad: administrar los
* nodos y las operaciones de una lista doblemente enlazada. El menú
* y la captura de datos pertenecen a main().
*
*/

class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void append(std::string value);
    void remove(std::string value);
    void displayForward();
    void displayBackward();
    bool isEmpty();
};
