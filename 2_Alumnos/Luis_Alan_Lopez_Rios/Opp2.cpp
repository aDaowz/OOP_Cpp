#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    //Estructura para instanciar objetos

    //1. Clase
    //2. Identificador (nombre objeto)
    //3. Operador de asignacion
    //4. new
    //5. Invocacion de constructor

    Persona miObjeto;
    miObjeto.nombre = "Antonio";
    miObjeto.edad = 39;
    miObjeto.mostrarInformacion();
    std::cout << "-------------" << std::endl;

    Persona persona2("Gisell", 19);
    persona2.mostrarInformacion();
}