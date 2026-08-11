#include "Node.h"

Node::Node(std::string value)
{
    this->value = value;

    /*
    * Cuando se crea un Node, todavía no está conectado con otros nodos.
    * Por esa razón, previous y next comienzan con nullptr.
    */
    this->previous = nullptr;
    this->next = nullptr;
}

std::string Node::getValue()
{
    return value;
}

Node* Node::getPrevious()
{
    return previous;
}

void Node::setPrevious(Node* previous)
{
    /*
    * previous almacena la dirección del nodo que deberá encontrarse
    * antes del objeto actual.
    */
    this->previous = previous;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node* next)
{
    /*
    * next almacena la dirección del nodo que deberá encontrarse
    * después del objeto actual.
    */
    this->next = next;
}
