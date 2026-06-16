
#include <iostream>
#include "Gato.h"

Gato::Gato(std::string nombre, int edad)
    : Animal(nombre, edad)
{
}

void Gato::hacerSonido()
{
    std::cout << nombre << " dice: Miau Miau" << std::endl;
}