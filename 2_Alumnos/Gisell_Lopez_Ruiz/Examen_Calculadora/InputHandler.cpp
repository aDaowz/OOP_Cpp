
#include "InputHandler.h"
#include "ErrorHandler.h"
#include <iostream>
#include <sstream>

int InputHandler::readOption() {
    std::string texto = "";
    int opcion = 0;
    char caracterExtra = '\0';

    while (true) {
        std::getline(std::cin, texto);
        std::istringstream objetoStreamer(texto);

        
        if (objetoStreamer >> opcion && !(objetoStreamer >> caracterExtra)) {
            return opcion; 
        }
        else {
            ErrorHandler::show(INVALID_OPTION);
            std::cout << "Intente de nuevo: ";
        }
    }
}

double InputHandler::readNumber(std::string message) {
    std::string texto = "";
    double numeroConvertido = 0.0;
    char caracterExtra = '\0';

    while (true) {
        std::cout << message;
        std::getline(std::cin, texto);
        std::istringstream objetoStreamer(texto);

       
        if (objetoStreamer >> numeroConvertido && !(objetoStreamer >> caracterExtra)) {
            return numeroConvertido; 
        }
        else {
            ErrorHandler::show(INVALID_INPUT);
        }
    }
}