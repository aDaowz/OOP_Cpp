//Contiene el código de la clase
#include "Persona.h"


Persona::Persona(std::string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}


std::string Persona::GetNombre()
{
    return nombre;
}


int Persona::GetEdad()
{
    return edad;
}


void Persona::SetNombre(std::string nombre)
{
    this->nombre = nombre;
}


void Persona::SetEdad(int edad)
{
    this->edad = edad;
}

void Persona::MostrarInformacion()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}