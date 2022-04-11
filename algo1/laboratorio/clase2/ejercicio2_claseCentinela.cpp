#include <iostream>

int combinatorioIterativo(int n, int k)
{
    int combinatorio = 1;
    int i = 1;
    while (i <= k)
    {
        combinatorio = combinatorio * (n - k + i);
        combinatorio /= i;
        // este metodo funciona porque combinatorio es la
        // multiplicacion de i numeros consecutivos
        // entonces siempre vamos a poder dividir por i y tener resto 0
        // ya que en i numeros consecutivos, hay un multiplo de i si o si
        i++;
    }
    return combinatorio;
}

int combinatorioRecursivo(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    else if (n == k)
    {
        return 1;
    }
    else
    {
        return combinatorioRecursivo(n - 1, k) + combinatorioRecursivo(n - 1, k - 1);
    }
}

int main()
{

    float nota;
    float cantidadNotas = 0;
    float cumNotas = 0;
    float promedio;
    
    // La manera es usando floats o hay un mejor metodo?
    while (nota != -1)
    {
        std ::cout << "ingresar nota (-1 para terminar): " << std ::endl;
        std::cin >> nota;
        cantidadNotas += 1;
        cumNotas += nota;
    }

    promedio = cumNotas / cantidadNotas;
    std ::cout << "El promedio es de: " << promedio << std ::endl;
    std ::cout << "La suma total es: " << cumNotas << std ::endl;

    return 0;
}