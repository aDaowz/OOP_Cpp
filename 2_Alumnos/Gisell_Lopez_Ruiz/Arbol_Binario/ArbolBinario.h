#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "Nodo.h"

class ArbolBinario
{
private:

    Nodo* raiz;

    Nodo* insertar(Nodo* nodo, int codigo, string nombre);
    Nodo* buscar(Nodo* nodo, int codigo);
    void inOrden(Nodo* nodo);

public:

    ArbolBinario();

    void insertarLibro(int codigo, string nombre);

    void buscarLibro(int codigo);

    void mostrarLibros();
};

#endif