#include "ErrorHandler.h"
#include "Consola.h"


void ErrorHandler::show(ErrorType error) {


	switch (error) {

	case INVALID_INPUT:
		Consola::MostrarError("El valor que ingresaste es invalido");
		break;


	case INVALID_OPTION:
		Consola::MostrarError("La opcion que seleccionaste no existe");
		break;

	case DIVISION_BY_ZERO:
		Consola::MostrarError("No se puede dividir entre 0");
		break;

	}
}