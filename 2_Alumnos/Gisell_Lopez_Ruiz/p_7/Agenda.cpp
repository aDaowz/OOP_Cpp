#include <iostream>
#include <fstream>
#include <string>



const std::string fileName = "agenda.txt";


void agregarRegistro()
{
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string correo;

    std::cout << "\n===== AGREGAR REGISTRO =====\n";  

    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Apellido: ";
    std::getline(std::cin, apellido);

    std::cout << "Telefono: ";
    std::getline(std::cin, telefono);

    std::cout << "Correo electronico: ";
    std::getline(std::cin, correo);

   
    std::ofstream outputFile(fileName, std::ios::app);

    if (outputFile.is_open())
    {
        outputFile << nombre << std::endl;
        outputFile << apellido << std::endl;
        outputFile << telefono << std::endl;
        outputFile << correo << std::endl;

        outputFile.close();

        std::cout << "\nRegistro guardado correctamente.\n";
    }
    else
    {
        std::cout << "\nNo fue posible abrir el archivo.\n";
    }
}



void buscarRegistro()
{
    std::string nombreBuscado;

    std::cout << "\n===== BUSCAR REGISTRO =====\n";

    std::cout << "Ingrese el nombre a buscar: ";
    std::getline(std::cin, nombreBuscado);

    
    std::ifstream inputFile(fileName);

    if (!inputFile.is_open())
    {
        std::cout << "\nNo existe el archivo \n";
        return;
    }

    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string correo;

    bool encontrado = false;

   

    while (getline(inputFile, nombre))
    {
        getline(inputFile, apellido);
        getline(inputFile, telefono);
        getline(inputFile, correo);

        
        if (nombre == nombreBuscado)
        {
            std::cout << "\n===== REGISTRO ENCONTRADO =====\n";

            std::cout << "Nombre: " << nombre << std::endl;
            std::cout << "Apellido: " << apellido << std::endl;
            std::cout << "Telefono: " << telefono << std::endl;
            std::cout << "Correo: " << correo << std::endl;

            encontrado = true;
        }
    }

    inputFile.close();

    if (!encontrado)
    {
        std::cout << "\nNo se encontro ningun registro con ese nombre.\n";
    }
}



void menu()
{
    std::string opcion;

    do
    {
        std::cout << "\n============================\n";
        std::cout << "          AGENDA\n";
        std::cout << "============================\n";
        std::cout << "1. Agregar registro\n";
        std::cout << "2. Buscar registro\n";
        std::cout << "3. Salir\n";
        std::cout << "Seleccione una opcion: ";

        std::getline(std::cin, opcion);

        if (opcion == "1")
        {
            agregarRegistro();
        }
        else if (opcion == "2")
        {
            buscarRegistro();
        }
        else if (opcion == "3")
        {
            std::cout << "\nSaliendo de la agenda...\n";
        }
        else
        {
            std::cout << "\nOpcion no valida.\n";
        }

    } while (opcion != "3");
}


int main()
{
    menu();

    return 0;
}
