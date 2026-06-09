#include <iostream>
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Trapecio.h"
#include "Circulo.h"

using namespace std;

int main()
{
    int opcion;

    do
    {
        cout << "\n===== MENU DE FIGURAS =====\n";
        cout << "1. Cuadrado\n";
        cout << "2. Rectangulo\n";
        cout << "3. Triangulo\n";
        cout << "4. Trapecio\n";
        cout << "5. Circulo\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            double lado;

            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;

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

            cout << "Ingrese la base: ";
            cin >> base;

            cout << "Ingrese la altura: ";
            cin >> altura;

            Rectangulo rect(base, altura);

            rect.calcularArea();
            rect.calcularPerimetro();

            rect.imprimirArea();
            rect.imprimirPerimetro();

            break;
        }

        case 3:
        {
            double base, altura, lado1, lado2;

            cout << "Ingrese la base: ";
            cin >> base;

            cout << "Ingrese la altura: ";
            cin >> altura;

            cout << "Ingrese lado 1: ";
            cin >> lado1;

            cout << "Ingrese lado 2: ";
            cin >> lado2;

            Triangulo tri(base, altura, lado1, lado2);

            tri.calcularArea();
            tri.calcularPerimetro();

            tri.imprimirArea();
            tri.imprimirPerimetro();

            break;
        }

        case 4:
        {
            double baseMayor, baseMenor, altura, lado1, lado2;

            cout << "Ingrese base mayor: ";
            cin >> baseMayor;

            cout << "Ingrese base menor: ";
            cin >> baseMenor;

            cout << "Ingrese altura: ";
            cin >> altura;

            cout << "Ingrese lado 1: ";
            cin >> lado1;

            cout << "Ingrese lado 2: ";
            cin >> lado2;

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

            cout << "Ingrese el radio: ";
            cin >> radio;

            Circulo cir(radio);

            cir.calcularArea();
            cir.calcularPerimetro();

            cir.imprimirArea();
            cir.imprimirPerimetro();

            break;
        }

        case 6:
            cout << "\nPrograma finalizado.\n";
            break;

        default:
            cout << "\nOpcion no valida.\n";
        }

    } while (opcion != 6);

    return 0;
}