#include <iostream>
#include "Calculadora.h"
#include "Consola.h"



void Calculadora::Ejecutar() {

}

double Calculadora::Sumar(double x, double y) 
{
	Consola::MostrarMensaje("Ingrese el primer numero: ");
	std::cin >> x;
	Consola::MostrarMensaje("Ingrese el segundo numero: ");
	std::cin >> y;
	Consola::MostrarResultado(x + y);
	
}

double Calculadora::Restar(double x, double y)
{
	Consola::MostrarMensaje("Ingrese el primer numero: ");
	std::cin >> x;
	Consola::MostrarMensaje("Ingrese el segundo numero: ");
	std::cin >> y;
	Consola::MostrarResultado(x - y);
}

double Calculadora::Multiplicar(double x, double y)
{
	Consola::MostrarMensaje("Ingrese el primer numero: ");
	std::cin >> x;
	Consola::MostrarMensaje("Ingrese el segundo numero: ");
	std::cin >> y;
	Consola::MostrarResultado(x * y);
}

double Calculadora::Dividir(double x, double y)
{
	Consola::MostrarMensaje("Ingrese el primer numero: ");
	std::cin >> x;
	Consola::MostrarMensaje("Ingrese el segundo numero: ");
	std::cin >> y;
	Consola::MostrarResultado(x / y);
}