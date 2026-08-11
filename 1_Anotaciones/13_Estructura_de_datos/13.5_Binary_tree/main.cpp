#include <iostream>
#include "BinarySearchTree.h"

/*
* ----------------------------------------------------------------
* APLICACIÓN DE BINARY SEARCH TREE
* ----------------------------------------------------------------
*
* Esta aplicación permite observar el funcionamiento de un árbol
* binario de búsqueda mediante un menú.
*
* El usuario puede agregar números, buscar un valor y mostrar los
* tres recorridos tradicionales del árbol:
*
*     - In-order.
*     - Pre-order.
*     - Post-order.
*
* BinarySearchTree coloca los valores menores a la izquierda y los
* mayores a la derecha. Por esa razón, el recorrido in-order permite
* mostrar los números ordenados de menor a mayor.
*
* main() se encarga de la interacción con el usuario, mientras que
* el objeto binarySearchTree administra la creación, los enlaces,
* la búsqueda y los recorridos de los nodos.
*
*/

int main()
{
    enum Actions
    {
        INSERT = 1,
        SEARCH = 2,
        DISPLAY_IN_ORDER = 3,
        DISPLAY_PRE_ORDER = 4,
        DISPLAY_POST_ORDER = 5,
        EXIT = 6
    };

    BinarySearchTree binarySearchTree;
    int option = 0;

    do
    {
        std::cout << "\n--- BINARY SEARCH TREE ---" << std::endl;
        std::cout << "1. Agregar elemento" << std::endl;
        std::cout << "2. Buscar elemento" << std::endl;
        std::cout << "3. Mostrar recorrido in-order" << std::endl;
        std::cout << "4. Mostrar recorrido pre-order" << std::endl;
        std::cout << "5. Mostrar recorrido post-order" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Seleccionar una opción: ";
        std::cin >> option;

        switch (option)
        {
        case INSERT:
        {
            int value = 0;
            std::cout << "Ingresar elemento: ";
            std::cin >> value;
            binarySearchTree.insert(value);
            break;
        }
        case SEARCH:
        {
            int value = 0;
            std::cout << "Ingresar elemento que será buscado: ";
            std::cin >> value;

            if (binarySearchTree.contains(value))
            {
                std::cout << "El elemento fue encontrado." << std::endl;
            }
            else
            {
                std::cout << "El elemento no fue encontrado." << std::endl;
            }

            break;
        }
        case DISPLAY_IN_ORDER:
            binarySearchTree.displayInOrder();
            break;
        case DISPLAY_PRE_ORDER:
            binarySearchTree.displayPreOrder();
            break;
        case DISPLAY_POST_ORDER:
            binarySearchTree.displayPostOrder();
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
