//P193PROE - Problem E - Xin kẹo(chua nghi ra)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const long long MOD = 1000000007;
int main()
{
    long long n, m, k, x, Res = 1;
    cin >> n >> m;
    m++;
    for (long long i = 1; i <= n; i++)
    {
        cin >> k >> x;
        if (k == 1)
            Res += (x % MOD);
        if (k == 2)
            Res *= (x % MOD);
        Res %= MOD;
    }
    cout << (Res * (m % MOD)) % MOD;
}