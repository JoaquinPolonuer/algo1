#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sonIguales(string s, string t)
{
    bool son_iguales = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            son_iguales = false;
        }
    }
    return son_iguales;
}

string moverAlPrincipio(string s, int n)
{
    string s_principio = "";
    s_principio.push_back(s[n]);

    for (int i = 0; i < s.size(); i++)
    {
        if (i != n)
        {
            s_principio.push_back(s[i]);
        }
    }
    return s_principio;
}

string moverAlFinal(string s, int n)
{
    string s_final = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (i != n)
        {
            s_final.push_back(s[i]);
        }
    }

    s_final.push_back(s[n]);
    return s_final;
}

int minimo(vector<int> xs)
{
    int min = xs[0];
    for (int i = 0; i < xs.size(); i++)
    {
        if (xs[i] < min)
        {
            min = xs[i];
        }
    }
    return min;
}

bool estaEnSecuencia(vector<string> seq, string s){
    for(int i = 0; i<seq.size(); i++){
        if (sonIguales(seq[i], s)){
            return true;
        }
    }
    return false;
}

int middleOut(string s, string t)
{

}

int main()
{
    string s;
    string t;

    cin >> s >> t;

    int res = middleOut(s, t);
    cout << res;
    return 0;
}
