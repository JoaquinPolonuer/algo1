#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

vector<int> construir_vector(int n, string disposicion)
{

    vector<int> res;
    srand(time(NULL));
    int numero;

    if (disposicion == "asc")
    {
        for (int i = 0; i < n; i++)
        {
            res.push_back(i);
        }
    }
    else if (disposicion == "desc")
    {
        for (int i = n - 1; i >= 0; i--)
        {
            res.push_back(i);
        }
    }
    else if (disposicion == "azar")
    {
        for (int i = 0; i < n; i++)
        {
            numero = rand() % 100;
            res.push_back(numero);
        }
    }
    else if (disposicion == "iguales")
    {
        numero = rand() % 100;
        for (int i = 0; i < n; i++)
        {
            res.push_back(numero);
        }
    }
    else
    {
        cout << "Dispocisión no válida" << endl;
    }

    return res;
}

int busquedaBinaria(vector<int> v, int x){
    int low = 0;
    int high = v.size() - 1;
    while (low + 1 < high)
    {
        int mid = (low + high) / 2;
        if(v[mid] <= x){
            low = mid;
        }else{
            high = mid;
        }
    }
    return low;
}

int jumpSearch(vector<int> v, int x){
    int jump = sqrt(v.size());
    int i = 0;
    // entiendo facilmente la idea y la complejidad,
    // otro dia lo implemento.
    return 0;
}

int main()
{
    vector<int> v = construir_vector(100, "asc");

    int n;
    cin >> n;

    //int indice_n = busquedaBinaria(v, n);
    //int indice_n = jumpSearch(v, n);

    cout << "El indice es " << indice_n << endl;
    return indice_n;
}