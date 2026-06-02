#pragma once
//#ifndef PERSONA_H//Inicio del include guard
//#define PERSONA_H//Guardado en compilacion del include guard
#include <string>
class Persona
{

	/*
	* 




	#ifndef
	#define
	#endif

	son conocidos como "Include guards".

	Su objetivo es evitar que el archivo .h sea
	incluido multiples veces accidentalmente dentro 
	de un programa.

	Si un header se inclue varias veces sin proteccion,
	el compilador podria intentar redefinir clases o funciones y producir errores.

	Funcionamiento:

	#ifndef PERSONA_H
			-Verifica si PERSONA_H no ha sido definido
    #define PERSONA_H
			-Define PERSONA_H para marcar que este archivo ya fue incluido

			#endif 
			-Finaliza la condicion
	*/

public :
	std::string nombre;
	int edad;

	Persona();
	Persona(std::string nombre, int edad);

	void mostrarInformacion();




};
// 

