#include <iostream>
#include <string>
#include "DoublyLinkedList.h"

/*
* ----------------------------------------------------------------
* APLICACIÓN DE DOUBLY LINKED LIST
* ----------------------------------------------------------------
*
* Esta aplicación permite observar el funcionamiento de una lista
* doblemente enlazada mediante un menú.
*
* El usuario puede agregar elementos al final de DoublyLinkedList,
* retirar un elemento mediante su valor y recorrer la estructura
* en ambas direcciones:
*
*     - Desde head hacia tail.
*     - Desde tail hacia head.
*
* main() se encarga de la interacción con el usuario, mientras que
* el objeto doublyLinkedList administra la creación, los enlaces y
* la eliminación de los nodos.
*
*/

int main()
{
    enum Actions
    {
        ADD = 1,
        REMOVE = 2,
        DISPLAY_FORWARD = 3,
        DISPLAY_BACKWARD = 4,
        EXIT = 5
    };

    DoublyLinkedList doublyLinkedList;
    int option = 0;

    do
    {
        std::cout << "\n--- DOUBLY LINKED LIST ---" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Retirar elemento" << std::endl;
        std::cout << "3. Mostrar desde head" << std::endl;
        std::cout << "4. Mostrar desde tail" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccionar una opción: ";
        std::cin >> option;

        switch (option)
        {
        case ADD:
        {
            std::string value;
            std::cout << "Ingresar elemento: ";
            std::cin >> value;
            doublyLinkedList.append(value);
            break;
        }
        case REMOVE:
        {
            std::string value;
            std::cout << "Ingresar elemento que será retirado: ";
            std::cin >> value;
            doublyLinkedList.remove(value);
            break;
        }
        case DISPLAY_FORWARD:
            doublyLinkedList.displayForward();
            break;
        case DISPLAY_BACKWARD:
            doublyLinkedList.displayBackward();
            break;
        case EXIT:
            std::cout << "Saliendo de la aplicación..." << std::endl;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
        }
    } while (option != EXIT);

    return 0;
}
