#include <iostream>
#include "ArbolBinario.h"

using namespace std;

int main()
{
    ArbolBinario biblioteca;

    biblioteca.insertarLibro(105, "Calculo");
    biblioteca.insertarLibro(80, "Programacion");
    biblioteca.insertarLibro(120, "Base de Datos");
    biblioteca.insertarLibro(70, "Matematicas");
    biblioteca.insertarLibro(90, "Redes");
    biblioteca.insertarLibro(110, "Fisica");
    biblioteca.insertarLibro(130, "Inteligencia Artificial");

    int opcion;
    int codigo;
    string nombre;

    do
    {
        cout << "\n===== BIBLIOTECA =====\n";
        cout << "1. Mostrar libros\n";
        cout << "2. Buscar libro\n";
        cout << "3. Agregar libro\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            biblioteca.mostrarLibros();
            break;

        case 2:
            cout << "Codigo: ";
            cin >> codigo;
            biblioteca.buscarLibro(codigo);
            break;

        case 3:
            cout << "Codigo: ";
            cin >> codigo;

            cin.ignore();

            cout << "Nombre: ";
            getline(cin, nombre);

            biblioteca.insertarLibro(codigo, nombre);

            break;

        }

    } while (opcion != 4);

    return 0;
}