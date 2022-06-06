#include <iostream>

int combinatorioIterativo(int n, int k)
{
    int combinatorio = 1;
    int i = 1;
    while (i <= k)
    {
        combinatorio = combinatorio * (n-k+i);
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

    int n;
    int k;

    std ::cout << "ingresar n: " << std ::endl;
    std::cin >> n;

    std ::cout << "ingresar k: " << std ::endl;
    std::cin >> k;

    std ::cout << "El resultado iterativo es: " << combinatorioIterativo(n, k) << std ::endl;
    std ::cout << "El resultado recursivo es: " << combinatorioRecursivo(n, k) << std ::endl;

    return 0;
}