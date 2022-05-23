#include <iostream>
#include <vector>

using namespace std;

bool esTriangular(const vector<vector<int> > &m){
    bool es_triangular_1 = true;
    bool es_triangular_2 = true;
    for(int i = 0; i < m.size(); i++){
        for(int j = i + 1; j<m.size(); j++){
            if (m[i][j] != 0){
                es_triangular_1 = false;
            }
        }
    }
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j<i; j++){
            if (m[i][j] != 0){
                es_triangular_2 = false;
            }
        }
    }
	return es_triangular_1 || es_triangular_2;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    int n; // Cantidad de filas y columnas de la matriz
    cin >> n;
    int x;
    int filas = n, columnas = n;
    vector<vector<int> > m(filas, vector<int>(columnas, 0)); // En m leo la matriz
    
    for (int f = 0; f < filas; ++f) {
        for (int c = 0; c < columnas; ++c) {
            cin >> x;
            m[f][c] = x;
        }
    }

    bool res = esTriangular(m);
    cout << (res ? "true" : "false");    
    return 0;
}
