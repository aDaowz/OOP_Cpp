#pragma once
#include <string>

//
// -----------------
// clases abstractas
// -----------------
// 
// Una clase abstracta es un tipo de clase que no puede ser instanciada directamente. Esto significa que no se pueden crear objetos directamente a partir de ella
// 
//		// clase abstracta
//		Animal animal("Firu", 3); Error de compilacion
// 
// Las clases abstractas tambien se utilizan como clases base para que otras clases puedan heredar de ellas
// 
// ---------------------
// Definicion de clase abstracta
// -----------------------
// 
// De manera semejante a una clase base, las clases abstractas representan una idea en general.
// 
// En este ejemplo, tenemos lo siguiente:
// 
//		* Un perro es un animal
//		*Un gato es un animal
// 
// Sin embargo, no siempre es posible crear un objeto de tipo animal directamente, ya que Animal no representa una especie en especifico
// 
// Para poder definir una clase abstracta, es posible apoyarse de cuestionamientos como el siguiente:
// 
//		* Que sonido hace un Animal generico?
// 
// No es posible responder con precision; sin embargo:
// 
//		* Un perro hacer "Guau"
//		* Un gato hace "Miau"
// 
// ---------------------------
// Metodos virtuales
// ---------------------------
// 
// Un metodo virtual es un metodo que puede ser reescrito por una clase derivada.
// 
//		virtual void dormir();
// 
// Si la clase derivada no la reescribe, puede usar la implementacion definida en la clase base
// 
// ------------------
// Metodos puramente virtuales
// ------------------
// Un metodo puramente virtual es un metodo que no tiene una implemetacion dentro de la clase
// 
// Se declara con la siguiente sintaxis
// 
//		virtual void nombreMetodo() = 0;
// 
// El " = 0 " indica que el metodo no tiene una implementacion general en su clase base, y es la manera de indicarle al compilador de C++ que este metodo tiene que ser implementado en otra clase distinta
// 
// Ademas, obliga a las clases derivadas a crear su propia implementacion.
// 
// Por lo tanto una clase se convierte en abstracta cuando contiene al menos un metodo puramente virtual
// 
// En este caso:
//		
//		virtual void hacerSonido() = 0;
// 
// convierte a Animal en una clase abstracta.
// 
// -----------------------------------
// Notas
// -----------------------------------
// 
// Una clase abstracta, si puede contener:
// 
//		Atributos
//		Constructores
//			Simples o overloaded
//		Metodos normales
//			Simples o overloaded
//		Metodos virtuales
//		Metodos puramente virtuales
// 
// Una clase abstracta no puede ser instanciada directamente
// 
// Cuando una clase hija esta derivando de una clase abstracta, esta se ve obligada a implementar todos los metodos puramente virtuales
// 
// Si no implementa alguno de ellos, entonces la clae derivada tambien se conviete en abstracta
// 
// Ejemplo:
//		class Animal
//		{	
//			public:
//				virtual void hacerSonido() = 0;
//		};
//		
//		class Perro : public Animal
//		{
//			//no implementa hacerSonido()
//			// por lo tanto, sigue siendo abstracto
//		}
// 
//		En este caso, Perro continua siendo una clase abstracta porque no implemento hacerSonido()
// 
//		Por lo tanto, la siguiente instancia producira un error de compilacion:
// 
//			Perro perro;
// 
//		Para convertir a Perro en una clase concreta, es necesario implementar todos los metodos puramente virtuales heredados
// 
//		Una vez implementados todos los metodos puramente virtuales, la clase hija ya puede ser instanciada normalmente
// 
// ----------------------------
// Clase base vs abstracta
// -------------------------
// 
// Una clase base es una clase que sirve como punto de partida para que otras clases puedan heredar atributos y metodos, y puede ser instanciada directamente debido a que contiene metodos puramente virtuales
// 
// Una clase abstracta existe principalmente para ser heredada y proporcionar una estructura comun a las clases derivadas, pero las obliga a implementar y definir los metodos puramente virtuales
// 
//


class Animal
{
protected:
	std::string nombre;
	int edad;

public:
	Animal(std::string nombre, int edad);

	void mostrarInformacion();
	virtual void comer();
	virtual void dormir();
	virtual void hacerSonido() = 0; //Metodo puramente virtual

};

