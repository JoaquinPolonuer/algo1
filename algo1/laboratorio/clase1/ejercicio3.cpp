#include <iostream>

int f(int x, int y)
{
    if (x > y)
    {
        return x + y;
    }
    else
    {
        return x * y;
    }
}

int main()
{

    int x, y;

    std ::cout << "ingresar x: " << std ::endl;
    std::cin >> x;
    std ::cout << "ingresar y: " << std ::endl;
    std::cin >> y;

    std ::cout << "El resultado es: " << f(x, y) << std ::endl;

    return 0;
}