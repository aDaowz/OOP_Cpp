#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree()
{
    /*
    * Al crear BinarySearchTree todavía no existen nodos.
    * Por esa razón, root no apunta a ninguna dirección.
    */
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree()
{
    /*
    * Los nodos fueron creados dinámicamente mediante new.
    * destroy() recorre el árbol y libera cada Node mediante delete.
    */
    destroy(root);
    root = nullptr;
}

bool BinarySearchTree::isEmpty()
{
    return root == nullptr;
}

void BinarySearchTree::insert(int value)
{
    /*
    * new reserva memoria para crear un Node durante la ejecución.
    * newNode almacena la dirección donde fue creado ese nodo.
    */
    Node* newNode = new Node(value);

    /*
    * PRIMER CASO: el árbol está vacío.
    *
    * El nuevo Node se convierte directamente en root.
    */
    if (isEmpty())
    {
        root = newNode;
        std::cout << "Elemento agregado: " << value << std::endl;
        return;
    }

    /*
    * SEGUNDO CASO: el árbol ya contiene nodos.
    *
    * current señala el Node que se está comparando.
    * parent conserva la dirección del nodo anterior para conectar
    * newNode cuando se encuentre una posición disponible.
    */
    Node* current = root;
    Node* parent = nullptr;

    while (current != nullptr)
    {
        parent = current;

        if (value < current->getValue())
        {
            current = current->getLeft();
        }
        else if (value > current->getValue())
        {
            current = current->getRight();
        }
        else
        {
            /*
            * El valor ya existe. newNode no será utilizado y debe
            * liberarse antes de terminar el método.
            */
            delete newNode;
            std::cout << "El elemento ya existe." << std::endl;
            return;
        }
    }

    /*
    * Al terminar el ciclo, current contiene nullptr y parent señala
    * el Node bajo el cual debe conectarse newNode.
    */
    if (value < parent->getValue())
    {
        parent->setLeft(newNode);
    }
    else
    {
        parent->setRight(newNode);
    }

    std::cout << "Elemento agregado: " << value << std::endl;
}

bool BinarySearchTree::contains(int value)
{
    /*
    * La búsqueda comienza en root. En cada comparación se descarta
    * una de las dos ramas:
    *
    *     - Un valor menor debe buscarse en left.
    *     - Un valor mayor debe buscarse en right.
    */
    Node* current = root;

    while (current != nullptr)
    {
        if (value == current->getValue())
        {
            return true;
        }

        if (value < current->getValue())
        {
            current = current->getLeft();
        }
        else
        {
            current = current->getRight();
        }
    }

    return false;
}

void BinarySearchTree::displayInOrder()
{
    if (isEmpty())
    {
        std::cout << "El árbol está vacío." << std::endl;
        return;
    }

    std::cout << "Recorrido in-order: ";
    displayInOrder(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayInOrder(Node* current)
{
    /*
    * Un método recursivo se invoca a sí mismo para resolver una
    * operación a partir de una parte más pequeña del problema.
    *
    * El caso base ocurre cuando current contiene nullptr. En ese
    * momento no existe otro Node que recorrer y el método termina.
    *
    * El recorrido in-order sigue este orden:
    *
    *     1. Subárbol izquierdo.
    *     2. Nodo actual.
    *     3. Subárbol derecho.
    *
    * En un BinarySearchTree, este recorrido muestra los valores
    * ordenados de menor a mayor.
    */
    if (current == nullptr)
    {
        return;
    }

    displayInOrder(current->getLeft());
    std::cout << current->getValue() << " ";
    displayInOrder(current->getRight());
}

void BinarySearchTree::displayPreOrder()
{
    if (isEmpty())
    {
        std::cout << "El árbol está vacío." << std::endl;
        return;
    }

    std::cout << "Recorrido pre-order: ";
    displayPreOrder(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayPreOrder(Node* current)
{
    /*
    * El recorrido pre-order sigue este orden:
    *
    *     1. Nodo actual.
    *     2. Subárbol izquierdo.
    *     3. Subárbol derecho.
    */
    if (current == nullptr)
    {
        return;
    }

    std::cout << current->getValue() << " ";
    displayPreOrder(current->getLeft());
    displayPreOrder(current->getRight());
}

void BinarySearchTree::displayPostOrder()
{
    if (isEmpty())
    {
        std::cout << "El árbol está vacío." << std::endl;
        return;
    }

    std::cout << "Recorrido post-order: ";
    displayPostOrder(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayPostOrder(Node* current)
{
    /*
    * El recorrido post-order sigue este orden:
    *
    *     1. Subárbol izquierdo.
    *     2. Subárbol derecho.
    *     3. Nodo actual.
    */
    if (current == nullptr)
    {
        return;
    }

    displayPostOrder(current->getLeft());
    displayPostOrder(current->getRight());
    std::cout << current->getValue() << " ";
}

void BinarySearchTree::destroy(Node* current)
{
    /*
    * Los hijos deben liberarse antes que su Node padre.
    * Este orden evita perder las direcciones de los subárboles.
    */
    if (current == nullptr)
    {
        return;
    }

    destroy(current->getLeft());
    destroy(current->getRight());
    delete current;
}
