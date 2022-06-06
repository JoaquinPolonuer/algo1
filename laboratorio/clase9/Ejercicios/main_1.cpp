#include "ejercicios.h"

using namespace std;

int main() {
    int n = 0; int hasta = 10000; int paso = 500;
    ofstream fout;
    fout.open("datos.csv");
    fout << "n\t" << "tiempo" <<endl;

    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0 = clock();
        int indice = hayDuplicados(v);
        double t1 = clock();

        double tiempo = (double (t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n+=paso;
    }
    fout.close();

    //para el ejercicio puedo hacer
    //O(1) una suma
    //O(n) busqueda lineal
    //O(n3) una multiplicacion de matrices
    //O(nlogn) una busqueda binaria en muchas listas
    return 0;
}