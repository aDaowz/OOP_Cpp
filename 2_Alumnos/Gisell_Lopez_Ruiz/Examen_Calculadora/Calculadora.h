#pragma once

/*
Principio aplicado:
Responsabilidad Única (Single Responsibility Principle - SRP)

La clase Calculadora tiene una única responsabilidad:
realizar las operaciones matemáticas y controlar la lógica
de ejecución del programa.

No se encarga de mostrar información en pantalla, ya que esa
responsabilidad pertenece a la clase Consola.
*/

class Calculadora
{
public:
    void Ejecutar();

private:
    double Sumar(double x, double y);
    double Restar(double x, double y);
    double Multiplicar(double x, double y);
    double Dividir(double x, double y);
};
