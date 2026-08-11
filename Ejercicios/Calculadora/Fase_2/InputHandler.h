#pragma once

#include <string>

class InputHandler
{
    public:
        static int readOption();
        static double readNumber(std::string message);
};
