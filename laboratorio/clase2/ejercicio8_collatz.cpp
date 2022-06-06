#include <iostream>

void collatzIterativa(int n, int &cantPasos)
{
    while (n != 1)
    {
        std ::cout << n << std ::endl;
        if (n % 2)
        {
            n = 3 * n + 1;
        }
        else
        {
            n /= 2;
        }
        cantPasos++;
    }
    std ::cout << n << std ::endl;
}

// Como deberiamos hacer la recursion sobre esta variable?
void collatzRecursiva(int n, int &cantPasos)
{
    if (n==1){
        std ::cout << n << std ::endl;
        return;
    }

    cantPasos++;
    std ::cout << n << std ::endl;
    if (n % 2)
    {   
        collatzRecursiva(3 * n + 1, cantPasos);
    }
    else
    {
        collatzRecursiva(n /= 2, cantPasos);
    }
}

int main()
{
    int n;
    int cantPasos = 1;

    std ::cout << "ingresar n: " << std ::endl;
    std::cin >> n;

    collatzIterativa(n, cantPasos);
    std ::cout << cantPasos << " pasos" << std ::endl;

    cantPasos = 1;
    collatzRecursiva(n, cantPasos);
    std ::cout << cantPasos << " pasos" << std ::endl;

    return 0;
}