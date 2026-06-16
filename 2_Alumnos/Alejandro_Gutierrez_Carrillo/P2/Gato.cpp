#include "Gato.h"
#include <iostream>

Gato::Gato(std::string nombre, int edad) : Animal(nombre, edad)
{
	
}

void Gato::hacerSonido()
{
	std::cout << nombre << "hace: Meow meow" << std::endl;
}