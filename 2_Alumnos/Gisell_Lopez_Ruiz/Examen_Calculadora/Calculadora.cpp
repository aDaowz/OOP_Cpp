#include "Calculadora.h"
#include "Consola.h"
#include "InputHandler.h"
#include "ErrorHandler.h"

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

        // Lectura segura de la opción
        opcion = InputHandler::readOption();

        // Lectura segura de los números (solo si la opción es de cálculo)
        if (opcion >= 1 && opcion <= 4)
        {
            x = InputHandler::readNumber("Ingrese el primer numero: ");
            y = InputHandler::readNumber("Ingrese el segundo numero: ");
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
            //  ErrorHandler para la división por cero
            if (y == 0)
            {
                ErrorHandler::show(DIVISION_BY_ZERO);
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
            
            ErrorHandler::show(INVALID_OPTION);
            break;
        }

    } while (opcion != 5);
}