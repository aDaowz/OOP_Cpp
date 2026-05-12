#include <iostream>

// Paso de parámetros
//    - Por valor           // Cuando los tipos de datos son primitivos (de parámetros)
//    - Por referencia      // Cuando los tipos de datos son compuestos (parámetros)
void swapNormal(int x, int y)
{
    int temporal = x;
    x = y;
    y = temporal;
}

// En C++ se puede manejar la memoria explicita y directamente.
void swapPunteros(int* x, int* y)
{
    int temporal = *x;
    *x = *y;
    *y = temporal;
}


int main() {
    /*
    ================================================================================
    PUNTEROS (POINTERS) - EXPLICACION BASICA
    ================================================================================

    Un puntero es una variable especial cuyo valor NO es un numero "normal" como 100,
    sino una DIRECCION DE MEMORIA.

    Esa direccion de memoria normalmente corresponde a otra variable.

    En otras palabras:

    - Una variable normal (int, float, etc.) guarda un valor.
    - Un puntero (int*) guarda una direccion de memoria donde existe un valor.

    ================================================================================
    OPERADORES IMPORTANTES
    ================================================================================

    &  (operador de direccion)
       Devuelve la direccion de memoria de una variable.

    *  (operador de desreferencia)
       Permite acceder al valor almacenado en la direccion a la que apunta un puntero.

    ================================================================================
    */

    /*
    ---------------------------------------------------------------------------
    1. VARIABLE NORMAL
    ---------------------------------------------------------------------------

    Se declara una variable normal llamada VARIABLE.
    Esta almacena el valor 100.
    */

    int VARIABLE = 100;
    std::cout << "* Valor de VARIABLE: " << VARIABLE << std::endl;  // 100

    // Se muestra la direccion de memoria donde vive VARIABLE.
    std::cout << "* Direccion de memoria de VARIABLE (&VARIABLE): " << &VARIABLE << std::endl;  // 00000094537BF614


    /*
    ---------------------------------------------------------------------------
    2. DECLARACION DE UN PUNTERO
    ---------------------------------------------------------------------------

    Un puntero se declara usando un asterisco junto al tipo de dato.

    int* significa: "puntero a int"

    En este caso:
    direccion_de_VARIABLE guardara la direccion de memoria de VARIABLE.
    */

    int* direccion_de_VARIABLE = &VARIABLE;

    /*
    Es importante notar que:

    - direccion_de_VARIABLE (sin &) es el CONTENIDO del puntero.
      Es decir que el puntero contiene la direccion a la que apunta. Esto no es válido!!!!

    - &direccion_de_VARIABLE (con &) es la direccion de memoria donde vive el puntero
      como variable.

    Esto explica por que esos dos valores normalmente son diferentes.
    */

    std::cout << "* Contenido del puntero direccion_de_VARIABLE (a donde apunta): " // 00000094537BF614
              << direccion_de_VARIABLE << std::endl;

    std::cout << "* Direccion de memoria del puntero (&direccion_de_VARIABLE): "  // 00000094537BF638
              << &direccion_de_VARIABLE << std::endl;

    /*
    Si todo esta bien, esto deberia cumplirse:
    direccion_de_VARIABLE == &VARIABLE
    porque el puntero guarda la direccion de VARIABLE.
    */


    /*
    ---------------------------------------------------------------------------
    3. DESREFERENCIA DE UN PUNTERO
    ---------------------------------------------------------------------------

    Desreferenciar significa:

    "Ir a la direccion almacenada en el puntero y obtener el valor que existe ahi".

    Se hace usando * delante del puntero.
    */

    int valor_desreferenciado_de_VARIABLE = *direccion_de_VARIABLE;

    std::cout << "* Valor obtenido al desreferenciar (*direccion_de_VARIABLE): "  // 100
              << valor_desreferenciado_de_VARIABLE << std::endl;


    /*
    ---------------------------------------------------------------------------
    4. COMPARACION CON COPIA NORMAL
    ---------------------------------------------------------------------------

    Aqui solo copiamos el valor directamente desde VARIABLE.
    */

    int valor_normal_de_VARIABLE = VARIABLE;

    std::cout << "* Copia normal (valor_normal_de_VARIABLE): "  // 100
              << valor_normal_de_VARIABLE << std::endl;


    /*
    ---------------------------------------------------------------------------
    CONCLUSIONES
    ---------------------------------------------------------------------------

    1) Una variable normal guarda un valor.
    2) Un puntero guarda una direccion de memoria.
    3) & obtiene direcciones de variables.
    4) * permite obtener el valor ubicado en la direccion guardada por el puntero.

    ---------------------------------------------------------------------------
    */

    

    /*
    ---------------------------------------------------------------------------
    EJEMPLO DE APLICACIÓN
    ---------------------------------------------------------------------------

    Crear una función que intercambie (swap) los valores de dos variables enteras.

    Si:

    x = 10
    y = 20

    Entonces después del swap quedaría:

    x = 20
    y = 10


    */

    int a = 10;
    int b = 20;

    swapNormal(a, b); // No ocurre swap porque la función recibió COPIAS de los valores.
    //swapPunteros(&a, &b); // La función no trabaja sobre copias sino directamente sobre las variables originales.

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}
