#include <iostream>

int sumaIterativa(int n)
{
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }
    return sum;
}

int sumaDivisoresAux(int n0, int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        if (n0 % n == 0)
        {
            return n + sumaDivisoresAux(n0, n - 1);
        }
        else
        {
            return sumaDivisoresAux(n0, n - 1);
        }
    }
}

int sumaRecursiva(int n)
{
    return sumaDivisoresAux(n, n);
}

int main()
{

    int n;

    std ::cout << "ingresar n: " << std ::endl;
    std::cin >> n;

    std ::cout << "El resultado iterativo es: " << sumaIterativa(n) << std ::endl;
    std ::cout << "El resultado recursivo es: " << sumaRecursiva(n) << std ::endl;
    // Suma todos sus divisores entre 1 y n inclusive
    return 0;
}