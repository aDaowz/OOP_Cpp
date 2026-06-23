#include <iostream>
#include "Animal.h"

Animal::Animal(std::string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

void Animal::mostrarInformacion()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}

void Animal::comer()
{
    std::cout << nombre << " esta comiendo." << std::endl;
}

void Animal::dormir()
{
    std::cout << nombre << " esta durmiendo." << std::endl;
}

// No se implementa hacerSonido()
// porque es un método puramente virtual (= 0)