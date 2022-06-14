#include <vector>
#include <iostream>

using namespace std;

int menorMasGrande(vector<int> v,int x){
    int res = -1;
    
    int low = 0;
    int high = v.size() - 1;

    while (low <= high){
        int mid = (high + low)/2;
        if(v[mid] <= x){
            low = mid + 1;
        }else{
            res = mid;
            high = mid - 1;
        }
    }
    
    return res;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n;
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    cin >> x;
    
    // Evaluo si el vector v esta ordenado
    int res = menorMasGrande(v,x);
    
    // Imprimo la salida
    cout << res;
    
    return 0;
}
