#pragma once


enum ErrorType {
    INVALID_INPUT,
    INVALID_OPTION,
    DIVISION_BY_ZERO
};

class ErrorHandler
{
public:
    
    static void show(ErrorType error);
};