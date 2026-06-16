#include "Perro.h"
#include <iostream>

//
// =============
// Lista de inicilizacion
// =============
// 
// La sintaxis:
//		
//		: Animal (nombre, edad)
// es conocida como lista de incilizacion
// 
// Su funcion es invocar el constructor de la clase base antes de ejecutar el constructor de la clase derivada
// 
// En este caso:
//		
//		Animal(nombre, edad)
//	
// Envia los valores "nombre" y "edad" al constructor de Animal para inicializar los atributos heredados
// 
// ===========
// Orden de construccion
// ===========
// 
// Cuando se crea un objeto de tipo Perro:
//	
//		Perro perro("Firu", 3)
// 
// primero se construye la parte Animal y posteriormente la parte Perro
// 
// Es decir:
// 
// 
// -----------------
// Con vacio
// -----------------
// 
//	1. Animal del constructor aparece vacio porque toda la informacion requerida para inicializar los atributos heredados ya fueron enviados al constructor Animal
// 
// 
//


Perro::Perro(std::string nombre, int edad) : Animal(nombre, edad)
{
	// Constructor "Vacio"
}

void Perro::hacerSonido()
{
	std::cout << nombre << "hace: Guau guau" << std::endl;
}