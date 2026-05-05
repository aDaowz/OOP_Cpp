/*
 * ==========================================
 * Punteros y operador -> (Introducción)
 * ==========================================
 * 
 * En C++, un puntero es una variable que almacena
 * la dirección de memoria de otra variable.
 * 
 * Esto significa que, en lugar de guardar directamente
 * un valor (como un int o string), un puntero guarda
 * la ubicación donde ese valor se encuentra en memoria.
 * 
 * ==========================================
 * Punteros en objetos
 * ==========================================
 * 
 * Cuando se trabaja con clases y objetos, existe un
 * puntero especial llamado "this".
 * 
 * Este puntero hace referencia al objeto actual; es
 * decir, al objeto que está ejecutando el método o
 * constructor en ese momento.
 * 
 * En otras palabras:
 * 
 *  this = dirección de memoria del objeto actual
 * 
 * ==========================================
 * Operador ->
 * ==========================================
 * 
 * En C++, cuando se tiene un puntero a un objeto,
 * no se puede acceder a sus atributos usando el
 * operador punto (.), sino que se utiliza el
 * operador flecha (->).
 * 
 * Sintaxis:
 * 
 *      puntero->atributo
 * 
 * Esto indica que se quiere acceder al atributo
 * del objeto al que el puntero está apuntando.
 * 
 * ==========================================
 * Uso de this->
 * ==========================================
 * 
 * En el contexto de una clase, el puntero "this"
 * se utiliza para acceder a los atributos del
 * objeto actual.
 * 
 * Ejemplo:
 * 
 *      this->nombre = nombre;
 * 
 * Esto significa:
 * 
 *      "Asigna al atributo 'nombre' del objeto actual
 *       el valor del parámetro 'nombre'"
 * 
 * ==========================================
 * Nota importante
 * ==========================================
 * 
 * El uso de "this->" es necesario cuando existe
 * ambigüedad entre el nombre de los atributos
 * de la clase y los parámetros de un método o
 * constructor.
 * 
 * Si los nombres son diferentes, no es obligatorio
 * usar "this->".
 * 
 * Ejemplo:
 * 
 *      Persona(string _nombre)
 *      {
 *          nombre = _nombre; // No se requiere this->
 *      }
 * 
 * 
 */