#include "Console.h"
#include <iostream>

void Console::showMenu()
{
    std::cout << "\n  +--------------------------------+" << std::endl;
    std::cout << "  |     MENU DE OPERACIONES        |" << std::endl;
    std::cout << "  +--------------------------------+" << std::endl;
    std::cout << "  |  1. Suma            (+)        |" << std::endl;
    std::cout << "  |  2. Resta           (-)        |" << std::endl;
    std::cout << "  |  3. Multiplicacion  (*)        |" << std::endl;
    std::cout << "  |  4. Division        (/)        |" << std::endl;
    std::cout << "  |  5. Salir                      |" << std::endl;
    std::cout << "  +--------------------------------+" << std::endl;
    std::cout << "  Seleccione una opcion: ";
}

void Console::showMessage(std::string message)
{
    std::cout << message;
}

void Console::showResult(double result)
{
    std::cout << "Resultado: " << result << std::endl;
}

void Console::showError(std::string message)
{
    std::cout << "Error: " << message << std::endl;
}
