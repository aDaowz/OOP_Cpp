#include "ErrorHandler.h"
#include <iostream>

void ErrorHandler::show(ErrorType error) {
    switch (error) {
    case INVALID_INPUT:
        std::cout << " Entrada invalida. No es un numero valido.\n";
        break;
    case INVALID_OPTION:
        std::cout << " Opcion no valida. Seleccione una opcion del menu.\n";
        break;
    case DIVISION_BY_ZERO:
        std::cout << " Division por cero no valido.\n";
        break;
    }
}