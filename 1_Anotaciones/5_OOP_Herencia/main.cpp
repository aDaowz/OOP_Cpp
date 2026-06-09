#include <iostream>
#include "Cuadrado.h"

int main()
{
    Cuadrado cuadrado(5);

    cuadrado.calcularArea();
    cuadrado.calcularPerimetro();

    cuadrado.imprimirArea();
    cuadrado.imprimirPerimetro();

    return 0;
}