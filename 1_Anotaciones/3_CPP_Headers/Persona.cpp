#include "Persona.h"
#include <iostream>

/*
* ===================================================
* Archivos Source (.cpp)
* ===================================================
* 
* Los archivos ".cpp" contienen la implementación
* del comportamiento de las clases.
* 
* Mientras que el archivo .h define QUÉ existe
* dentro de la clase, el archivo .cpp define
* CÓMO funciona.
* 
* ===================================================
* Separación de responsabilidades
* ===================================================
* 
* Header (.h)
*	Define la estructura de la clase.
* 
* Source (.cpp)
*	Implementa los métodos y constructores.
* 
* Separar las clases en archivos distinto permite:
* 
*	- Mejor organización de código.
*	- Facilitar mantenimiento
*	- Reutilizar clases en múltiples archivos
*	- Evitar escribir código spagetthi en un solo archivo.
* 
* Es en realidad una práctica común en proyectos reales de C++
* 
* ===================================================
* Operador de resolución de alcance (::)
* ===================================================
* 
* El operador "::" se utiliza para indicar que
* un método pertenece a una clase específica.
* 
* Ejemplo:

*	Persona::mostrarInformacion();
* 
* Esto significa qué:
* 
*	"El método mostrarInformacion() pertenece a
	 clase Persona".
* 
*/

Persona::Persona()
{
	/* Constructor vacío */
}

Persona::Persona(std::string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

void Persona::mostrarInformacion()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}