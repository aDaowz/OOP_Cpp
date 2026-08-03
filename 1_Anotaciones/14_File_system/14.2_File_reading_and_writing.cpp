#include <iostream>
#include <fstream>
#include <string>

/*
* ----------------------------------------------------------------
* ESCRITURA Y LECTURA DE ARCHIVOS
* ----------------------------------------------------------------
*
* La librería <fstream> proporciona clases que permiten trabajar con
* archivos mediante flujos de datos:
*
*     - std::ofstream: permite escribir datos en un archivo.
*     - std::ifstream: permite leer datos desde un archivo.
*
* En ambos casos se crea un objeto que representa la comunicación entre
* la aplicación y el archivo.
*
* Esta aplicación realiza dos operaciones:
*
*     1. Crea un archivo de texto y escribe información en él.
*     2. Abre el mismo archivo, lee su contenido y lo muestra en consola.
*
* El archivo se crea mediante una ruta relativa. Esto significa que
* data.txt se guardará en el directorio desde el cual se ejecute la
* aplicación y no dependerá de una ruta específica de la computadora.
*
*/

int main()
{
    std::string fileName = "data.txt";

    /*
    * ----------------------------------------------------------------
    * ESCRITURA DEL ARCHIVO
    * ----------------------------------------------------------------
    *
    * outputFile es un objeto de la clase std::ofstream.
    * Al recibir fileName, intenta abrir ese archivo para escritura.
    *
    * Si data.txt no existe, se crea automáticamente.
    * Si ya existe, su contenido anterior se reemplaza en este ejemplo.
    */
    std::ofstream outputFile(fileName);

    /*
    * is_open() permite comprobar si el archivo pudo abrirse.
    * La escritura solamente debe realizarse cuando devuelve true.
    */
    if (outputFile.is_open())
    {
        /*
        * El operador << envía información hacia el archivo.
        * Su uso es semejante a std::cout, pero el destino de los datos
        * es outputFile en lugar de la consola.
        */
        outputFile << "Hola mundo!" << std::endl;
        outputFile << "Este texto fue guardado desde C++." << std::endl;

        /*
        * close() cierra la comunicación con el archivo.
        * Después de cerrarlo, outputFile ya no puede escribir en él
        * hasta que vuelva a abrirse.
        */
        outputFile.close();

        std::cout << "El archivo fue creado correctamente." << std::endl;
    }
    else
    {
        std::cout << "No fue posible crear el archivo." << std::endl;
    }

    /*
    * ----------------------------------------------------------------
    * LECTURA DEL ARCHIVO
    * ----------------------------------------------------------------
    *
    * inputFile es un objeto de la clase std::ifstream.
    * Al recibir fileName, intenta abrir el archivo para lectura.
    */
    std::ifstream inputFile(fileName);

    if (inputFile.is_open())
    {
        std::string line;

        std::cout << "\nContenido del archivo:" << std::endl;

        /*
        * std::getline() intenta leer una línea completa desde inputFile
        * y almacenarla en line.
        *
        * La expresión se evalúa como true cuando logra leer una línea.
        * Cuando ya no existen más líneas, se evalúa como false y termina
        * el ciclo.
        */
        while (std::getline(inputFile, line))
        {
            std::cout << line << std::endl;
        }

        /*
        * Cuando termina la lectura, también se cierra la comunicación
        * con el archivo de forma explícita.
        */
        inputFile.close();
    }
    else
    {
        std::cout << "No fue posible abrir el archivo." << std::endl;
    }

    return 0;
}
