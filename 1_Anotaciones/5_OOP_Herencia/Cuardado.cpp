#include "Cuadrado.h"

Cuadrado::Cuadrado(double lado)
{
    nombre = "cuadrado";
    this->lado = lado;
}

void Cuadrado::calcularArea()
{
    area = lado * lado;
}

void Cuadrado::calcularPerimetro()
{
    perimetro = 4 * lado;
}