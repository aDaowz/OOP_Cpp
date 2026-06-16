/*
 * ===================================================
 * POLIMORFISMO MEDIANTE HERENCIA
 * ===================================================
 *
 * El polimorfismo mediante herencia permite que
 * una misma operación produzca resultados
 * diferentes dependiendo del objeto que la ejecute.
 *
 * Esto significa que varias clases derivadas
 * pueden compartir un mismo método heredado,
 * pero implementar comportamientos distintos.
 *
 * ===================================================
 * RELACIÓN CON LA HERENCIA
 * ===================================================
 *
 * Para que exista polimorfismo mediante herencia,
 * debe existir una clase base y al menos una
 * clase derivada.
 *
 * Ejemplo:
 *
 *  - Figura
 *      - Cuadrado
 *      - Rectángulo
 *
 * Tanto Cuadrado como Rectángulo heredan de Figura,
 * pero cada uno puede implementar sus propios
 * comportamientos.
 *
 * ===================================================
 * MÉTODOS VIRTUALES
 * ===================================================
 *
 * Los métodos virtual permiten que las clases
 * derivadas reemplacen la implementación de un
 * método definido en la clase base.
 *
 * Ejemplo:
 *
 *      virtual void calcularArea();
 *
 * Esto indica que las clases derivadas pueden
 * proporcionar su propia versión del método.
 *
 * ===================================================
 * OVERRIDE
 * ===================================================
 *
 * La palabra reservada override indica que una
 * clase derivada está reescribiendo un método
 * virtual heredado desde la clase base.
 *
 * Ejemplo:
 *
 *      void calcularArea() override;
 *
 * Esto permite que cada clase derivada adapte
 * el comportamiento del método según sus propias
 * necesidades.
 *
 * ===================================================
 * VENTAJAS DE POLIMORFISMO
 * ===================================================
 *
 *    - Reutilización de código.
 *    - Mayor flexibilidad.
 *    - Mejor organización de clases.
 *    - Facilita la extensión del programa.
 *
 *
 */

 class Figura
{
    public:
        virtual void calcularArea();
};

class Cuadrado : public Figura
{
    public:
        void calcularArea() override;
};