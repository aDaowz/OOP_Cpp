#pragma once
#include "Figura.h"

class Trapecio : public Figura
{
private:
    double baseMayor;
    double baseMenor;
    double altura;
    double lado1;
    double lado2;

public:
    Trapecio(double baseMayor,
        double baseMenor,
        double altura,
        double lado1,
        double lado2);

    void calcularArea() override;
    void calcularPerimetro() override;
};