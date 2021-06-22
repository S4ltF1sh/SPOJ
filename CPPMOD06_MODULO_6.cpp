//CPPMOD06 - MODULO 6
//chia de tri cho module
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long POW(long long a, long long b, long long MOD)
{
    if (b == 0)
        return 1 % MOD;
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return POW(a * a % MOD, b / 2, MOD) % MOD;
    else
        return a * POW(a * a % MOD, b / 2, MOD) % MOD;
}
void Run()
{
    string s;
    long long Result = 0, b, m;
    cin >> s;
    cin >> b >> m;
    for (int i = 0; i < s.length(); i++)
    {
        Result = Result * 10 + ((long long)s.at(i) - '0');
        Result %= m;
    }
    cout << POW(Result, b, m) << endl;
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
