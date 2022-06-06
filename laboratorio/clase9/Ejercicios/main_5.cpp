#include "ejercicios.h"

using namespace std;

int main() {
    int n = 0; int hasta = 1000000; int paso = 10000;
    ofstream fout;
    fout.open("datos_ej_5_push_back.csv");
    fout << "n\t" << "tiempo" <<endl;

    vector<int> v = construir_vector(n, "asc");
    while(n < hasta){
        double t0 = clock();
        v.push_back(2);
        double t1 = clock();

        double tiempo = (double (t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n+=paso;
    }
    fout.close();

    return 0;
}