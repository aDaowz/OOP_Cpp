#pragma once
#include "Figura.h"

    class Rectangulo : public Figura
    {
    private:
        double base;
        double altura;

    public:
        Rectangulo(double base, double altura);

        void calcularArea() override;
        void calcularPerimetro() override;
    };
