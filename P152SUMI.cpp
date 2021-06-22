//P152SUMI - ROUND 2I - Ký tự giống nhau
//giong bai day con lien tiep tang dan dai nhat
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int Check[1000005] = {0};
void Creat(string s)
{
    for (int i = 1; i < s.length(); i++)
        if (s.at(i) == s.at(i - 1))
            Check[i] = 1 + Check[i - 1];
        else
            Check[i] = Check[i - 1];
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int m, l, r;
    cin >> s;
    Creat(s);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        cout << Check[r - 1] - Check[l - 1] << endl;
    }
}
int main() { Run(); }
