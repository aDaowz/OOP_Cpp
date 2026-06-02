#include "Persona.h"
#include <iostream>

Persona::Persona() 
{
}

Persona::Persona(std::string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

void Persona::MostrarInformacion()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}
