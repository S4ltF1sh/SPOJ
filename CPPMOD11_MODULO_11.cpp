//CPPMOD11 - MODULO 11
//https://www.geeksforgeeks.org/compute-abc-such-that-ac-bc-can-be-beyond-range/
//b % 2 == 0 : a*b = (2 * a) * (b / 2)
//b % 2 == 1 : a * b = a + (2 * a) * ((b-1) / 2)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long MUL_MOD(long long a, long long b, long long MOD)
{
    if (b == 0)
        return 0;
    long long tmp = MUL_MOD(a, b / 2, MOD);
    if (b % 2 == 1)
        return (a % MOD + 2 * (tmp % MOD)) % MOD;
    else
        return (2 * (tmp % MOD)) % MOD;
}
void Run()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a, b, c;
    cin >> a >> b >> c;
    cout << MUL_MOD(a, b, c) << endl;
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
