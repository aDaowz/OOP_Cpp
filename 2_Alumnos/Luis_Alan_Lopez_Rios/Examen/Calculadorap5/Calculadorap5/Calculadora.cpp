#include "Calculadora.h"
#include "Consola.h"
#include <iostream>
#include "InputHandler.h"
#include "ErrorHandler.h"

double Calculadora::Suma(double x, double y) {

	return x + y;
}

double Calculadora::Resta(double x, double y) {

	return x - y;
}

double Calculadora::Multiplicacion(double x, double y) {

	return x * y;
}

double Calculadora::Division(double x, double y) {

	return x / y;
}


void Calculadora::Ejecutar() {

	int opcion = 0;
	double resultado = 0;
	double x = 0;
	double y = 0;

	

    
    do {

        Consola::MostrarMenu();

        opcion = InputHandler::readOption();

        if (opcion >= 1 && opcion <= 4) {

            
            
            Consola::MostrarMensaje("Escribe el primer numero: ");


            x = InputHandler::readNumber(); 

            Consola::MostrarMensaje("Escribe el segundo numero: ");
           
            y = InputHandler::readNumber();

            switch (opcion) {

            case 1:
                resultado = Suma(x, y);
               
                Consola::MostrarResultado(resultado);
                break;

            case 2:
                resultado = Resta(x, y);
               
                Consola::MostrarResultado(resultado);
                break;

            case 3:
                resultado = Multiplicacion(x, y);
               
                Consola::MostrarResultado(resultado);
                break;

            case 4:
                if (y == 0) {
                    
                    ErrorHandler::show(DIVISION_BY_ZERO);
                }
                else {
                    resultado = Division(x, y);
                    Consola::MostrarResultado(resultado);
                }
                break;
            }
        } 

        else if (opcion == 5) {

            Consola::MostrarMensaje("Saliendo");
        }
        else {

           
            ErrorHandler::show(INVALID_OPTION);
        }

    } while (opcion != 5);
}