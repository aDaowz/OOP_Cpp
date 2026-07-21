#pragma once

#include <string>

/*
* ----------------------------------------------------------------
* NODO (NODE)
* ----------------------------------------------------------------
*
* Una lista enlazada está formada por elementos llamados nodos.
*
* En esta implementación orientada a objetos, un nodo es un objeto
* utilizado para almacenar información dentro de una estructura de datos.
* Cada nodo es una instancia de la clase Node y contiene un valor y un
* enlace que permite conectarlo con otro nodo.
*
* El objeto Node almacena un std::string en value y un puntero en next
* con la dirección de memoria del siguiente Node.
*
* Cada Node contiene dos partes:
*
*     - value: almacena el valor del elemento.
*     - next: almacena la dirección del siguiente Node.
*
* Representación conceptual:
*
*     [ value | next ] -> [ value | next ] -> [ value | nullptr ]
*
* El último Node almacena nullptr en next porque después de él
* no existe otro nodo.
*
* Node utiliza encapsulamiento porque sus atributos son privados.
* Su estado solamente puede consultarse o modificarse mediante
* los métodos definidos por la clase.
*
* También cumple con SRP (Single Responsibility Principle), porque
* tiene una sola responsabilidad: representar un elemento de la
* lista y conservar el enlace hacia el siguiente Node.
*
*/

class Node
{
    private:
        std::string value;
        Node* next;

    public:
        Node(std::string value);

        std::string getValue();
        Node* getNext();
        void setNext(Node* next);
};
