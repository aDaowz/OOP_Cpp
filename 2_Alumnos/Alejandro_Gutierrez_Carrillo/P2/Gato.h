#pragma once
#include "Animal.h"


class Gato : public Animal
{
public:
	Gato(std::string nombre, int edad);
	void hacerSonido() override;
};

