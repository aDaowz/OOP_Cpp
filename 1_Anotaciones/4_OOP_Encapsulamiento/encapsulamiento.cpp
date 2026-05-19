#include <iostream>
#include <string>

/*
 * ==========================================
 * Encapsulamiento
 * ==========================================
 * 
 * El encapsulamiento es un principio de la
 * programación orientada a objetos que consiste en
 * oculatar los datos de una clase y permitir el acceso
 * a ellos únicamente a través de métodos específicos.
 * 
 * Esto significa que no todos los atributos
 * o métodos deben ser accesibles directamente
 * desde el exterior de la clase.
 * 
 * ==========================================
 * Modificadores de acceso
 * ==========================================
 * 
 * Los modificadores de acceso permiten definir
 * desde dónde se puede acceder a los atributos
 * y métodos de una clase. En otras palabras,
 * definien el grado de visibilidad del contenido
 * de la clase.
 * 
 * Ejemplos de modificadores de acceso:
 * 
 *  public      Accesible desde cualquier parte  
 *  private     Accesible sólo dentro de la clase
 *
 *  ==========================================
 *  Encapsulamiento aplicado
 *  ==========================================
 * 
 * Para aplicar encapsulamiento, los atributos se
 * definen como private. De esta forma, estos
 * atributos no pueden ser visibles desde el exterior
 * de la clase.
 * 
 * En su lugar, se utilizan métodos para acceder o
 * modificar su valor. Estos métodos son denominados:
 * getters y setters.
 * 
 * ==========================================
 * Getters y Setters
 * ==========================================
 * 
 * Getters
 * 
 * Son métodos que permiten obtener el valor
 * de un atributo privado. Por naturaleza, son
 * métodos públicos que devuelven el tipo de dato 
 * correspondiente al atributo que se pretende
 * obtener.
 * 
 * Setters
 * 
 * Son métodos que permiten modificar o insertar
 * valores de un atributo de la clase. Por naturaleza
 * los setters son métodos públicos que reciben
 * parámetros los cuales son usados para modificar
 * los valores de sus atributos. Así mismo, son
 * por naturaleza funciones de tipo void.
 * 
 */

class Persona
{
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }

    // Getter para nombre
    std::string GetNombre()
    {
        return nombre;
    }

    int GetEdad()
    {
        return edad;
    }

    // Setter para nombre
    void SetNombre(std::string nombre)
    {
        this->nombre = nombre;
    }

    void SetEdad(int edad)
    {
        this->edad = edad;
    }

private:
    void MostrarInformacion()
    {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }
};

int main()
{
    Persona persona("Gisell", 19);

    // Obtención de valores (Getter)
    std::cout << "Nombre: " << persona.GetNombre() << std::endl;
    std::cout << "Edad: " << persona.GetEdad() << std::endl;

    // Inserción de valores
    persona.SetNombre("Antonio");
    persona.SetEdad(39);

    std::cin.get();

    return 0;
}