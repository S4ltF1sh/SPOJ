//CPPLCM03 - LCM & GCD 3
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
#define MOD 1000000007
long long POW_MOD(long long a, long long b)
{
    long long Tich = 1;
    for (int i = 0; i < b; i++)
    {
        Tich *= a;
        Tich %= MOD;
    }
    return Tich;
}
void Run()
{
    long long n;
    cin >> n;
    vector<long long> A(n);
    long long h = 1;
    cin >> A[0];
    long long g = A[0];
    h *= A[0];
    h %= MOD;
    for (long long i = 1; i < n; i++)
    {
        cin >> A[i];
        h *= A[i];
        h %= MOD;
        g = __gcd(A[i], g);
    }
    cout << POW_MOD(h, g) << endl;
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