#include <iostream>
#include "Perro.h"
#include "Gato.h"

int main()
{
    Perro perro("Max", 4);
    Gato gato("Chamuscado", 2);

    perro.mostrarInformacion();
    perro.comer();
    perro.dormir();
    perro.hacerSonido();

    std::cout << std::endl;

    gato.mostrarInformacion();
    gato.comer();
    gato.dormir();
    gato.hacerSonido();

    return 0;
}