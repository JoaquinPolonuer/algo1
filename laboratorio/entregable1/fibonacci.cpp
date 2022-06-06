#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    int i = 1;
    int f_n0 = 0;
    int f_n1 = 1;
    int f_n2;

    while (i < n){
        f_n2 = f_n0 + f_n1;
        f_n0 = f_n1;
        f_n1 = f_n2;
        i++;
    }
    return f_n1;
}
int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}