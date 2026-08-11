#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList()
{
    /*
    * Al crear DoublyLinkedList todavía no existen nodos.
    * Por esa razón, head y tail no apuntan a ninguna dirección.
    */
    head = nullptr;
    tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList()
{
    /*
    * Los nodos fueron creados dinámicamente mediante new.
    * Antes de destruir DoublyLinkedList, cada Node debe liberarse
    * mediante delete.
    *
    * current comienza en head y avanza mediante getNext().
    * No es necesario retroceder mediante previous para liberar la lista.
    */
    Node* current = head;

    while (current != nullptr)
    {
        Node* nodeToDelete = current;
        current = current->getNext();
        delete nodeToDelete;
    }

    head = nullptr;
    tail = nullptr;
}

bool DoublyLinkedList::isEmpty()
{
    return head == nullptr;
}

void DoublyLinkedList::append(std::string value)
{
    /*
    * new reserva memoria para crear un Node durante la ejecución.
    * newNode almacena la dirección donde fue creado ese nodo.
    */
    Node* newNode = new Node(value);

    /*
    * PRIMER CASO: la lista está vacía.
    *
    * El nuevo nodo es al mismo tiempo el primero y el último.
    * Por esa razón, head y tail apuntan al mismo Node.
    */
    if (isEmpty())
    {
        head = newNode;
        tail = newNode;

        std::cout << "Elemento agregado: " << value << std::endl;
        return;
    }

    /*
    * SEGUNDO CASO: la lista ya contiene nodos.
    *
    * newNode debe guardar en previous la dirección del antiguo tail.
    * El antiguo tail debe guardar en next la dirección de newNode.
    *
    * Antes:
    *
    *     tail
    *       |
    *       v
    *     [ A ] -> nullptr
    *
    * Después de conectar:
    *
    *     [ A ] <-> [ newNode ]
    *
    * Finalmente, tail cambia para señalar a newNode.
    */
    newNode->setPrevious(tail);
    tail->setNext(newNode);
    tail = newNode;

    std::cout << "Elemento agregado: " << value << std::endl;
}

void DoublyLinkedList::remove(std::string value)
{
    if (isEmpty())
    {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    /*
    * current recorre la lista desde head hasta encontrar el primer
    * Node cuyo value coincida con el valor buscado.
    */
    Node* current = head;

    while (current != nullptr && current->getValue() != value)
    {
        current = current->getNext();
    }

    if (current == nullptr)
    {
        std::cout << "El elemento no fue encontrado." << std::endl;
        return;
    }

    /*
    * Para retirar current deben actualizarse hasta dos enlaces:
    *
    *     1. El next del nodo anterior.
    *     2. El previous del nodo siguiente.
    *
    * Antes:
    *
    *     previous <-> current <-> next
    *
    * Después:
    *
    *     previous <-----------> next
    */

    /*
    * Si current es head, no existe un nodo anterior.
    * Por esa razón, head debe avanzar hacia el siguiente Node.
    */
    if (current == head)
    {
        head = current->getNext();
    }
    else
    {
        current->getPrevious()->setNext(current->getNext());
    }

    /*
    * Si current es tail, no existe un nodo siguiente.
    * Por esa razón, tail debe retroceder hacia el Node anterior.
    */
    if (current == tail)
    {
        tail = current->getPrevious();
    }
    else
    {
        current->getNext()->setPrevious(current->getPrevious());
    }

    /*
    * Si todavía existen nodos, los extremos deben terminar en nullptr:
    *
    *     head->previous = nullptr
    *     tail->next = nullptr
    *
    * Cuando se elimina el único Node, head y tail quedan en nullptr.
    */
    if (head != nullptr)
    {
        head->setPrevious(nullptr);
    }

    if (tail != nullptr)
    {
        tail->setNext(nullptr);
    }

    delete current;

    std::cout << "Elemento retirado: " << value << std::endl;
}

void DoublyLinkedList::displayForward()
{
    if (isEmpty())
    {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    /*
    * El recorrido hacia adelante comienza en head.
    * current avanza mediante next hasta encontrar nullptr.
    */
    Node* current = head;

    std::cout << "Recorrido hacia adelante: ";

    while (current != nullptr)
    {
        std::cout << current->getValue();
        current = current->getNext();

        if (current != nullptr)
        {
            std::cout << " <-> ";
        }
    }

    std::cout << std::endl;
}

void DoublyLinkedList::displayBackward()
{
    if (isEmpty())
    {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    /*
    * El recorrido hacia atrás comienza en tail.
    * current retrocede mediante previous hasta encontrar nullptr.
    */
    Node* current = tail;

    std::cout << "Recorrido hacia atrás: ";

    while (current != nullptr)
    {
        std::cout << current->getValue();
        current = current->getPrevious();

        if (current != nullptr)
        {
            std::cout << " <-> ";
        }
    }

    std::cout << std::endl;
}
