#include <iostream>

void calcularArea(float radio, float &area)
{
    float pi = 3.14159;
    area = pi * radio;
}

void calcularPerimetro(float radio, float &perimetro)
{
    float pi = 3.14159;
    perimetro = pi * 2 * radio;
}

int main()
{
    int radio;
    float area;
    float perimetro;

    std ::cout << "ingresar radio: " << std ::endl;
    std::cin >> radio;

    calcularArea(radio, area);
    calcularPerimetro(radio, perimetro);

    std ::cout << "El diametro es: " << 2 * radio << std ::endl;
    std ::cout << "El perimetro es: " << perimetro << std ::endl;
    std ::cout << "El area es: " << area << std ::endl;

    return 0;
}