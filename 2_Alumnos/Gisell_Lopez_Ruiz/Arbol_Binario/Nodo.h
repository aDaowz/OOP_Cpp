#ifndef NODO_H
#define NODO_H

#include <string>

using namespace std;

class Nodo
{
public:
    int codigo;
    string nombreLibro;

    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int codigo, string nombreLibro);
};

#endif

