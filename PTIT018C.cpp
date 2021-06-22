//PTIT018C - ACM PTIT 2018 C - SỐ MŨ
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long POW(long long a, long long b, long long MOD)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return POW(a * a % MOD, b / 2, MOD) % MOD;
    return a * POW(a * a % MOD, b / 2, MOD) % MOD;
}
long long TO_STRING(string a, long long MOD)
{
    long long A = 0;
    for (long long i = 0; i < a.length(); i++)
    {
        A = A * 10 + (long long)(a.at(i) - '0');
        A %= MOD;
    }
    return A;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    int b, m;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        cout << POW(TO_STRING(a, m), b, m) << endl;
    }
}