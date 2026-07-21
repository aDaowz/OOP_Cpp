#pragma once

#include <string>

/*
* ----------------------------------------------------------------
* PILAS (STACK)
* ----------------------------------------------------------------
*
* Una pila es una estructura de datos lineal que sigue el principio:
*
*     LIFO (Last In, First Out)
*     El último elemento en entrar es el primero en salir.
*
* Sus operaciones principales son:
*
*     - push(): agrega un elemento en la parte superior de Stack.
*     - pop(): retira el último elemento agregado.
*     - peek(): consulta el último elemento sin retirarlo.
*
* En esta implementación, Stack utiliza un arreglo de capacidad fija.
* El atributo topIndex indica el índice del elemento que se encuentra
* en la parte superior. Cuando Stack está vacía, topIndex vale -1.
*
* Los atributos elements y topIndex son privados porque solamente
* Stack debe administrar su almacenamiento y sus posiciones. Esto aplica
* encapsulamiento, ya que el estado interno de Stack no puede modificarse
* directamente desde otras partes del programa.
*
* Esta clase también cumple con SRP (Single Responsibility Principle),
* porque tiene una sola responsabilidad: administrar el almacenamiento
* y las operaciones de una pila. Stack no se encarga de mostrar el menú
* ni de solicitar datos al usuario; esas acciones pertenecen a main().
*
*/

class Stack
{
    private:
        static const int CAPACITY = 5;
        std::string elements[CAPACITY];
        int topIndex;

    public:
        Stack();

        void push(std::string element);
        void pop();
        void peek();

        bool isEmpty();
        bool isFull();
};
