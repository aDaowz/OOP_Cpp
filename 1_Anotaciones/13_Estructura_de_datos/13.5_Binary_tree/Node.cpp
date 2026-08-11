#include "Node.h"

Node::Node(int value)
{
    this->value = value;

    /*
    * Cuando se crea un Node todavía no tiene hijos.
    * Por esa razón, left y right comienzan con nullptr.
    */
    left = nullptr;
    right = nullptr;
}

int Node::getValue()
{
    return value;
}

Node* Node::getLeft()
{
    return left;
}

void Node::setLeft(Node* left)
{
    /*
    * left recibe la dirección del Node que será conectado
    * como hijo izquierdo.
    */
    this->left = left;
}

Node* Node::getRight()
{
    return right;
}

void Node::setRight(Node* right)
{
    /*
    * right recibe la dirección del Node que será conectado
    * como hijo derecho.
    */
    this->right = right;
}
