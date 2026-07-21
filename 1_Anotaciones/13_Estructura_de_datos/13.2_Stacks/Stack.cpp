#include "Stack.h"
#include <iostream>

Stack::Stack()
{
    topIndex = -1;
}

bool Stack::isEmpty()
{
    return topIndex == -1;
}

bool Stack::isFull()
{
    return topIndex == CAPACITY - 1;
}

void Stack::push(std::string element)
{
    if (isFull())
    {
        std::cout << "La pila está llena." << std::endl;
        return;
    }

    /*
    * topIndex avanza primero para señalar la nueva posición superior.
    * Después, element se almacena en esa posición.
    */
    topIndex++;
    elements[topIndex] = element;

    std::cout << "Elemento agregado: " << element << std::endl;
}

void Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "La pila está vacía." << std::endl;
        return;
    }

    std::string removedElement = elements[topIndex];

    /*
    * El elemento superior deja de pertenecer a Stack cuando topIndex
    * retrocede una posición. Antes de retroceder, se limpia la posición
    * que estaba ocupada por el elemento retirado.
    */
    elements[topIndex] = "";
    topIndex--;

    std::cout << "Elemento retirado: " << removedElement << std::endl;
}

void Stack::peek()
{
    if (isEmpty())
    {
        std::cout << "La pila está vacía." << std::endl;
        return;
    }

    std::cout << "Último elemento: " << elements[topIndex] << std::endl;
}
