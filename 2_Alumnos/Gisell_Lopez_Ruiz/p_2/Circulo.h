#pragma once
#include "Figura.h"

class Circulo : public Figura
{
private:
    double radio;

public:
    Circulo(double radio);

    void calcularArea() override;
    void calcularPerimetro() override;
};
