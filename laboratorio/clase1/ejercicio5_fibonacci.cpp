#include <iostream>

int fibonacciIterativo(int n)
{
    int i = 1;
    int f_n0 = 0;
    int f_n1 = 1;
    int f_n2;

    while (i < n){
        f_n2 = f_n0 + f_n1;
        f_n0 = f_n1;
        f_n1 = f_n2;
        i++;
    }
    return f_n1;
}

int fibonacciRecursivo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}

int main()
{

    int n;

    std ::cout << "ingresar n: " << std ::endl;
    std::cin >> n;

    std ::cout << "El resultado iterativo es: " << fibonacciIterativo(n) << std ::endl;
    std ::cout << "El resultado recursivo es: " << fibonacciRecursivo(n) << std ::endl;

    return 0;
}