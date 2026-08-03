#include "Nodo.h"

Nodo::Nodo(int codigo, string nombreLibro)
{
    this->codigo = codigo;
    this->nombreLibro = nombreLibro;

    izquierda = NULL;
    derecha = NULL;
}