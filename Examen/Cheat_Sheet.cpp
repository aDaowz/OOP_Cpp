/*
================================================================================
CHEAT SHEET C++
Referencia rápida para examen - Programación I
================================================================================
*/


/*
================================================================================
DECLARACIÓN DE VARIABLES
================================================================================
*/

// ENTEROS
int numero = 18;
long long numeroGrande = 1234567890123LL;

// DECIMALES
float flotante = 19.99f;
double doble = 3.14159;

// BOOLEANO
bool booleano = true;

// CARACTER
char caracter = 'A';

// STRING
std::string cadena = "Hola mundo";


/*
=============================================================================
IMPRESIONES Y CAPTURA DE DATOS (ejemplo simple)
=============================================================================
*/

int datoCapturado = 0;
std::cout << "Ingresa un numero: ";
std::cin >> datoCapturado;


/*
=============================================================================
CONDICIONALES (if / else)
=============================================================================
*/

if (numero > 0) {
    // Código que se ejecuta si es verdadero
}
else if (numero == 0) {
    // Código que se ejecuta si es verdadero
}
else {
    // Código que se ejecuta si es falso
}

/*
=============================================================================
CONDICIONALES (switch case)
=============================================================================
*/

int valor = 0;

switch (valor) {
    case 1:
        {
            // Bloque de código
            break;
        }
    case 2:
        {
            // Bloque de código
            break;
        }
    default:
        {
            // Bloque de código
        }
}

/*
=============================================================================
CICLOS
=============================================================================
*/


// WHILE

    int i = 0;
    while (i <= 5) {
        // Código que se repite si la condición es verdadera
        i++;
    }

// DO-WHILE

    int i = 0;
    do {
        // Código que se repite si la condición es verdadera
        i++;
    } while (i < 5);


// FOR

    for (int i = 0; i < 5; i++) {
        // Código que se repite si la condición es verdadera
    }

/*
=============================================================================
DECLARACIÓN DE ARREGLOS Y MATRICES
=============================================================================
*/

int arreglo[5] = { 10, 20, 30, 40, 50 };


const int row = 2;
const int col = 3;
int matriz[row][col] = {
    { 1, 2, 3 },
    { 4, 5, 6 }
};


/*
================================================================================
FUNCIONES
================================================================================
*/

// FUNCION VOID

    // Definición

    void funcion()
    {
        // Bloque de código para la función
    }

    // Invocación

    funcion();

    
// FUNCION CON ARGUMENTOS Y RETURN

    // Definición

    int regresaNumero(int arg1, int arg2)
    {
        return arg1 + arg2;
    }

    // Invocación

    regresaNumero(1, 2);


    /*
================================================================================
FUNCIONES API
================================================================================
*/

// FUNCIÓN PARA CALCULAR LA LONGITUD DE UN ARREGLO DE STRING

std::string palabra = "Hola"; // Declaración de variable string
int x = palabra.length(); // Devuelve el entero que representa la longitud de la palabra

/*
================================================================================
APIs PARA VALIDACIÓN DE INPUTS
================================================================================
*/


// API PARA CAPTURAR UNA LÍNEA COMPLETA

std::string texto = "";
std::getline(std::cin, texto);
// Captura una línea completa desde std::cin y la almacena en texto.


// API PARA LEER UN STRING COMO FLUJO DE ENTRADA (istringstream)

#include <sstream>

std::istringstream objetoStreamer(texto);
// Objeto que permite leer y convertir el contenido de texto mediante >>.

int numeroConvertido = 0;
objetoStreamer >> numeroConvertido;
// El tipo de dato de numeroConvertido determinará el tipo de extracción buscado.
// Como numeroConvertido está declarado como int, objetoStreamer intenta extraer un número entero.
// Si logra extraer y convertir un entero, almacena el valor obtenido en objetoStreamer
// En una condición, la extracción se evalúa como true cuando logra obtener el tipo solicitado
// y como false cuando no puede obtenerlo.

// API PARA VALIDAR CARACTERES SOBRANTES

char caracterExtra = '\0';
// '\0' es el carácter nulo y se utiliza como valor inicial.

objetoStreamer >> caracterExtra;
// Intenta extraer el siguiente carácter que no sea un espacio.
// En una condición, la extracción se evalúa como true si encuentra
// otro carácter. Esto indica que existe contenido adicional.