#include <iostream>
#include <string>

int ObtenerValor(char simbolo)
{
    switch (simbolo)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;

        default:
            return 0;
    }
}

int ConvertirRomanoADecimal(std::string romano)
{
    int resultado = 0;

    for (int i = 0; i < romano.length(); i++)
    {
        int valorActual = ObtenerValor(romano[i]);

        if (i < romano.length() - 1)
        {
            int valorSiguiente = ObtenerValor(romano[i + 1]);

            if (valorActual < valorSiguiente)
            {
                resultado -= valorActual;
            }
            else
            {
                resultado += valorActual;
            }
        }
        else
        {
            resultado += valorActual;
        }
    }

    return resultado;
}

int main()
{
    std::string numeroRomano;

    std::cout << "Introduce un numero romano: ";
    std::cin >> numeroRomano;

    int resultado = ConvertirRomanoADecimal(numeroRomano);

    std::cout << "Valor decimal: " << resultado << std::endl;

    std::cin.get();
    std::cin.get();

    return 0;
}