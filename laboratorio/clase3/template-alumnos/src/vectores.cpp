#include "vectores.h"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
    int n; // Longitud del vector a rotar
    int i;
    int x;

    vector<int> v; // En v leo el vector
    cin >> n;
    while (i < n)
    {
        cin >> x;
        v.push_back(x);
        i++;
    }

    //divide

	//mayor
	//reverso
	//rotar
	//factoresPrimos
	//mostrarVector
}


//Ejercicio
bool divide(vector<int> v, int a){
	// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
    int divideATodos = true;

    for(int i = 0; i < v.size(); i++){
        if(v[i] % a != 0){
            divideATodos = false;
        }
    }

    return divideATodos;
}

//Ejercicio
int mayor(vector<int> v){
	// Dado un vector v, devuelve el valor maximo encontrado.
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if (v[i]>max){
            max = v[i];
        }
    }
    return max
}

//Ejercicio
vector<int> reverso(vector<int> v){
	// Dado un vector v, devuelve el reverso.
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
}

//Ejercicio
vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
}

//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
}
