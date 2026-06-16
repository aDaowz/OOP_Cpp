#pragma once
#include "Animal.h"
//
// ---------
// Clase derivada: Perro
// ---------
// 
// La clase perro hereda la clase Animal
// 
// Esto indica con la sintaxis:
// 
//		class Perro : public Animal
// 
// Debido a que Animal es una clase abstracta, Perro esta obligado a implementar todos los metodos puramente virtuales heredados
// 
// En este caso, debe implementar:
// 
//		hacerSonido()
// 
// 
// -------------
// Override
// -------------
// 
// La palabra override indica que es un metodo va a ser reescrito ya que se trata de un metodo virtual heredado desde la clase base
//


class Perro : public Animal
{
	public:
		Perro(std::string nombre, int edad);
		void hacerSonido() override;

};

