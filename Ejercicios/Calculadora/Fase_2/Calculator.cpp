#include "Calculator.h"
#include "Console.h"
#include "ErrorHandler.h"
#include "InputHandler.h"

enum MenuOption
{
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3,
    DIVIDE = 4,
    EXIT = 5
};

bool isArithmeticOperation(int option)
{
    switch (option)
    {
        case ADD:
        case SUBTRACT:
        case MULTIPLY:
        case DIVIDE:
            return true;
        default:
            return false;
    }
}

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

double Calculator::divide(double a, double b)
{
    return a / b;
}

void Calculator::execute()
{
    int option = 0;
    double x = 0, y = 0;

    do
    {
        Console::showMenu();
        option = InputHandler::readOption();

        if (isArithmeticOperation(option))
        {
            x = InputHandler::readNumber("Ingrese el primer numero: ");
            y = InputHandler::readNumber("Ingrese el segundo numero: ");
        }

        switch (option)
        {
        case ADD:
            Console::showResult(add(x, y));
            break;
        case SUBTRACT:
            Console::showResult(subtract(x, y));
            break;
        case MULTIPLY:
            Console::showResult(multiply(x, y));
            break;
        case DIVIDE:
            if (y != 0)
            {
                Console::showResult(divide(x, y));
            }
            else
            {
                ErrorHandler::show(DIVISION_BY_ZERO);
            }
            break;
        case EXIT:
            Console::showMessage("Saliendo de la aplicacion...\n");
            break;
        default:
            ErrorHandler::show(INVALID_OPTION);
        }

    } while (option != EXIT);
}
