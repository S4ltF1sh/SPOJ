//CPPMOD10 - MODULO 10
//chia de tri cho module
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const long long MOD = 1e9 + 7;
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
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, x, Sum = 0;
    cin >> n >> x;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    vector<long long> a(n);
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> a[i];
        Sum += (a[i] * POW(x, i) % MOD);
        Sum %= MOD;
    }
    cout << Sum << endl;
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
