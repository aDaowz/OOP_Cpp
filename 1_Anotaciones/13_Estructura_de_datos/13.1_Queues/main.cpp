#include <iostream>
#include <string>
#include "Queue.h"

/*
* ----------------------------------------------------------------
* APLICACIÓN DE QUEUE
* ----------------------------------------------------------------
*
* Esta aplicación permite observar el comportamiento FIFO de Queue
* mediante un menú. El usuario puede agregar elementos, retirar el
* primer elemento o consultar cuál se encuentra al frente.
*
* main() se encarga de la interacción con el usuario, mientras que el
* objeto queue administra internamente el almacenamiento y las
* operaciones de la cola.
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

    Queue queue;
    int option = 0;

    do
    {
        std::cout << "\n--- QUEUE ---" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Retirar elemento" << std::endl;
        std::cout << "3. Consultar primer elemento" << std::endl;
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
                queue.enqueue(element);
                break;
            }
            case REMOVE:
                queue.dequeue();
                break;
            case VIEW:
                queue.front();
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
