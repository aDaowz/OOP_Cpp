#include <iostream>
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Trapecio.h"
#include "Circulo.h"



int main()
{
    int opcion;

    do
    {
        std::cout << "\n===== MENU DE FIGURAS =====\n";
        std::cout << "1. Cuadrado\n";
        std::cout << "2. Rectangulo\n";
        std::cout << "3. Triangulo\n";
        std::cout << "4. Trapecio\n";
        std::cout << "5. Circulo\n";
        std::cout << "6. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            double lado;

            std::cout << "Ingrese el lado del cuadrado: ";
            std::cin >> lado;

            Cuadrado cuadrado(lado);

            cuadrado.calcularArea();
            cuadrado.calcularPerimetro();

            cuadrado.imprimirArea();
            cuadrado.imprimirPerimetro();

            break;
        }

        case 2:
        {
            double base, altura;

            std::cout << "Ingrese la base: ";
            std::cin >> base;

            std::cout << "Ingrese la altura: ";
            std::cin >> altura;

            Rectangulo rect(base, altura);

            rect.calcularArea();
            rect.calcularPerimetro();

            rect.imprimirArea();
            rect.imprimirPerimetro();

            break;
        }

        case 3:
        {
            double base, lado1, lado2;

            std::cout << "Ingrese el lado 1: ";
            std::cin >> base;

            std::cout << "Ingrese el lado 2: ";
            std::cin >> lado1;

            std::cout << "Ingrese el lado 3: ";
            std::cin >> lado2;

            Triangulo tri(base, lado1, lado2);

            tri.calcularArea();
            tri.calcularPerimetro();

            tri.imprimirArea();
            tri.imprimirPerimetro();

            break;
        }

        case 4:
        {
            double baseMayor, baseMenor, altura, lado1, lado2;

            std::cout << "Ingrese base mayor: ";
            std::cin >> baseMayor;

            std::cout << "Ingrese base menor: ";
            std::cin >> baseMenor;

            std::cout << "Ingrese altura: ";
            std::cin >> altura;

            std::cout << "Ingrese lado 1: ";
            std::cin >> lado1;

            std::cout << "Ingrese lado 2: ";
            std::cin >> lado2;

            Trapecio trap(baseMayor, baseMenor, altura, lado1, lado2);

            trap.calcularArea();
            trap.calcularPerimetro();

            trap.imprimirArea();
            trap.imprimirPerimetro();

            break;
        }

        case 5:
        {
            double radio;

            std::cout << "Ingrese el radio: ";
            std::cin >> radio;

            Circulo cir(radio);

            cir.calcularArea();
            cir.calcularPerimetro();

            cir.imprimirArea();
            cir.imprimirPerimetro();

            break;
        }

        case 6:
            std::cout << "\nPrograma finalizado.\n";
            break;

        default:
            std::cout << "\nOpcion no valida.\n";
        }

    } while (opcion != 6);

    return 0;
}