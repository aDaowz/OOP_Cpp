#include <iostream>
#include <string>
#include "LinkedList.h"

/*
* ----------------------------------------------------------------
* APLICACIÓN DE LINKED LIST
* ----------------------------------------------------------------
*
* Esta aplicación permite observar el funcionamiento de una lista
* simplemente enlazada mediante un menú.
*
* El usuario puede agregar elementos al final de LinkedList, retirar
* un elemento mediante su valor y mostrar el recorrido completo desde
* head hasta encontrar nullptr.
*
* main() se encarga de la interacción con el usuario, mientras que el
* objeto linkedList administra la creación, los enlaces y la eliminación
* de los nodos.
*
*/

int main()
{
    enum Actions
    {
        ADD = 1,
        REMOVE = 2,
        DISPLAY = 3,
        EXIT = 4
    };

    LinkedList linkedList;
    int option = 0;

    do
    {
        std::cout << "\n--- LINKED LIST ---" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Retirar elemento" << std::endl;
        std::cout << "3. Mostrar elementos" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccionar una opción: ";
        std::cin >> option;

        switch (option)
        {
            case ADD:
            {
                std::string value;
                std::cout << "Ingresar elemento: ";
                std::cin >> value;
                linkedList.append(value);
                break;
            }
            case REMOVE:
            {
                std::string value;
                std::cout << "Ingresar elemento que será retirado: ";
                std::cin >> value;
                linkedList.remove(value);
                break;
            }
            case DISPLAY:
                linkedList.display();
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
