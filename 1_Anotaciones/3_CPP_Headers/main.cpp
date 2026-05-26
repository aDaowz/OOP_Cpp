#include <iostream>
#include "Persona.h"

int main()
{
    // Estructrua para instanciar objetos

    // 1. Clase
    // 2. Identificador (nombre objeto)
    // 3. Operador de asignación
    // 4. new
    // 5. Invocación de constructor

    Persona persona1;
    persona1.nombre = "Antonio";
    persona1.edad = 39;
    persona1.mostrarInformacion();
    std::cout << "--------------------" << std::endl;

    Persona persona2("Gisell", 19);
    persona2.mostrarInformacion();
}