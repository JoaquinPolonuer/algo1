#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int minimo(vector<int> v)
{
    int i_min = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < v[i_min])
        {
            i_min = i;
        }
    }
    return i_min;
}

int maximo(vector<int> v)
{
    int i_max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i_max])
        {
            i_max = i;
        }
    }
    return i_max;
}

void ordenar(vector<int> &items)
{
    int min = items[minimo(items)];
    int max = items[maximo(items)];

    vector<int> cantidades(max - min + 1, 0);

    for (int i = 0; i < items.size(); i++)
    {
        int element = items[i];
        cantidades[items[i] - min] = cantidades[items[i] - min] + 1;
    }

    vector<int> ordenada;
    for (int i = cantidades.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < cantidades[i]; j++)
        {
            ordenada.push_back(min + i);
        }
    }
    items = ordenada;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo las entradas
    int n;
    cin >> n;
    int i = 0;
    int x;
    vector<int> v; // En v leo el vector
    while (i < n)
    {
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Calculo el punto fijo de v
    ordenar(v);

    return 0;
}
