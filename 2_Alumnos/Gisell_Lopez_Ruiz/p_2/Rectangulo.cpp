#include "Rectangulo.h"

Rectangulo::Rectangulo(double base, double altura)
{
    nombre = "rectangulo";
    this->base = base;
    this->altura = altura;
}

void Rectangulo::calcularArea()
{
    area = base * altura;
}

void Rectangulo::calcularPerimetro()
{
    perimetro = 2 * (base + altura);
}