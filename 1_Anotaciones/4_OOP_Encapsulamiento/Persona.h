#pragma once

#include <string>

class Persona
{
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string nombre, int edad);

    // Getters
    std::string getNombre();
    int getEdad();

    // Setters
    void setNombre(std::string nombre);
    void setEdad(int edad);

private:
    void mostrarInformacion();
};