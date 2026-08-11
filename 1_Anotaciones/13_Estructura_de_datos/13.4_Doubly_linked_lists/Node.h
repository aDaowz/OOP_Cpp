#pragma once

#include <string>

/*
* ----------------------------------------------------------------
* NODO DOBLEMENTE ENLAZADO (DOUBLY LINKED NODE)
* ----------------------------------------------------------------
*
* Una lista doblemente enlazada está formada por objetos llamados nodos.
*
* En esta implementación orientada a objetos, cada nodo es una instancia
* de la clase Node. El objeto almacena un valor y dos enlaces que permiten
* conectarlo con otros nodos.
*
* Cada Node contiene tres partes:
*
*     - value: almacena el valor del elemento.
*     - previous: almacena la dirección del Node anterior.
*     - next: almacena la dirección del siguiente Node.
*
* Representación conceptual:
*
*     nullptr <- [ previous | value | next ] <-> [ previous | value | next ] -> nullptr
*
* El primer Node almacena nullptr en previous porque no existe un nodo
* antes de él. El último Node almacena nullptr en next porque no existe
* otro nodo después de él.
*
* Node utiliza encapsulamiento porque sus atributos son privados.
* Su estado solamente puede consultarse o modificarse mediante
* los métodos definidos por la clase.
*
* También cumple con SRP (Single Responsibility Principle), porque tiene
* una sola responsabilidad: representar un elemento y conservar sus
* enlaces hacia el Node anterior y el siguiente.
*
*/

class Node
{
private:
    std::string value;
    Node* previous;
    Node* next;

public:
    Node(std::string value);

    std::string getValue();

    Node* getPrevious();
    void setPrevious(Node* previous);

    Node* getNext();
    void setNext(Node* next);
};
