#pragma once
#include "Animal.h"


/*
===================================================
CLASE DERIVADA: Perro
===================================================

La clse Perro hereda de la clase Animal.

Esto se indica con la sintaxis:

    class Perro : public Animal

Debido a que Animal es una clase abstracta, Perro
está obligado a implementar todos los métodos
puramente virtuales heredados.

En este caso, debe implementar:

    hacerSonido()

===================================================
OVERRIDE
===================================================

La palabra override indica que es un método va a ser
reescrito ya que se trata de un método virtual
hereado desde la clase base.
*/

class Perro : public Animal
{
    public:
        Perro(std::string nombre, int edad);
        void hacerSonido() override;
};