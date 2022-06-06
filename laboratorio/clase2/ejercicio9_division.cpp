#include <iostream>

void divisionIterativa(int dividendo, int divisor, int &cociente, int &resto)
{
    while ((cociente + 1) * divisor <= dividendo)
    {
        cociente++;
    }
    resto = dividendo - cociente * divisor;
}

void divisionRecursiva(int dividendo, int divisor, int &cociente, int &resto)
{
    if ((cociente + 1) * divisor <= dividendo){
        cociente++;
        divisionRecursiva(dividendo, divisor, cociente, resto);
    }
    resto = dividendo - cociente * divisor;
}

int main()
{
    int dividendo;
    int divisor;
    int resto = 0;
    int cociente = 0;

    std ::cout << "Dividendo: " << std ::endl;
    std::cin >> dividendo;

    std ::cout << "Divisor: " << std ::endl;
    std::cin >> divisor;

    divisionIterativa(dividendo, divisor, cociente, resto);

    std ::cout << "(iterativa) El cociente es: " << cociente << std ::endl;
    std ::cout << "(iterativa) El resto es: " << resto << std ::endl;

    cociente = 0;
    resto = 0;

    divisionRecursiva(dividendo, divisor, cociente, resto);

    std ::cout << "(recursiva) El cociente es: " << cociente << std ::endl;
    std ::cout << "(recursiva) El resto es: " << resto << std ::endl;

    return 0;
}