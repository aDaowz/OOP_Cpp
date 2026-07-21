#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
{
    /*
    * Al crear LinkedList todavía no existen nodos.
    * Por esa razón, head no apunta a ninguna dirección.
    */
    head = nullptr;
}

LinkedList::~LinkedList()
{
    /*
    * Los nodos fueron creados dinámicamente mediante new.
    * Antes de destruir LinkedList, cada Node debe liberarse mediante
    * delete para evitar que su espacio permanezca ocupado en memoria.
    *
    * current señala el nodo que será eliminado. Antes de eliminarlo,
    * head avanza hacia el siguiente nodo para no perder el resto
    * de la lista.
    */
    while (head != nullptr)
    {
        Node* current = head;
        head = head->getNext();
        delete current;
    }
}

bool LinkedList::isEmpty()
{
    return head == nullptr;
}

void LinkedList::append(std::string value)
{
    /*
    * new reserva memoria para crear un Node durante la ejecución.
    * newNode almacena la dirección donde fue creado ese nodo.
    */
    Node* newNode = new Node(value);

    /*
    * Si head contiene nullptr, la lista está vacía.
    * El nuevo nodo se convierte directamente en el primer Node.
    */
    if (isEmpty())
    {
        head = newNode;
        std::cout << "Elemento agregado: " << value << std::endl;
        return;
    }

    /*
    * current es un puntero temporal utilizado para recorrer la lista.
    * Comienza apuntando al mismo Node que head.
    *
    * El operador -> permite invocar un método desde un puntero a objeto.
    * Mientras getNext() no sea nullptr, todavía existe otro nodo.
    */
    Node* current = head;

    while (current->getNext() != nullptr)
    {
        current = current->getNext();
    }

    /*
    * Al terminar el ciclo, current señala el último Node.
    * Su enlace next cambia de nullptr a la dirección de newNode.
    */
    current->setNext(newNode);

    std::cout << "Elemento agregado: " << value << std::endl;
}

void LinkedList::remove(std::string value)
{
    if (isEmpty())
    {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    /*
    * PRIMER CASO: el valor se encuentra en head.
    *
    * head debe avanzar antes de eliminar el primer Node. Si el nodo
    * fuera eliminado primero, se perdería la dirección del resto
    * de la lista.
    */
    if (head->getValue() == value)
    {
        Node* nodeToDelete = head;
        head = head->getNext();
        delete nodeToDelete;

        std::cout << "Elemento retirado: " << value << std::endl;
        return;
    }

    /*
    * SEGUNDO CASO: el valor se encuentra después de head.
    *
    * previous conserva la dirección del nodo anterior.
    * current conserva la dirección del nodo que se está revisando.
    * Ambos punteros avanzan juntos durante el recorrido.
    */
    Node* previous = head;
    Node* current = head->getNext();

    while (current != nullptr && current->getValue() != value)
    {
        previous = current;
        current = current->getNext();
    }

    /*
    * Si current contiene nullptr, el recorrido llegó al final sin
    * encontrar un Node cuyo value coincida con el valor buscado.
    */
    if (current == nullptr)
    {
        std::cout << "El elemento no fue encontrado." << std::endl;
        return;
    }

    /*
    * Para retirar current, previous debe conectarse con el Node que
    * se encuentra después de current.
    *
    * Antes:
    *
    *     previous -> current -> next
    *
    * Después:
    *
    *     previous ----------> next
    *
    * Una vez reconstruido el enlace, current puede liberarse.
    */
    previous->setNext(current->getNext());
    delete current;

    std::cout << "Elemento retirado: " << value << std::endl;
}

void LinkedList::display()
{
    if (isEmpty())
    {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    /*
    * display() utiliza un puntero temporal para recorrer LinkedList.
    * head no debe moverse, porque representa permanentemente el inicio
    * de la lista. Solamente current avanza entre los nodos.
    */
    Node* current = head;

    std::cout << "Elementos: ";

    while (current != nullptr)
    {
        std::cout << current->getValue();
        current = current->getNext();

        if (current != nullptr)
        {
            std::cout << " -> ";
        }
    }

    std::cout << std::endl;
}
