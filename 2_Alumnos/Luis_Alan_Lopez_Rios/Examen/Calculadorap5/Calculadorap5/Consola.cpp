#include "Consola.h"


void Consola::MostrarMenu() {

	std::cout << "MENU DE CALCULADORA" << std::endl;
	std::cout << "1.Suma" << std::endl;
	std::cout << "2.Resta" << std::endl;
	std::cout << "3.Multiplicacion" << std::endl;
	std::cout << "4.Division" << std::endl;
	std::cout << "5.Salir" << std::endl;
	std::cout << "....................." << std::endl;
	std::cout << "Selecciona una opcion" << std::endl;
}

void Consola::MostrarMensaje(std::string mensaje) {

	std::cout << mensaje << std::endl;

}

void Consola::MostrarResultado(double resultado) {

	std::cout << "Resultado: " << resultado << std::endl;
}

void Consola::MostrarError(std::string mensaje) {

	std::cout << "Error " << mensaje << std::endl;
}