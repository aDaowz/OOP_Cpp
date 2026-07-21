#include "Queue.h"
#include <iostream>

Queue::Queue()
{
    elementCount = 0;
}

bool Queue::isEmpty()
{
    return elementCount == 0;
}

bool Queue::isFull()
{
    return elementCount == CAPACITY;
}

void Queue::enqueue(std::string element)
{
    if (isFull())
    {
        std::cout << "La cola está llena." << std::endl;
        return;
    }

    /*
    * elementCount también representa la siguiente posición disponible.
    * Después de guardar element, su valor aumenta para registrar que
    * existe un nuevo elemento dentro de Queue.
    */
    elements[elementCount] = element;
    elementCount++;

    std::cout << "Elemento agregado: " << element << std::endl;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "La cola está vacía." << std::endl;
        return;
    }

    std::string removedElement = elements[0];

    /*
    * El primer elemento se encuentra en el índice 0.
    * Para retirarlo, cada elemento siguiente se copia una posición
    * hacia la izquierda. De esta manera, el segundo elemento pasa
    * a ocupar el frente de Queue.
    */
    for (int index = 0; index < elementCount - 1; index++)
    {
        elements[index] = elements[index + 1];
    }

    elementCount--;
    elements[elementCount] = "";

    std::cout << "Elemento retirado: " << removedElement << std::endl;
}

void Queue::front()
{
    if (isEmpty())
    {
        std::cout << "La cola está vacía." << std::endl;
        return;
    }

    std::cout << "Primer elemento: " << elements[0] << std::endl;
}
