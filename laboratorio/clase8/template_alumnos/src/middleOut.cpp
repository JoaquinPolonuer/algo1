#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sonIguales(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    int i = 0;
    while (i < t.size() && s[i] == t[i])
    {
        i++;
    }
    return i == t.size();
}

int minimo(vector<int> l)
{
    int min = l[0];
    for (int i = 0; i < l.size(); i++)
    {
        if (l[i] < min)
        {
            min = l[i];
        }
    }
    return min;
}

void swap(string &s, int p0, int p1)
{
    char aux = s[p1];
    s[p1] = s[p0];
    s[p0] = aux;
}
string tirarAlPrincipio(string s, int p)
{
    for (int i = p; i > 0; i--)
    {
        swap(s, i, i - 1);
    }
    return s;
}
string tirarAlFinal(string s, int p)
{
    for (int i = p; i < s.size() - 1; i++)
    {
        swap(s, i, i + 1);
    }
    return s;
}
vector<string> permutaciones(string s)
{
    vector<string> perms;

    // todas las que puedo mandar para adelante;
    for(int i = 0; i < s.size(); i++){
        string perm = tirarAlPrincipio(s, i);
        perms.push_back(perm);
    }
    // todas las que puedo mandar para adelante;
    for(int i = 0; i < s.size(); i++){
        string perm = tirarAlFinal(s, i);
        perms.push_back(perm);
    }
    return perms;
}

bool pertenece(string p, vector<string> ps){
    bool _pertenece = false;
    for(int i = 0; i < ps.size(); i++){
        if(sonIguales(p, ps[i])){
            _pertenece = true;
        }
    }
    return _pertenece;
}

int middleOut(string s, string t, vector<string> visitadas)
{
    if (sonIguales(s, t))
    {
        return 0;
    }

    vector<string> perms = permutaciones(s);
    vector<int> costos;
    for (int i = 0; i < perms.size(); i++)
    {
        string nueva_perm = perms[i];
        if(!pertenece(nueva_perm, visitadas)){
            visitadas.push_back(nueva_perm);
            int costo = middleOut(nueva_perm, t, visitadas);
            costos.push_back(costo);
        }
    }
    
    // Creo que esta bien el razonamiento pero
    // se rompe cuando costos es una lista vacia
    // no se que deberia devolver en ese caso
    return 1 + minimo(costos);
}

int main()
{
    string s;
    string t;
    vector<string> visitadas;
    vector<int> boca;

    cin >> s >> t;
    int res = middleOut(s, t, visitadas);
    cout << res;
    return 0;
}
