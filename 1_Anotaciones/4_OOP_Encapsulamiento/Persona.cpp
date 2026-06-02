#include <iostream>
#include "Persona.h"

Persona::Persona(std::string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

// Getter para nombre
std::string Persona::getNombre()
{
    return nombre;
}

int Persona::getEdad()
{
    return edad;
}

// Setter para nombre
void Persona::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

void Persona::mostrarInformacion()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}