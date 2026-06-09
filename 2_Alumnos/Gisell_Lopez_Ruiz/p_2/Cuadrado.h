#pragma once

#include "Figura.h"

class Cuadrado : public Figura
{
private:
    double lado;

public:
    Cuadrado(double lado);

    void calcularArea() override;
    void calcularPerimetro() override;
};
