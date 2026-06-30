#include <iostream>

int main()
{
    int opcion;
    double x = 0;
    double y = 0;
    double resultado = 0;

    do {
        std::cout << "\n  +--------------------------------+" << std::endl;
        std::cout << "  |     MENU DE OPERACIONES        |" << std::endl;
        std::cout << "  +--------------------------------+" << std::endl;
        std::cout << "  |  1. Suma            (+)        |" << std::endl;
        std::cout << "  |  2. Resta           (-)        |" << std::endl;
        std::cout << "  |  3. Multiplicacion  (*)        |" << std::endl;
        std::cout << "  |  4. Division        (/)        |" << std::endl;
        std::cout << "  |  5. Salir                      |" << std::endl;
        std::cout << "  +--------------------------------+" << std::endl;
        std::cout << "  Seleccione una opcion: ";
        std::cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            std::cout << "Ingrese el primer numero: ";
            std::cin >> x;
            std::cout << "Ingrese el segundo numero: ";
            std::cin >> y;
        }

        switch (opcion) {
            case 1:
                resultado = x + y;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 2:
                resultado = x - y;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 3:
                resultado = x * y;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
            case 4:
                if (y != 0) {
                    resultado = x / y;
                    std::cout << "Resultado: " << resultado << std::endl;
                }
                else {
                    std::cout << "Error: No se puede dividir entre cero." << std::endl;
                }
                break;
            case 5:
                std::cout << "Saliendo de la aplicacion..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Intente nuevamente." << std::endl;
        }

    } while (opcion != 5);

    return 0;
}