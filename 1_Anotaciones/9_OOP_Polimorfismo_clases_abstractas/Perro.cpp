#include <iostream>
#include "Perro.h"

/*
===================================================
LISTA DE INICIALIZACIÓN
===================================================

La sintaxis:

    : Animal (nombre, edad)

es conocida como "Lista de inicialización".

Su función es invocar el constructor de la clase
base antes de ejecutar el constructor de la
clase derivada.

En este caso:

    Animal(nombre, edad)

envía los valores "nombre" y "edad" al constructor
de Animal para inicializar los atributos heredados.

===================================================
ORDEN DE CONSTRUCCIÓN
===================================================

Cuando se crea un objeto de tipo Perro:

    Perro perro("Firulais", 3)

primero se construye la parte Animal y posteriormente
la parte Perro.

Es decir:

    1. Animal(nombre, edad)
    2. Perro("Firulais", 3)

===================================================
CONSTRUCTOR VACÍO
===================================================

El cuerpo del constructor aparece vacío porque
toa la información requerida para inicializar
los atributos hereados ya fueron enviados al
constructor de Animal

En este ejemplo, Perro no posee atributos
adicionales que requieran inicialización. Por 
esta razón el constructor puede estar vacío.
*/


// Constructor
Perro::Perro(std::string nombre, int edad) : Animal(nombre, edad)
{
    // Constructor "Vacío"
}

// Implementación del método puramente virtual
void Perro::hacerSonido()
{
    std::cout << nombre << " hace: Guau guau" << std::endl;
}