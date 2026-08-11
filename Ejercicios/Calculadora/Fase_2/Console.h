#pragma once
#include <string>

class Console
{
    public:
        static void showMenu();
        static void showMessage(std::string message);
        static void showResult(double result);
        static void showError(std::string message);
};
