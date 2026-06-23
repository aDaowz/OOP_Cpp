#ifndef ANIMAL
#define ANIMAL

#include <string>

class Animal
{
protected:
    std::string nombre;
    int edad;

public:
    Animal(std::string nombre, int edad);

    void mostrarInformacion();
    virtual void comer();
    virtual void dormir();
    virtual void hacerSonido() = 0; // Método puramente virtual
};

#endif