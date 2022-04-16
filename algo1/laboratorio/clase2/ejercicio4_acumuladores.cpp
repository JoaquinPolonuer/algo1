#include <iostream>

int power(int n, int k)
{
    int i = 0;
    int res = 1;

    while (i < k)
    {
        res = res * n;
        i++;
    }

    return res;
}

int binario_a_decimal(int bin)
{
    int acum = 0;
    int i = 0;
    int digit = 0;

    while (power(10,i) < bin)
    {
        digit = (bin % power(10,i+1)) / power(10,i);
        acum = acum + digit * power(2, i);
        i++;
    }
    return acum;
}

int main()
{
    int bin;

    std ::cout << "ingresar numero binario: " << std ::endl;
    std::cin >> bin;

    std ::cout << "El numero en decimal es: " << binario_a_decimal(bin) << std ::endl;

    return 0;
}