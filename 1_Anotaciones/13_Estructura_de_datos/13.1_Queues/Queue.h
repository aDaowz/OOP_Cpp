#pragma once

#include <string>

/*
* ----------------------------------------------------------------
* COLAS (QUEUE)
* ----------------------------------------------------------------
*
* Una cola es una estructura de datos lineal que sigue el principio:
*
*     FIFO (First In, First Out)
*     El primer elemento en entrar es el primero en salir.
*
* Sus operaciones principales son:
*
*     - enqueue(): agrega un elemento al final de Queue.
*     - dequeue(): retira el primer elemento de Queue.
*     - front(): consulta el primer elemento sin retirarlo.
*
* En esta implementación, Queue utiliza un arreglo de capacidad fija.
* Cuando dequeue() retira el primer elemento, los elementos restantes
* se desplazan una posición para mantener el frente en el índice 0.
*
* Los atributos elements y elementCount son privados porque solamente
* Queue debe administrar su almacenamiento y sus posiciones. Esto aplica
* encapsulamiento, ya que el estado interno de Queue no puede modificarse
* directamente desde otras partes del programa.
*
* Esta clase también cumple con SRP (Single Responsibility Principle),
* porque tiene una sola responsabilidad: administrar el almacenamiento
* y las operaciones de una cola. Queue no se encarga de mostrar el menú
* ni de solicitar datos al usuario; esas acciones pertenecen a main().
*
*/

class Queue
{
    private:
        static const int CAPACITY = 5;
        std::string elements[CAPACITY];
        int elementCount;

    public:
        Queue();

        void enqueue(std::string element);
        void dequeue();
        void front();

        bool isEmpty();
        bool isFull();
};
