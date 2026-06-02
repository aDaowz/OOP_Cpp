#include "persona.h"
#include <iostream>
/*
* -----------------------------------------------------
* Archivos source (.cpp)
* -----------------------------------------------------
* los archivos ".cpp" contiene la implementacion del comportamiento de las clases.
* 
* mientras que el archivo .h define que existe dentro de la clase, el archivo .cpp define COMO funciona
* 
* ------------------------------------------------
* Separacion de responsabilidades
* ------------------------------------------------
* 
* headres (.h)
* define la estructura de la clase
* 
* source (.cpp)
* implementa los metodos y constructores
* 
* separar las clases en archivos distintos permiten:
* -mejor organizacion del codigo
* -facilitar el mantenimiento
* -reutilizar clases en multiples archivos
* -evitar escribir codigo espaguetti en un solo archivo
* 
* es en realidad una practica comun en proyectos reales de c++.
* 
* -------------------------------------------------
* Operador de resolucion de alcance (::)
* -------------------------------------------------
* el operador "::" se utiliza para indicar que un metodo pertenece a una clase especifica,
* ejemplo:
* persona::mostrarInformacion();
* esto significa que "el metodo mostrarInformacion pertenece ala clase persona"
* 
*/

persona::persona()
{
	
}

persona::persona(std::string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

void persona::mostrarInformacion()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}