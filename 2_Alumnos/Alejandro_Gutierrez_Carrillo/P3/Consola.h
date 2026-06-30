#pragma once
#include <string>

class Consola
{
public:
    static void MostrarMenu();
    static void MostrarMensaje(std::string mensaje);
    static void MostrarResultado(double resultado);
    static void MostrarError(std::string mensaje);
};