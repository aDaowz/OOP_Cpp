#ifndef PERRO
#define PERRO

#include "Animal.h"

class Perro : public Animal
{
public:
    Perro(std::string nombre, int edad);

    void hacerSonido() override;
};

#endif