#include "Triangulo.h"
#include <cmath>

Triangulo::Triangulo(double base,
    double lado1,
    double lado2)
{
    nombre = "triangulo";

    this->base = base;
    this->lado1 = lado1;
    this->lado2 = lado2;
}

void Triangulo::calcularArea()
{
    // Validar que sea un triángulo válido
    if (base + lado1 <= lado2 ||
        base + lado2 <= lado1 ||
        lado1 + lado2 <= base)
    {
        area = 0;
        return;
    }

    double s = (base + lado1 + lado2) / 2;

    area = sqrt(
        s *
        (s - base) *
        (s - lado1) *
        (s - lado2)
    );
}

void Triangulo::calcularPerimetro()
{
    perimetro = base + lado1 + lado2;
}