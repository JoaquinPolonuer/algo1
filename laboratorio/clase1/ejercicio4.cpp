#include <iostream>

bool esPrimo(int n)
{
    int i = 2;
    if (n == 2)
    {
        return true;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }

    return true;
}

int main()
{

    int n;

    std ::cout << "ingresar n: " << std ::endl;
    std::cin >> n;

    std ::cout << "El resultado es: " << esPrimo(n) << std ::endl;

    return 0;
}