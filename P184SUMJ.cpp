//P184SUMJ - ROUND 4J - Lũy thừa(WA)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
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
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    cout << POW(n, m, k);
}