#include <iostream>
#include <string>
#include "Stack.h"

/*
* ----------------------------------------------------------------
* APLICACIÓN DE STACK
* ----------------------------------------------------------------
*
* Esta aplicación permite observar el comportamiento LIFO de Stack
* mediante un menú. El usuario puede agregar elementos, retirar el
* último elemento o consultar cuál se encuentra en la parte superior.
*
* main() se encarga de la interacción con el usuario, mientras que el
* objeto stack administra internamente el almacenamiento y las
* operaciones de la pila.
*
*/

int main()
{
    enum Actions
    {
        ADD = 1,
        REMOVE = 2,
        VIEW = 3,
        EXIT = 4
    };

    Stack stack;
    int option = 0;

    do
    {
        std::cout << "\n--- STACK ---" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Retirar elemento" << std::endl;
        std::cout << "3. Consultar último elemento" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccionar una opción: ";
        std::cin >> option;

        switch (option)
        {
            case ADD:
            {
                std::string element;
                std::cout << "Ingresar elemento: ";
                std::cin >> element;
                stack.push(element);
                break;
            }
            case REMOVE:
                stack.pop();
                break;
            case VIEW:
                stack.peek();
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
