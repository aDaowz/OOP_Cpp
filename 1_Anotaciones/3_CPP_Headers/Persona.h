#pragma once

// #ifndef PERSONA_H // Inicio del incliude guard
// #define PERSONA_H // Guardado en compilación del include guard

/*
* 
* ===================================================
* Archivos Header (.h)
* ===================================================
* 
* En C++, es común separar las clases en múltiples
* archivos para organizar mejor el código.
* 
* Los archivos ".h" (header files) se utilizan para
* declarar la estrucutra de una clase; es decir:
* 
*	- Qué atributos existen.
*	- Qué métodos existen.
*	- Qué constructores existen.
* 
* Pero NO contienen la implementación completa
* de los métodos.
* 
* Por lo tanto, en los headers suelen definirse:
* 
*	- Declaraciones de clases
*	- Declaraciones de funciones (métodos)
*	- Atributos
*	- Prototipos de métodos (sobrecarga/overload)
* 
* ===================================================
* Includes de Guards
* ===================================================
* 
* Las instrucciones siguientes:
* 
*	#ifndef
*	#endif
*	#define
* 
* son conocidos como "Include guards".
* 
* Su objetivo es evitar que el archivo .h sea
* incluido múltiples veces accidentalmente dentro
* de un programa.
* 
* Si un header se incluye varias veces sin protección,
* el compilador podría intentar redefinir clases o funciones
* y producir errores.
* 
* Funcionamiento:
* 
*	#ifndef PERSONA_H
*		- Verifica si PERSONA_H no ha sido definido
*	
*	#define PERSONA_H
*		- Define PERSONA_H para marcar que este
*			archivo ya fue incluido.
* 
*	#endif
*		- Finaliza la condición.
* 
* En versiones modernas de C++, el include guard utilizado es
* el #pragma once
* 
*/

#include <string>

class Persona
{
	public:
		std::string nombre;
		int edad;

		Persona(); // Constructor vacio
		Persona(std::string nombre, int edad);

		void mostrarInformacion();
};

// #endif // Fin del include guard