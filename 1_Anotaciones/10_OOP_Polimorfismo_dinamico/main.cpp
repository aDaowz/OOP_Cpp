/*

===================================================
POLIMORFISMO DINÁMICO
===================================================

El polimorfismo dinámico es la capacidad que tiene
un lenguaje de programación y programa para ejecutar
diferentes implementaciones de un mismo método
durante la ejecución de un programa.

Esto significa que el método que será ejecutado
no se determina en tiempo de compilación, sino en
tiempo de ejecución.

Por lo tanto, código dinámico = HEAP y tiempo de ejecución = RUN TIME.

===================================================
CONCEPTO
===================================================

Suponiendo que se tiene la siguiente jerarquía:

    - Clase Base
      Animal

        Clases derivadas
        - Perro
        - Gato
        - Vaca

Cada animal posee su propia implementación del método hacerSonido().

    Pero -> "Guau".
    Gato -> "Miau".
    Vaca -> "Muuu".

Si se crean objetos independientes, cada uno de estos puede invocar
su propio método de hacerSonido().

    Perro perro;
    Gato gato;
    Vaca vaca;

    // Cada uno conteniendo hacerSonido() propio.

Sin embargo, esto no aprovecha completamente el concepto de 
polimorfismo dinámico. La razón es cada objeto tiene
un tipo concreto de método hacerSonido() en tiempo
de compilación.

    perro.hacerSonido(); // Guau
    gato.hacerSonido();  // Miau
    vaca.hacerSonido();  // Muuu

Esto obliga a tratar cada tipo de método por separado.
Si se agregan más animales, el código crece linealmente
y no existe una forma uniforme de operar sobre todos
los métodos que van agregándose.

El polimorfismo dinámico busca justamente lo
contrario: que distintos tipos puedan ser tratados
de forma uniforme a través de una referencia común,
sin que el código que los invoca necesite saber
el tipo exacto de cada objeto.

===================================================
PUNTEROS A LA CLASE BASE
===================================================

Una de las características fundamentales de la 
herencia es un puntero de clase base puede
apuntar a objetos de las clases derivadas.

Ejemplo:

    Instancia:

        Animal* animal;

    Posteriormente:

        animal = new Perro();
        animal = new Gato();
    
Esto es válido porque Perro y Gato heredan de Animal.
De lo anterior, puede deducirse que se usa el tipo
concreto de la clase derivada.

        Perro* p = new Perro();

    ese puntero sólo puede apuntar a un Perro.
    No puede apuntar a un Gato ni a una Vaca.

    En cambio, al usar un puntero a la clase base

        Animal* aniaml;

    Esa misma variable puede apuntar a cualquier objetos
    cuya clase hrede de Animal.

Esto permite escribir c[odigo que opera sobre
el tipo general de Animal, sin importar cuál es
el tipo específico de cada objeto.

Por ejemplo, una función recibe que Animal*
puede trabajar con cualquier animal sin necesidad
de conocer su tipo exacto.

    void ejecutarSonido(Animal* animal)
    {
        animal->hacerSonido();
    }

Esta función es posible para Perro, Gato, Vaca
y cualquier otro animal que posteriormente
se agregue en el futuro, sin modificar el código

    ejecutarSonido(gato); // Espera imprimir "Miau"


===================================================
MÉTODOS VIRTUALES EN POLIMORFISMO DINÁMICO
===================================================

Cuando un método es declarado como virtual:

    virtual void hacerSonido();

Se recomienda marcar las sobreescrituras en las
clases derivadas con override.

    void hacerSonido() override;

Esto permite al compilador verificar que
realmente se está sobreescribiendo un método
virtual de la clase base, evitando errores
silenciosos cuando el nombre o la firma
no coinciden con ningún método virtual existente.

C++ retrasa la decisión de qué método ejecutar
hasta el momento en que el programa se encuentra
en ejecución.

De esta forma:

        Animal* animal;
        animal = new Perro();

    Ejecutará:

        Perro::hacerSonido()

    Y por lo tanto>

        animal = new Gato();

    ejecutará:

        Gato::hacerSonido();

===================================================
DESPACHO DINÁMICO
===================================================

El proceso mediante el cuál C++ determina qué versión
de un método virtual debe ejecutrase durante el
RUN TIME se denomina despacho dinámico.

Gracias a este mecanismo, una variable de tipo
Animal* puede comportarse como un Perro, Gato
Vaca o cualquier otro animal que herede de Animal.

===================================================
DESTRUCTOR VIRTUAL
===================================================

Cuando se usa polimofismo dinámico con punteros a la
clase base, el destructor de la clase base debe
declararse como virtual:

    virtual ~Animal()
    {
        std::cout << "Destruyendo animal." << std::endl;
    };

Sin esto, al liberar un objeto derivado mediante
un punter a la clase base:

    Animal* animal = new Perro();
    delete animal;

sólo se ejecutaría el destructor de la clase base (Animal),
omitiendo el de Perro. Esto produce una fuga de memoria.

Con el desctructor virtual, C++ garantiza que ambos
destructores se ejecuten en el orden correcto.

===================================================
VENTAJAS DEL POLIMORFISMO DINÁMICO
===================================================

El verdadero objetivo del polimorfismo dinámico consiste
en permitir que múltples tipos de objetos sean tratados
como si pertenecieran a un mismo tipo general.

Gracias a esto, una aplicación puede trabajar con
objetos diferentes utilizando una única referencia
(o puntero) a la clase base. Esto permite:

    - Mayor flexibilidad.
    - Reutilización de código.
    - Reutilización de recursos de memoria.
    - Menor cantidad de estructuras condicionales.
    - Permite tratar múltiples objetos.

// [TODO]: Continuar con arreglos polimórficos.

*/