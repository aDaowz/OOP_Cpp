#pragma once

#include <string>

class Figura
{
protected:

    std::string nombre;
    double area;
    double perimetro;

public:

    virtual void calcularArea();
    virtual void calcularPerimetro();

    void imprimirArea();
    void imprimirPerimetro();
};
