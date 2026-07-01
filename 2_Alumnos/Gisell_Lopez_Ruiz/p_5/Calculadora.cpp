#include "Calculadora.h"
#include "Consola.h"

double Calculadora::Sumar(double x, double y)
{
    return x + y;
}

double Calculadora::Restar(double x, double y)
{
    return x - y;
}

double Calculadora::Multiplicar(double x, double y)
{
    return x * y;
}

double Calculadora::Dividir(double x, double y)
{
    return x / y;
}

void Calculadora::Ejecutar()
{
    int opcion;
    double x, y;
    double resultado;

    do
    {
        Consola::MostrarMenu();

        std::cin >> opcion;

        if (opcion >= 1 && opcion <= 4)
        {
            Consola::MostrarMensaje("Ingrese el primer numero:");
            std::cin >> x;

            Consola::MostrarMensaje("Ingrese el segundo numero:");
            std::cin >> y;
        }

        switch (opcion)
        {
        case 1:
            resultado = Sumar(x, y);
            Consola::MostrarResultado(resultado);
            break;

        case 2:
            resultado = Restar(x, y);
            Consola::MostrarResultado(resultado);
            break;

        case 3:
            resultado = Multiplicar(x, y);
            Consola::MostrarResultado(resultado);
            break;

        case 4:

            if (y == 0)
            {
                Consola::MostrarError("No se puede dividir entre cero.");
            }
            else
            {
                resultado = Dividir(x, y);
                Consola::MostrarResultado(resultado);
            }

            break;

        case 5:
            Consola::MostrarMensaje("Saliendo de la aplicacion...");
            break;

        default:
            Consola::MostrarError("Opcion no valida.");
        }

    } while (opcion != 5);
}