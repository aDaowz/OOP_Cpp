#pragma once
#include <iostream>
#include <string>

/*
Principio aplicado:
Separación de Responsabilidades (SRP)

La clase Consola únicamente se encarga de toda la interacción
con el usuario (mostrar menús, mensajes, resultados y errores).

No realiza operaciones matemáticas.
*/

class Consola
{
public:

    static void MostrarMenu();

    static void MostrarMensaje(std::string mensaje);

    static void MostrarResultado(double resultado);

    static void MostrarError(std::string mensaje);
};