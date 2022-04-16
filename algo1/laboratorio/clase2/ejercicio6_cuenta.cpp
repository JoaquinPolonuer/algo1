#include <iostream>

float triplicarPorValor(float cuenta)
{
    return 3 * cuenta;
}

void triplicarPorReferencia(float &cuenta)
{
    cuenta = 3 * cuenta;
}

int main()
{
    float cuenta;
    float cuentaTriplicadaPorValor;

    std ::cout << "ingresar cuenta: " << std ::endl;
    std::cin >> cuenta;

    cuentaTriplicadaPorValor = triplicarPorValor(cuenta);
    triplicarPorReferencia(cuenta);

    std ::cout << "Cuenta triplicada por valor: " << cuentaTriplicadaPorValor << std ::endl;
    std ::cout << "Cuenta triplicada por referencia: " << cuenta << std ::endl;

    return 0;
}