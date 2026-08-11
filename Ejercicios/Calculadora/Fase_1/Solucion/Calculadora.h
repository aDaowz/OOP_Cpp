#pragma once

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