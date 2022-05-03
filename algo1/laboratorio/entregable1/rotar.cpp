#include <iostream>
#include <vector>

using namespace std;

vector<int> rotar(vector<int> v, int k)
{
    //seria divertido hacerlo en el mismo vector
    vector <int> v_rotado;
    for (int i = 0; i < v.size(); i++)
    {
        v_rotado.push_back(v[(i + k) % v.size()]);
    }
    return v_rotado;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; // Longitud del vector a rotar
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

    int k; // La cantidad que tengo que rotar la guardo en k
    cin >> k;

    // Hago la rotacion
    vector<int> res = rotar(v, k);
    i = 0;

    // Imprimo el vector resultado
    while (i < res.size())
    {
        cout << res[i] << " ";
        i++;
    }

    return 0;
}

