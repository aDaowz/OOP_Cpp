#pragma once
//////#ifdef PERSONA_H//inicio de include guard
#define PERSONA_H//guardado de include
/*
*
----------------------------------------------------
ARCHIVOS HEADERS (.h)
----------------------------------------------------
en c++ , es comun separar las clases en multiples archivos para organizar mejor el codigo.

los archivos ".h"(headers files) se utilizan para declarar la estructura de una clase; es decir

-que atributos existes
-que metodos existen
-que constructores existen

pero NO contienen la implementacion completa de los metodos.

por lo tanto en los headers o .h suelen definirse:
-declaraciones de clases
-declaraciones de funciones o metodos
-atributos
-prototipos de metodos (sobrecarge/overload)

----------------------------------------------------
INCLUDES DE GUARDS
----------------------------------------------------

las intrucciones siguientes:
 #ifndef 
 #define 
 #endif

 son conocidos como "include guards"

 su objetivo es evitar que el archivo .h sea incluido multiples veces accidentalmente dentro de un programa

 si un header se incluye varias veces sin proteccion el compilador podria intentar redefinir clases o funciones y producir errores

 funcionamiento:
 #ifdef PERSONA_H
 -verifica si persona no ha sido definido
 -#define PERSONA_H
 -define PERSONA_H para marcar que este archivo ya fue incluido
 -#endif
 -finaliza la condicion

 en versiones modernas en c++ , el  guard utilizado en el programa es #pragmaonce

*/
#include <string>

class persona
{
public:
	std::string nombre;
	int edad;

	persona();//constructor por defecto
	persona(std::string nombre, int edad);//constructor con parametros

	void mostrarInformacion();



};

///////#endif //final de include guard
