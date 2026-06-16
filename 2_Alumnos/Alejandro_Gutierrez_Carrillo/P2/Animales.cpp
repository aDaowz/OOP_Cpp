#include "Perro.cpp"
#include "Perro.h"
#include "Gato.cpp"
#include "Gato.h"

#include <iostream>

int main()
{
    Perro perro("fido", 3);
    perro.mostrarInformacion();
    perro.comer();
    perro.dormir();
    perro.hacerSonido();

    Gato gato("Gustavo", 7);
    gato.mostrarInformacion();
    gato.comer();
    gato.dormir();
    gato.hacerSonido();

}

