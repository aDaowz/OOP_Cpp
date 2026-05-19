#include <iostream>
#include <string>

/*
 * ==========================================
 * Programación Orientada a Objetos (OOP)
 * ==========================================
 * 
 * La programación Orientada a Objetos es un paradigma
 * en el que se utilizan los objetos para representar
 * entidades del mundo real.
 * 
 * Esto significa que las entidades del mundo real pueden
 * modelarse dentro del programa por medio de objetos.
 * 
 * Un objeto consta de:
 * 
 *  - Atributos (datos ó características)
 *  - Métodos (funciones ó acciones)
 *  
 *  Nota: los atributos también pueden ser nombrados
 *      como miembros o propiedades.
 *  
 * ==========================================
 * Clases
 * ==========================================
 * 
 * Una clase es una plantilla o molde que se utiliza
 * para crear objetos. Dentro de la clase se definen
 * las características de los objetos que serán
 * instanciados.
 * 
 * Ejemplo:
 * 
 *  Una clase "Persona" puede representar a cualquier
 *  persona instanciada, dado que todas las personas
 *  tienen atributos y métodos en común.
 *  
 *  ==========================================
 *  Atributos
 *  ==========================================
 *  
 *  Los atributos son variables que pertenecen
 *  a una clase. Estas variables pueden ser del
 *  tipo de datos ya conocidos previamente, como
 *  int, float, bool, string, etc, pero también
 *  pueden ser de tipo de datos compuestos.
 *  
 *  Se utilizan para almacenar información del objeto.
 *  
 *  Ejemplo:
 *      
 *      ----------------------
 *      + Persona
 *      ----------------------
 *      + string nombre
 *      + int edad
 * 
 * ==========================================
 * Métodos
 * ==========================================
 * 
 * Los métodos son funciones que pertenecen a
 * una clase.
 * 
 * Las características de las funciones
 * son iguales a las ya conocidas: pueden ser void 
 * o que regresen algún tipo de dato, y sus parámetros
 * se rigen bajo las mismas reglas que una función
 * regular.
 * 
 * Se utilizan para definir el comportamiento del objeto.
 * 
 * Ejemplo:
 * 
 *      ----------------------
 *      Persona
 *      ----------------------
 *      + string nombre
 *      + int edad
 *      ----------------------
 *      + void saludar()
 *      + void mostrarInformacion()
 * 
 * ==========================================
 * Constructor
 * ==========================================
 * 
 * El constructor es un método especial que se
 * ejecuta automáticamente cuando se crea un
 * objeto.
 * 
 * Se utiliza para inicializar el objeto.
 * 
 * Los constructores son los únicos métodos
 * cuyo nombre es EL MISMO que el de la clase.
 * Esta es la forma de identificarlos de un
 * método regular.
 * 
 * Las clases pueden contener N cantidad de
 * constructores.
 * 
 * Nota: Cuando un constructor no está explícitamente
 * definido, el compilador genera un constructor
 * VACÍO para poder inicializar los objetos.
 *
 * ==========================================
 * "This" keyword
 * ==========================================
 *
 * This es una palabra reservada contextual que se utiliza
 * para referirse al scope del objeto actual. Es decir, se
 * utiliza para diferenciar entre los atributos
 * de la clase y los parámetros del constructor
 * o métodos cuando tienen el mismo nombre.
 *
 * Esto tambien aplica para los getters y setters.
 * 
 * ==========================================
 * Objeto
 * ==========================================
 * 
 * Un objeto es una instancia de un clase; es
 * decir, es un elemento creado a partir de una
 * clase, con valores específicos en sus atributos.
 *
 */

class Persona
{
public:
    std::string nombre;
    int edad;

    Persona() { /* Constructor vacío */ } // Constructor vacío explícitamente declarado

    Persona(std::string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }

    void MostrarInformacion()
    {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }
};

int main()
{
    // Estructrua para instanciar objetos

    // 1. Clase
    // 2. Identificador (nombre objeto)
    // 3. Operador de asignación
    // 4. new
    // 5. Invocación de constructor

    Persona miObjeto; // instancia
    miObjeto.nombre = "Antonio";
    miObjeto.edad = 39;
    miObjeto.MostrarInformacion();

    Persona persona2("Gisell", 19);
    persona2.MostrarInformacion();

    return 0;
}