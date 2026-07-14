/*
===================================================
INTERFACES
===================================================

Una interfaz define un contrato que las clases deben
cumplir e implementar posteriormente.

Una interfaz especifica QUÉ debe poder hancer un objeto,
sin definir el CÓMO lo hace.

Cualquier clase que implemente una interfaz, se 
compromete a proporcionar su propia implementación de 
todos los métodos definidos en ella.

Ejemplo:

    Una interfaz IImprimible podría definir el método
    imprimir().

    Cualquier clase que implemente IImprimible, garantiza
    que puede ser invocada la función de imprimir(),
    sin importar cómo lo haga internamente.

===================================================
INTERFACES EN C++
===================================================

A diferencia de otros lenguajes como Java o C#, 
C++ no tiene una palabra reservada para las interfaces;
es decir, no tiene la palabra lave "interface".

En C++, una interfaz se implementa como si fuera
una clase abstracta, donde:

    - Todos los métodos son puramente virtuales ( = 0 ).
    - No tiene atributos (variables miembros)
    - No tiene implementaciones de métodos.
    - Tiene un destructor virtual.

Por convención, los nombres de interfaces siempre
suelen llevar el prefijo "I".

    Ejemplos:

        IFigura
        IImprimible
        IConexion
        INotification

===================================================
DIFERENCIA ENTRE CLASE ABSTRACTA E INTERFAZ
===================================================

Ambas usan métodos puramente virtuales, pero
tienen un propósito distinto:

Clase Abstracta:
    - Puede tener atributos.
    - Puede tener métodos con implementación.
    - Representa una jerarquía de tipos.
    - Modela la pregunta: ¿qué es este objeto?

Interfaz:
    - Sólo puede contener métodos puramente virtuales.
    - No contiene atributos ni implementaciones.
    - Representa una capacidad o un contrato.
    - Modela la pregunta: ¿qué puede hacer este objeto?

    Ejemplo:

        Animal es una clase abstracta porque tanto Perro,
        Gato y Vaca comparten una naturaleza en común.

        En cambio IImprimible es una interfaz porque
        cualquier tipo de objeto (documento, imagen, factura, etc)
        puede tener la capacidad de imprimirse, sin que
        compartan niguna naturaleza en común.

===================================================
DEFINICÍON DE UNA INTERFAZ
===================================================

    class IFigura
    {
        public:
            virtual double Area() = 0;
            virtual double Perimetro() = 0;
            virtual void Describir() = 0;
            virtual ~IFigura() {}
    };

    Puntos importantes:

        - Todos los métdos son puramente virtualtes.
        - El desctructor es virtual para garantizar
          que se libere corrctamente la memoria
          cuando se use con punters a la interfaz.
        - No hay atributos.
        - No hay implementaciones.

===================================================
IMPLEMENTACIÓN DE UNA INTERFAZ
===================================================

Una clase implementa una interfaz heredando de ella
y definiendo todos sus métodos:

    class Circulo : public IFigura
    {
        Circulo(double radio) { ... }
        double Area() override { ... }
        double Perimetro() override { ... }
        void Describir() override { ... }
    };

Nota: Si una clase hereda de una interfaz pero
no implementa todos sus métodos puramente virutales,
la clase sigue siendo abstracta, y por lo tanto
NO PODRÁ SER INSTANCIADA.

===================================================
USO A TRAVÉS DE LA INTERFAZ
===================================================

Al igual que con las clases abstractas, se puede usar
un puntero hacia la interfaz para trabajar con
cualquier clase que la implemente:

    IFigura* figura;

    figura = new Circulo(5.0)
    figura->Area();     // Ejecuta Circulo::Area()

    figura = new Rectangulo(4.0, 6.0)
    figura->Area();     // Ejecuta Rectangulo::Area()

El código que usa IFigura no necesita saber si el
objeto es un Circulo, un Rectangulo o cualquier
otra figura porque está apuntando a la inferza Figura.

===================================================
VENTAJAS DE LAS INTERFACES
===================================================

    - Desacoplan el código: quien usa la interfaz
      no depende de ninguna clase concreta.

    - Permiten sustituir implementaciones sin
      modificar el código que la usa.

    - Facilitan las pruebas: se puede reemplazar una
      implementación real por una de prueba.

    - Expresan claramente las capacidades
      que se esperan de un objeto.

===================================================
RELACIÓN CON EL PRINCIPIO "OPEN/CLOSED"
===================================================

Las interfaces son una herramienta clave para
aplicar el principio "Oplen/Closed".

Cuando el código depende de una interfaz en lugar
de una clase concreta, agregar nuevas implementaciones
no requiere modificar el código existete.

    Ejemplo:

        Una función que recibe IFigura* puede trabajar
        con Circulo, Rectangulo, Triangulo o cualquier
        otra figura que se cree en el futuro sin
        necesidda de ser modificada.

*/