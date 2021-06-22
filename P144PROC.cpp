//P144PROC - ROUND 4C - Lũy thừa
//cong thuc chia de tri module
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const long long MOD = 1000000007;
long long POW(long long a, long long b)
{
    if (b == 0)
        return 1 % MOD;
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return POW(a * a % MOD, b / 2) % MOD;
    else
        return a * POW(a * a % MOD, b / 2) % MOD;
}
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    long long a, b;
    while (1)
    {
        cin >> a >> b;
        if (a == b && b == 0)
            return 0;
        cout << POW(a, b) << endl;
    }
}