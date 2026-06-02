#include "Persona.h"
#include <iostream>
/*
Archivos Source (.cpp)

Los archivos ".cpp"  contienen la implemnetacion
del comportamiento de las clases.

Mientras que el archivo .h define QUE existe dentro
de la clase, el archivo .cpp define COMO funciona.

SEPARACION DE RESPONSABILIDADES

Header (.h)
	Define la estructura de la clase

Source (.cpp)
	Implementa los metodos y constructores.

Separar las clases en archivos distinto permite:

-Mejor organizacion de codigo
-Facilitar mantenimiento
-Reutilizar clases en multiples archivos
-Evitar escribir codigo spaghetti en un solo archivo.

Es en realidad una paractica comun en proyectos reales de C++


OPERADOR DE RESOLUCION DE ALCANCE (::)

El operador "::" se utiliza para indicar que un metodo \pertenece a una clases especifica.

Ejemplo:

	Persona:: mostrarInformacion();

	Esto significa que:

	"El metodo mostrarInformacion() pertenece a clase Persona"
*/

Persona::Persona() {

	/*Constructor vacio*/
}

Persona::Persona(std::string nombre, int edad) {

	this->nombre = nombre;
	this->edad = edad;

}


