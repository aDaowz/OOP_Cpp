#pragma once

/*
* ----------------------------------------------------------------
* NODO DE UN ÁRBOL BINARIO (BINARY TREE NODE)
* ----------------------------------------------------------------
*
* En esta implementación orientada a objetos, un nodo es un objeto
* utilizado para almacenar información dentro de un árbol binario.
* Cada nodo es una instancia de la clase Node.
*
* Cada Node contiene tres partes:
*
*     - value: almacena el valor del elemento.
*     - left: almacena la dirección del Node ubicado a la izquierda.
*     - right: almacena la dirección del Node ubicado a la derecha.
*
* Representación conceptual:
*
*              [ value ]
*               /     \
*            left     right
*
* left y right pueden contener la dirección de otro Node o nullptr
* cuando no existe un nodo en esa dirección.
*
* Los nodos conectados debajo de otro nodo reciben el nombre de hijos.
* El nodo que se encuentra arriba de ellos recibe el nombre de padre.
*
* Node utiliza encapsulamiento porque sus atributos son privados.
* Su estado solamente puede consultarse o modificarse mediante los
* métodos definidos por la clase.
*
* También cumple con SRP (Single Responsibility Principle), porque
* tiene una sola responsabilidad: representar un elemento del árbol
* y conservar los enlaces hacia sus posibles hijos.
*
*/

class Node
{
private:
    int value;
    Node* left;
    Node* right;

public:
    Node(int value);

    int getValue();

    Node* getLeft();
    void setLeft(Node* left);

    Node* getRight();
    void setRight(Node* right);
};
