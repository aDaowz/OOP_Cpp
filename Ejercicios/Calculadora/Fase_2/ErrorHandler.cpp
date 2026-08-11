#include "ErrorHandler.h"
#include "Console.h"

void ErrorHandler::show(ErrorType errorType)
{
    switch (errorType)
    {
    case INVALID_INPUT:
        Console::showError("El valor ingresado no es valido.");
        break;
    case INVALID_OPTION:
        Console::showError("La opcion seleccionada no existe.");
        break;
    case DIVISION_BY_ZERO:
        Console::showError("No se puede dividir entre cero.");
        break;
    }
}
