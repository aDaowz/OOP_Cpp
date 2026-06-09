#include "Trapecio.h"

Trapecio::Trapecio(double baseMayor,
    double baseMenor,
    double altura,
    double lado1,
    double lado2)
{
    nombre = "trapecio";

    this->baseMayor = baseMayor;
    this->baseMenor = baseMenor;
    this->altura = altura;
    this->lado1 = lado1;
    this->lado2 = lado2;
}

void Trapecio::calcularArea()
{
    area = ((baseMayor + baseMenor) * altura) / 2;
}

void Trapecio::calcularPerimetro()
{
    perimetro = baseMayor + baseMenor + lado1 + lado2;
}