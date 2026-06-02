#pragma once
#include <string>
class Persona
{
	public:
		std::string nombre;
		int edad;

		Persona();
		Persona(std::string nombre, int edad);

		void MostrarInformacion();


};

