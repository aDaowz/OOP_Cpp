#include "Node.h"

Node::Node(std::string value)
{
    this->value = value;

    /*
    * Cuando se crea un Node, todavía no existe un siguiente nodo.
    * Por esa razón, next comienza con el valor nullptr.
    *
    * nullptr representa la ausencia de una dirección de memoria.
    */
    this->next = nullptr;
}

std::string Node::getValue()
{
    return value;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node* next)
{
    /*
    * El parámetro next contiene la dirección del nodo que deberá
    * ocupar la siguiente posición dentro de la lista.
    */
    this->next = next;
}
