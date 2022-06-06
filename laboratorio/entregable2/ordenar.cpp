#include <vector>
#include <iostream>

using namespace std;

int indiceMinSubsec(vector<int> v, int l, int r){
  int min = v[l];
  int indice_min = l;
  for (int i = l; i<=r; i++){
    if (v[i] < min){
      min = v[i];
      indice_min = i;
    }
  }
  return indice_min;
}

void ordenar1(vector<int>& v){
  int i = 0;
  int posicion;
  int indice_min;

  while (i<v.size()){
    posicion = v[i];
    indice_min = indiceMinSubsec(v, i, v.size()-1);

    v[i] = v[indice_min];
    v[indice_min] = posicion;
    
    i++;
  }
  return;
}

int main() {
    /* No hace falta modificar el main */
    
    // Leo las entradas
    int n; //Longitud del vector
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Hago el ordenamiento
    ordenar1(v);
    
    // Imprimo el vector resultado
    i = 0;
    while (i < v.size()){
        cout << v[i] << " ";
        i++;
    }
    
    return 0;
}
