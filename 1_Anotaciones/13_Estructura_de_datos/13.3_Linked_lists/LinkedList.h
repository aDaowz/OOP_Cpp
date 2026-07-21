#pragma once

#include <string>
#include "Node.h"

/*
* ----------------------------------------------------------------
* LISTA SIMPLEMENTE ENLAZADA (SINGLY LINKED LIST)
* ----------------------------------------------------------------
*
* Una lista enlazada es una estructura de datos lineal formada
* por una secuencia de nodos conectados entre sí.
*
* A diferencia de un arreglo, los elementos de una lista enlazada
* no necesitan encontrarse en posiciones consecutivas de memoria.
* Cada Node conoce la dirección del siguiente nodo mediante next.
*
* LinkedList conserva un puntero llamado head:
*
*     head
*       |
*       v
*     [ A | next ] -> [ B | next ] -> [ C | nullptr ]
*
* head almacena la dirección del primer Node. No es un nodo adicional.
* Cuando la lista está vacía, head contiene nullptr.
*
* Esta estructura se llama "simplemente enlazada" porque cada Node
* contiene únicamente un enlace hacia el siguiente nodo. Por esa razón,
* la lista se recorre desde head y solamente en una dirección.
*
* Operaciones de esta implementación:
*
*     - append(): agrega un elemento al final de LinkedList.
*     - remove(): busca y retira un elemento por su valor.
*     - display(): recorre y muestra todos los elementos.
*     - isEmpty(): comprueba si la lista está vacía.
*
* El atributo head es privado porque solamente LinkedList debe cambiar
* el inicio y los enlaces de la estructura. Esto aplica encapsulamiento.
*
* LinkedList también cumple con SRP (Single Responsibility Principle),
* porque tiene una sola responsabilidad: administrar los nodos y las
* operaciones de una lista simplemente enlazada. No muestra el menú ni
* solicita datos al usuario; esas acciones pertenecen a main().
*
*/

class LinkedList
{
    private:
        Node* head;

    public:
        LinkedList();
        ~LinkedList();

        void append(std::string value);
        void remove(std::string value);
        void display();
        bool isEmpty();
};
