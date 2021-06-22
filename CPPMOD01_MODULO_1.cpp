//CPPMOD01 - MODULO 1
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long POW_MOD(long long x, long long y, long long p)
{
    long long Tich = 1;
    long long x_mod = x % p;
    for (int i = 0; i < y; i++)
    {
        Tich *= x_mod;
        Tich %= p;
    }
    return Tich;
}
void Run()
{
    long long x, y, p;
    cin >> x >> y >> p;
    cout << POW_MOD(x, y, p) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}