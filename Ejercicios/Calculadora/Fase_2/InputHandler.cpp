#include "InputHandler.h"
#include "Console.h"
#include "ErrorHandler.h"
#include <iostream>
#include <sstream>

int InputHandler::readOption()
{
    std::string line;
    int option = 0;
    bool validInput = false;

    while (!validInput)
    {
        std::getline(std::cin, line);

        std::istringstream lineParser(line);
        char extraCharacter = '\0';

        validInput = (lineParser >> option) && !(lineParser >> extraCharacter);

        if (!validInput)
        {
            ErrorHandler::show(INVALID_INPUT);
            Console::showMessage("Seleccione una opcion: ");
        }
    }

    return option;
}

double InputHandler::readNumber(std::string message)
{
    std::string line;
    double number = 0;
    bool validInput = false;

    while (!validInput)
    {
        Console::showMessage(message);

        std::getline(std::cin, line);

        std::istringstream lineParser(line);
        char extraCharacter = '\0';

        validInput = (lineParser >> number) && !(lineParser >> extraCharacter);

        if (!validInput)
        {
            ErrorHandler::show(INVALID_INPUT);
        }
    }

    return number;
}
