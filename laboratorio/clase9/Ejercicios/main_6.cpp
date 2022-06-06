#include "ejercicios.h"

using namespace std;

int main() {
    int n = 0; int hasta = 10000; int paso = 500;
    ofstream fout;
    fout.open("datos_6.csv");
    fout << "n\t" << "tiempo" <<endl;

    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0 = clock();
        algunSubconjSuma(v, 1);
        double t1 = clock();

        double tiempo = (double (t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n+=paso;
    }
    // parece ser que el programa es lineal
    // cambia cuando sum es mas grande (creo que es pq no suele ocurrir el peor caso)
    fout.close();

    return 0;
}