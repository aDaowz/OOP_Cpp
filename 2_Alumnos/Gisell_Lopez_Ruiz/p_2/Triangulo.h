#pragma once
#include "Figura.h"

class Triangulo : public Figura
{
private:
    double base;
    double altura;
    double lado1;
    double lado2;

public:
    Triangulo(double base, double altura, double lado1, double lado2);

    void calcularArea() override;
    void calcularPerimetro() override;
};