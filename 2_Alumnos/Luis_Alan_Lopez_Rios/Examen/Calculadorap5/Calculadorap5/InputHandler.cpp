#include "InputHandler.h"
#include "ErrorHandler.h"
#include <iostream>
#include <sstream>
#include <string>

int InputHandler::readOption() {

    std::string input;
    int opcion;
    bool validar;

    do {
        std::getline(std::cin, input);
        std::istringstream iss(input);

        if (iss >> opcion) {
            validar = true;
        }
        else {
            validar = false;
            ErrorHandler::show(INVALID_INPUT);
        }

    } while (!validar);

    return opcion;
}


double InputHandler::readNumber() {

    std::string input;
    double number;
    bool validar;

    do {
        std::getline(std::cin, input);
        std::istringstream iss(input);

        if (iss >> number) {
            validar = true;
        }
        else {
            validar = false;
            ErrorHandler::show(INVALID_INPUT);
        }

    } while (!validar);

    return number;
}