#include "Triangulo.h"

Triangulo::Triangulo(double base,
    double altura,
    double lado1,
    double lado2)
{
    nombre = "triangulo";

    this->base = base;
    this->altura = altura;
    this->lado1 = lado1;
    this->lado2 = lado2;
}

void Triangulo::calcularArea()
{
    area = (base * altura) / 2;
}

void Triangulo::calcularPerimetro()
{
    perimetro = base + lado1 + lado2;
}