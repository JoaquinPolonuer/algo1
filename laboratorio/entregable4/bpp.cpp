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

int bestFit(int W, vector<int> &items)
{
    multiset<int> restos;
    for (int i = 0; i < (int)items.size(); ++i)
    {
        restos.insert(W);
    }
    int res = 0;
    for (int i = 0; i < (int)items.size(); ++i)
    {
        multiset<int>::iterator it = restos.lower_bound(items[i]);
        int restoAct = *it;
        if (restoAct == W)
        {
            res++;
        }
        restoAct -= items[i];
        restos.erase(it);
        restos.insert(restoAct);
    }
    return res;
}

int main()
{
    int N, W, aux;

    // Se levantan los items y la capacidad del contenedor
    cin >> N >> W;
    vector<int> items;
    for (int i = 0; i < N; ++i)
    {
        cin >> aux;
        items.push_back(aux);
    }
    // Se corre best-fit
    int cant1 = bestFit(W, items);
    cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

    // Se ordenan los items
    ordenar(items);
    // Se corre best-fit-decreasing
    int cant2 = bestFit(W, items);
    cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

    return 0;
}
