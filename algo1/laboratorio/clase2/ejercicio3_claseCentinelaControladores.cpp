#include <iostream>

int main()
{

    float nota;
    float cantidadNotas = 0;
    float cumNotas = 0;
    float promedio;
    int aprobados = 0;
    // La manera es usando floats o hay un mejor metodo?
    while (nota != -1)
    {
        std ::cout << "ingresar nota (-1 para terminar): " << std ::endl;
        std::cin >> nota;
        cumNotas += nota;

        cantidadNotas++;
        if (nota > 6)
        {
            aprobados++;
        }
    }
    if (cantidadNotas < 6)
    {
        std ::cout << "Error, pocas notas" << std ::endl;
        return 1;
    }

    if ((aprobados / cantidadNotas) > (2 / 3))
    {
        std ::cout << "Se puede incrementar el cupo" << std ::endl;
    }

    promedio = cumNotas / cantidadNotas;
    std ::cout << "El promedio es de: " << promedio << std ::endl;
    std ::cout << "La suma total es: " << cumNotas << std ::endl;

    return 0;
}