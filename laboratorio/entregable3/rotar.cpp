#include <iostream>
#include <string>

using namespace std;

string rotar(string s, int j)
{
    string rotado = "";
    for (int i = 0; i < s.size(); i++)
    {
        rotado.push_back(
            s[(s.size() - j + i) % s.size()]);
    }
    return rotado;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    string s;
    int j;
    cin >> s >> j;

    string res = rotar(s, j);
    cout << res;
    return 0;
}
