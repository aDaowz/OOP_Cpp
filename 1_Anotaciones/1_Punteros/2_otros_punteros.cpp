#include <iostream>

int main()
{
    std::cout << "==================================================================================================================\n\n";
    std::cout << "DOBLE PUNTERO" << "\n\n";

    std::cout << "Un doble puntero en C++ es un puntero que apunta a otro puntero; es decir, que puede acceder a la dirección de memoria de otro puntero" << std::endl << std::endl;

    int num = 10;
    int* ptrNormal = &num;

    // Valor normal de variable
        std::cout << "num: " << num << std::endl;   // 10    

    // Dirección de memoria con &
        std::cout << "&num: " << &num << std::endl;   // 000000CCB94FF3B4

    // Valor de ptrNormal (que es un puntero que obtiene la direccion de memoria de num)
        std::cout << "ptrNormal: " << ptrNormal << std::endl;   // 000000CCB94FF3B4

    // Desreferencia de ptrNormal
        std::cout << "*ptrNormal: " << *ptrNormal << std::endl << std::endl;   // 10

    int** doblePtr = &ptrNormal;

    // Valor DESREFERENCIADO DE ptrNormal
        std::cout << "Valor apuntado por *ptrNormal: " << *ptrNormal << std::endl;   // 10

    // Valor del puntero original (direccion de memoria almacenada en ptrNormal)
        std::cout << "Direccion almacenada en *doblePtr: " << *doblePtr << std::endl;   // 000000CCB94FF3B4

    // Valor devuelto por el doble puntero. Está desreferenciado con doble **
        std::cout << "Valor apuntado por **doblePtr: " << **doblePtr << std::endl;   // 10


    std::cout << "==================================================================================================================\n\n";
    std::cout << "PUNTEROS DINAMICOS" << "\n\n";
    

    std::cout << "Los punteros dinámicos en C++ se usan para manejar la memoria de manera dinámica, es decir, asignar memoria durante la ejecución del programa (en lugar de en tiempo de compilación). Esto se hace generalmente usando las palabras clave new y delete" << std::endl << std::endl;

    std::cout << "Cuando creas una variable estática, como int x = 10;, la memoria para esa variable se asigna en el stack, y el sistema operativo la administra automáticamente. Sin embargo, cuando usas memoria dinámica, el developer es responsable de asignarla y liberarla manualmente." << std::endl << std::endl;

    int* ptrDinamico = new int;   // Asignamos dinámicamente espacio para un entero

    *ptrDinamico = 42;  // Guardamos el valor 42 en esa ubicación de memoria

    std::cout << "Valor de *ptr: " << *ptrDinamico << std::endl;  // 42. Imprimimos el valor almacenado

    delete ptrDinamico;  // Liberamos la memoria asignada dinámicamente


    std::cout << "------------------------------------------------------------------------------------------------------------------\n\n";
    std::cout << "Creacion de arrays (normal)" << "\n\n";

    const int n = 5;  // Tamaño del array definido como constante
    int arrayNormal[n];       // Array estático

    // Llenamos el array con valores
    for (int i = 0; i < n; i++) {
        arrayNormal[i] = i + 1;
    }

    // Mostramos el array
    for (int i = 0; i < n; i++) {
        std::cout << "arrayNormal[" << i << "] = " << arrayNormal[i] << std::endl;
    }

    std::cout << "------------------------------------------------------------------------------------------------------------------\n\n";
    std::cout << "Asignacion dinamica de arrays (ejemplo)" << "\n\n";

    int size;
    std::cout << "Introduce el tamaño del array: ";
    std::cin >> size;

    // Asignación dinámica de un array
    int* dynamicArray = new int[size];

    // Llenamos el array con valores
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    // Mostramos el array
    for (int i = 0; i < size; i++) {
        std::cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << std::endl;
    }

    // Liberamos la memoria
    delete[] dynamicArray; // En una máquina virtual implementad por java ó c#, aquí entraría en juego el Garbage Collector.

    return 0;
}
