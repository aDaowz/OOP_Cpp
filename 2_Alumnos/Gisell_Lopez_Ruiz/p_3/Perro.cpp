#include <iostream>
#include "Perro.h"

Perro::Perro(std::string nombre, int edad)
    : Animal(nombre, edad)
{
}

void Perro::hacerSonido()
{
    std::cout << nombre << " dice: Guau Guau" << std::endl;
}