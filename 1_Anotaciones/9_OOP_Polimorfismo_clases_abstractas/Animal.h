
#pragma once
#include <string>

/*
===================================================
CLASES ABSTRACTAS
===================================================

Una clase abstracta es un tipo de clase que no puede
ser instanciada directamente. Esto significa que no
se pueden crear objetos directamente a partir de ella.

    // Animal es una clase abstracta
    Animal animal("Firulais", 3); // Error de compilación

Las clases abstractas también se utilizan como clases
base para que otras clases puedan heredar de ellas.

===================================================
DEFINICIÓN DE CLASE ABSTRACTA
===================================================

De manera semejante a una clase base, las clases 
abstractas representan una idea en general.

En este ejemplo, tenemos lo siguiente:

    - Un perro es un animal.
    - Un gato también es un animal.

Sin embargo, no siempre es posible crear un objeto 
de tipo animal directamente, ya que Anial no
representa una espeie en específico.

Para poder definir una clase abstracta, es posible
apoyarse de cuestionamientos como el siguiente:

    - ¿Qué sonido hace un Animal genércio?

No es posible responder con precisión; sin embargo:

    - Un perro hace "Guau".
    - Un gato hace "Miau".

===================================================
MÉTODOS VIRTUALES
===================================================

Un método virtual es un método que puede ser reescrito
por una clase derivada.

    virtual void dormir();

Si la clase derivada no la reescribe, puede usar la
implementación definida en la clase base.

===================================================
MÉTODOS PURAMENTE VIRTUALES
===================================================

Un método puramente virtual es un método que no
tiene una implementación dentro de la clase.

Se declara utilizando la siguiente sintaxis:

    virtual void nombreMetodo() = 0;

El " = 0" indica que el método no tiene una implementación
general en su clase base, y es la manera de indicarle
al compilador de C++ que este método tiene que ser
implementado en otra clase distinta.

Además, obliga a las clases derivadas a crear su
propia implementación.

Por lo tanto, una clase se convierte en abstracta cuando
contiene al menos un método puramente virtual.

En este caso:

    virtual void hacerSonido() = 0;

convierte a Animal en una clase abstracta.

===================================================
NOTAS
===================================================

- Una clase abstracta, sí puede contener:

    - Atributos.
    - Constructores
        - Simples o overloaded
    - Métodos normales
        - Simples o overloaded
    - Métodos virtuales
    - Métodos puramente virtuales

- Un clase abstracta no puede ser instanciada directamente

- Cuando una clase hija está derivando de una clase
  abstracta, esta se ve obligada a implementar todos
  los métodos puramente virtuales.

  Si no implementa alguno de ellos (métodos puramente virtuales),
  entonces la clase derivada también se convierte en abstracta.

  Ejemplo:

    class Animal
    {
        public:
            virtual void hacerSonido() = 0;
    };

    class Perro : public Animal
    {
        // no implmenta hacerSonido()
        // por lo tanto, sigue siendo abstracto
    }

    En este caso, Perro continúa siendo una
    abstracta porque no implementó hacerSonido().

    Por lo tanto, la siguiente instancia produciría un error
    de compilación:

        Perro perro;

    Para convertir a Perro en una clase concreta, es
    necesario implementar todos los métodos puramente
    virtuales hereados.

    Una vez implementados todos los métdos puramnete virutales,
    la clase hija ya puede ser instanciada normalmente.

===================================================
CLASE BASE VSCLASE ABSTRACTA
===================================================

Una clase base es una clase que sirve como punto
de partida para que otras clases puedan heredar
atributos y métodos, y puede ser instanciada si no posee
métodos puramente virtuales.

Por otro lado, una clase abstracta es una clase que no
puede ser instanciada direcamtente debido a que contiene
métodos puramente virtuales.

Una clase abstracta existe principalmente para ser
heredad y proporcionar una estrucutra común a las
clases derivdas, pero las obliga a implementar y
definir los métodos puramente virtuales.

*/

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
        virtual void hacerSonido() = 0; // Método puramente virtual
};