#include <iostream>

void swap(int &a, int &b)
{
    int a_ = a;

    a = b;
    b = a_;
}

// Estara bien esta forma de hacerlo? Me parece demasiado basica
int main()
{
    int a;
    int b;

    std ::cout << "ingresar a: " << std ::endl;
    std::cin >> a;

    std ::cout << "ingresar b: " << std ::endl;
    std::cin >> b;

    swap(a, b);

    std ::cout << "Ahora a vale: " << a << std ::endl;
    std ::cout << "y b vale: " << b << std ::endl;

    return 0;
}