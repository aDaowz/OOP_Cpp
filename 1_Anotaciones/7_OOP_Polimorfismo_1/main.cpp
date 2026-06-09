#include <iostream>
#include "Calculadora.h"

int main()
{
    Calculadora calculadora;

    std::cout << "Sumar(int, int)" << std::endl;
    std::cout << calculadora.sumar(2, 3) << std::endl;

    std::cout << "\n-----------------------------------\n" << std::endl;

    std::cout << "Sumar(int, int, int)" << std::endl;
    std::cout << calculadora.sumar(2, 3, 4) << std::endl;

    std::cout << "\n-----------------------------------\n" << std::endl;

    std::cout << "Sumar(double, double)" << std::endl;
    std::cout << calculadora.sumar(2.5, 3.5) << std::endl;

    std::cout << "\n-----------------------------------\n" << std::endl;

    std::cout << "Sumar(double, double, double)" << std::endl;
    std::cout << calculadora.sumar(1.1, 2.2, 3.3) << std::endl;

    std::cin.get();

    return 0;
}