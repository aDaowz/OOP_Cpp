#include "Circulo.h"
#include "Circulo.h"

#define PI 3.14159265359

Circulo::Circulo(double radio)
{
    nombre = "circulo";
    this->radio = radio;
}

void Circulo::calcularArea()
{
    area = PI * radio * radio;
}

void Circulo::calcularPerimetro()
{
    perimetro = 2 * PI * radio;
}