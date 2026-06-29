// Gato.h

#pragma once

#include "Animal.h"

/*
 * ===================================================
 * Clase derivada: Gato
 * ===================================================
 *
 * La clase Gato hereda de la clase Animal.
 *
 * Esto se indica con la sintaxis:
 *
 *      class Gato : public Animal
 *
 * Como Animal es una clase abstracta, Gato está
 * obligado a implementar todos los métodos puramente
 * virtuales heredados.
 *
 * En este caso, debe implementar:
 *
 *      HacerSonido()
 *
 * ===================================================
 * Override
 * ===================================================
 *
 * La palabra reservada override indica que un método
 * está reescribiendo un método virtual heredado desde
 * la clase base.
 *
 */

class Gato : public Animal
{
    public:
        Gato(std::string nombre, int edad);

        void HacerSonido() override;
};