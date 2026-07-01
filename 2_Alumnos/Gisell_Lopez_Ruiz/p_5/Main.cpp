#include "Calculadora.h"
/*
* --------------------------------------------------------------
* ¿que principios OOP y practicas buenas se están utilizando?
* ---------------------------------------------------------------
* 
* ---------------------------------
1. encapsulamiento 
-----------------------------------
Las operaciones (Sumar, Restar, etc.) son privadas, por lo que solamente la  clase Calculadora puede utilizarlas.

-----------------------------------
2.Single Responsibility Principle (SRP) *responsabilidad Única*
--------------------------------
Cada clase tiene un solo trabajo.

*Calculadora
realiza cálculos.
controla el menú.

*Consola
muestra información.
imprime errores.
imprime resultados.

-----------------------------------
3. informacion oculta
-----------------------------------
El usuario únicamente puede ejecutar:
calculadora.Ejecutar();
No puede llamar directamente:

* Sumar()
* Restar()
* Multiplicar()
* Dividir()
porque son privadas.
----------------------------------
4. Reutilización 
----------------------------------
-Si en otro programa necesitas mostrar mensajes, puedes reutilizar la clase Consola sin modificar la clase Calculadora.
*/
int main()
{
    Calculadora calculadora;
    calculadora.Ejecutar();

    return 0;
}