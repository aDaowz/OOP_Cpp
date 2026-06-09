#pragma once

/*
===================================================
Polimorfismo
===================================================

El polimorfismo es un principio de la Programación
Orientada a Objetos que permite que una misma
operación pueda comportarse de diferentes maneras
dependiendo del contexto en el que sea utilizada.

En programación, esto significa que un mismo
nombre puede representar múltiples comportamientos y
existen diferentes formas de implementar el
polimorfismo.

Las más comunes son:
  - Polimorfismo estático
  - Polimorfismo dinámico

===================================================
Polimorfismo estático
===================================================

El polimorfismo estático es aquel cuya decisión
es tomada por el compilador antes de ejecutar
el programa.

Esto significa que el compilador puede determinar
exactamente qué versión de un método debe ser
utilizada.

Una de las formas más comunes de implementar
polimorfismo estático es mediante la sobrecarga
de métodos.

===================================================
Sobrecarga de métodos
===================================================

La sobrecarga de métodos consiste en crear
múltiples métodos con el mismo nombre pero con
diferentes listas de parámetros.

Esto permite reutilizar un mismo identificador
para realizar tareas similares.

Ejemplo:

 sumar(int, int)
 sumar(double, double)
 sumar(int, int, int)

Aunque todos los métodos se llaman "sumar",
cada uno recibe parámetros diferentes.

Cuando el compilador encuentra una llamada a
sumar(), analiza los argumentos recibidos y
selecciona automáticamente la versión correcta.

===================================================
Firma de un método (Method Signature)
===================================================

La firma de un método es el conjunto de
características que utiliza el compilador
para identificar una versión específica
de un método.

La firma está compuesta por:

 - Nombre del método
 - Cantidad de parámetros
 - Tipo de parámetros
 - Orden de parámetros

Ejemplos:

 calcular(int)
 calcular(int, int)
 calcular(double)


Aunque los tres métodos poseen el mismo
nombre, sus firmas son diferentes.

Gracias a estas diferencias, el compilador
puede distinguir una versión de otra.

===================================================
Reglas de la sobrecarga
===================================================


Para que exista sobrecarga, debe cambiar al
menos uno de los elementos que forman parte
de la firma del método.


Esto significa que puede modificarse:

 - La cantidad de parámetros
 - El tipo de parámetros
 - El orden de los parámetros


===================================================
Lo que NO produce sobrecarga
===================================================


El tipo de retorno NO forma parte de la
firma de un método.

Por esta razón, el siguiente ejemplo es
inválido:

 int sumar(int, int);
 double sumar(int, int);


Aunque el valor de retorno es diferente,
la firma es exactamente la misma.

Esto provoca un error de compilación.

===================================================
Polimorfismo dinámico
===================================================

Además del polimorfismo estático, existe otra forma
de polimorfismo conocida como polimorfismo dinámico.

A diferencia del polimorfismo estático, cuya decisión
es tomada por el compilador antes de ejecutar el
programa, el polimorfismo dinámico toma decisiones
durante la ejecución.

Esto permite que un mismo método pueda producir
comportamientos diferentes dependiendo del tipo
real del objeto involucrado.

El polimorfismo dinámico suele implementarse mediante
herencia y métodos virtuales.



Polimorfismo estático:
    El compilador sabe qué método usar.

Polimorfismo dinámico:
    El programa decide qué método usar mientras está en ejecución.

*/

class Calculadora
{
    public:

        int sumar(int a, int b);

        int sumar(int a, int b, int c);

        double sumar(double a, double b);

        double sumar(double a, double b, double c);

};