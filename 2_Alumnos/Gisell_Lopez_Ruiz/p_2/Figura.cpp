#include <iostream>

#include "Figura.h"


void Figura::calcularArea()
{
}


void Figura::calcularPerimetro()
{
}


void Figura::imprimirArea()
{
    std::cout << "El area del " << nombre << " es " << area << " unidades cuadradas." << std::endl;
}


void Figura::imprimirPerimetro()
{
    std::cout << "El perimetro del " << nombre << " es " << perimetro << " unidades." << std::endl;
}