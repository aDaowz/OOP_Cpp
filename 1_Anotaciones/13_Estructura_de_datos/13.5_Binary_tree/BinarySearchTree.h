#pragma once

#include "Node.h"

/*
* ----------------------------------------------------------------
* ÁRBOL BINARIO DE BÚSQUEDA (BINARY SEARCH TREE)
* ----------------------------------------------------------------
*
* Un árbol es una estructura de datos no lineal formada por nodos
* conectados mediante relaciones jerárquicas.
*
* A diferencia de una lista, los nodos no forman una sola secuencia.
* Desde un nodo pueden comenzar diferentes caminos o ramas.
*
* Un árbol binario permite que cada Node tenga como máximo dos hijos:
*
*     - Un hijo izquierdo.
*     - Un hijo derecho.
*
* BinarySearchTree representa un tipo particular de árbol binario
* llamado árbol binario de búsqueda. Sus valores se organizan de
* acuerdo con la siguiente regla:
*
*     - Los valores menores se colocan a la izquierda.
*     - Los valores mayores se colocan a la derecha.
*
* Ejemplo después de insertar 50, 30, 70, 20 y 40:
*
*                  50
*                /    \
*              30      70
*             /  \
*           20    40
*
* Esta organización permite decidir qué camino seguir al insertar
* o buscar un valor, sin revisar necesariamente todos los nodos.
*
* BinarySearchTree conserva un puntero llamado root:
*
*     root
*       |
*       v
*     [ Node ]
*
* root almacena la dirección del primer Node del árbol. Este nodo
* recibe el nombre de raíz. Cuando el árbol está vacío, root contiene
* nullptr.
*
* Otros conceptos importantes:
*
*     - Parent: nodo que tiene uno o más hijos.
*     - Child: nodo conectado debajo de otro nodo.
*     - Leaf: nodo que no tiene hijos.
*     - Subtree: árbol formado a partir de uno de los hijos.
*     - Level: posición jerárquica de un nodo dentro del árbol.
*
* Operaciones de esta implementación:
*
*     - insert(): agrega un valor respetando el orden del árbol.
*     - contains(): determina si un valor se encuentra en el árbol.
*     - displayInOrder(): muestra los valores de menor a mayor.
*     - displayPreOrder(): muestra primero cada raíz.
*     - displayPostOrder(): muestra cada raíz después de sus hijos.
*     - isEmpty(): comprueba si el árbol está vacío.
*
* Esta implementación no admite valores repetidos. Un valor que ya
* existe en el árbol no vuelve a insertarse.
*
* El atributo root es privado porque solamente BinarySearchTree debe
* administrar el inicio y los enlaces de la estructura. Esto aplica
* encapsulamiento.
*
* BinarySearchTree también cumple con SRP (Single Responsibility
* Principle), porque tiene una sola responsabilidad: administrar los
* nodos y las operaciones del árbol binario de búsqueda. El menú y la
* captura de datos pertenecen a main().
*
*/

class BinarySearchTree
{
private:
    Node* root;

    void displayInOrder(Node* current);
    void displayPreOrder(Node* current);
    void displayPostOrder(Node* current);
    void destroy(Node* current);

public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int value);
    bool contains(int value);
    void displayInOrder();
    void displayPreOrder();
    void displayPostOrder();
    bool isEmpty();
};
