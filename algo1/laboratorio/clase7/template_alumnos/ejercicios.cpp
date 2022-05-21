#include "ejercicios.h"

vector<vector<int> > productoVectorial(vector<int> u, vector<int> v){
	vector<vector<int>> res(u.size(), vector<int>(v.size()));
    for(int i = 0; i<u.size(); i++){
        for(int j = 0; j<v.size(); j++){
            res[i][j] = u[i]*v[j];
        }
    }
	return res;
}

void trasponer(vector<vector<int> > &m) {
    for(int i = 0; i<m.size(); i++){
        for(int j = i; j<m.size()+1/2; j++){
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
	return;
}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
    vector<vector<int> > res(m1.size(), vector<int>(m2[0].size()));
    for(int i = 0; i<m1.size(); i++){
        for(int j=0; j<m2.size(); j++){
            for(int k=0; k<m2[j].size(); k++){
                res[i][k] += m1[i][j]*m2[j][k];
            }
        }
    }
	return res;
}

bool enRangoDeMatriz(int i, int j,vector<vector<int>> m){
    bool enRango = (0 <= i
                    && i < m.size()
                    && 0 <= j
                    && j < m[i].size());
    return enRango;
}
vector<vector<int>> promediar(vector<vector<int> > m){
    vector<vector<int>> res(m.size(), vector<int>(m.size()));
    for(int i = 0; i<m.size(); i++){
        for(int j = 0; j<m[i].size(); j++){
            int suma_adyacentes = 0;
            for(int k = i-1; k<i+2; k++){
                for(int r = j-1; r<j+2; r++){
                    if (enRangoDeMatriz(k,r, m)){
                        res[i][j] += m[k][r];
                        suma_adyacentes += 1;
                    }
                }
            }
            res[i][j] /= suma_adyacentes;
        }

    }
    return res;
}

int contarPicos(vector<vector<int> > m) {
    int picos = 0;
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            bool esPico = true;
            for (int k = i - 1; k < i + 2; k++) {
                for (int r = j - 1; r < j + 2; r++) {
                    if (enRangoDeMatriz(k, r, m)) {
                        if (m[i][j] <= m[k][r]
                            && (k != i || r != j)){
                            esPico = false;
                        }
                    }
                }
            }
            if(esPico){
                picos+=1;
            }
        }
    }
    return picos;
}

bool esTriangular(vector<vector<int> > m){
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

bool hayAmenaza(vector<vector<int>> m){
    vector<vector<int>> posiciones_con_reinas;
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j<m[i].size(); j++){
            if(m[i][j]==1){
                vector<int> posicion = {i, j};
                posiciones_con_reinas.push_back(posicion);
            }
        }
    }
    bool hay_amenaza = false;
    for(int i = 0; i<posiciones_con_reinas.size(); i++){
        for(int j = i+1; j<posiciones_con_reinas.size(); j++){
            if (posiciones_con_reinas[i][0] == posiciones_con_reinas[j][0]){
                hay_amenaza = true;
            } else if(posiciones_con_reinas[i][1] == posiciones_con_reinas[j][1]){
                hay_amenaza = true;
            }else if(
                    posiciones_con_reinas[j][1] ==
                            (posiciones_con_reinas[i][0] - posiciones_con_reinas[j][0])
                            + posiciones_con_reinas[i][1]
                    ){
                hay_amenaza = true;
            }
        }
    }

	return hay_amenaza;
}

int diferenciaDiagonales(vector<vector<int> > m) {
    int diferencia = 0;
    for (int i = 0; i<m.size(); i++){
        diferencia += (m[i][i] - m[i][ m.size() - i -1 ]);
    }
    if (diferencia < 0){
        diferencia = -diferencia;
    }
    return diferencia;
}
