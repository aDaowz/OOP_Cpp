#include "ArbolBinario.h"
#include <iostream>

using namespace std;

//=========================
// Constructor
//=========================
ArbolBinario::ArbolBinario()
{
    raiz = NULL;
}

//=========================
// Insertar (Privado)
//=========================
Nodo* ArbolBinario::insertar(Nodo* nodo, int codigo, string nombre)
{
    if (nodo == NULL)
    {
        return new Nodo(codigo, nombre);
    }

    if (codigo < nodo->codigo)
    {
        nodo->izquierda = insertar(nodo->izquierda, codigo, nombre);
    }
    else if (codigo > nodo->codigo)
    {
        nodo->derecha = insertar(nodo->derecha, codigo, nombre);
    }
    else
    {
        cout << "\nEl codigo ya existe.\n";
    }

    return nodo;
}

//=========================
// Buscar (Privado)
//=========================
Nodo* ArbolBinario::buscar(Nodo* nodo, int codigo)
{
    if (nodo == NULL)
    {
        return NULL;
    }

    if (nodo->codigo == codigo)
    {
        return nodo;
    }

    if (codigo < nodo->codigo)
    {
        return buscar(nodo->izquierda, codigo);
    }

    return buscar(nodo->derecha, codigo);
}

//=========================
// Recorrido InOrden (Privado)
//=========================
void ArbolBinario::inOrden(Nodo* nodo)
{
    if (nodo != NULL)
    {
        inOrden(nodo->izquierda);

        cout << "Codigo: " << nodo->codigo
            << " | Libro: " << nodo->nombreLibro << endl;

        inOrden(nodo->derecha);
    }
}

//=========================
// Insertar Libro (Publico)
//=========================
void ArbolBinario::insertarLibro(int codigo, string nombre)
{
    raiz = insertar(raiz, codigo, nombre);
}

//=========================
// Buscar Libro (Publico)
//=========================
void ArbolBinario::buscarLibro(int codigo)
{
    Nodo* libro = buscar(raiz, codigo);

    if (libro != NULL)
    {
        cout << "\n===== LIBRO ENCONTRADO =====\n";
        cout << "Codigo: " << libro->codigo << endl;
        cout << "Nombre: " << libro->nombreLibro << endl;
    }
    else
    {
        cout << "\nEl libro no existe en la biblioteca.\n";
    }
}

//=========================
// Mostrar Libros (Publico)
//=========================
void ArbolBinario::mostrarLibros()
{
    if (raiz == NULL)
    {
        cout << "\nNo hay libros registrados.\n";
        return;
    }

    cout << "\n===== LIBROS REGISTRADOS =====\n\n";

    inOrden(raiz);
}