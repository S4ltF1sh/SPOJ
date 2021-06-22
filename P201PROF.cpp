//P201PROF - Password
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

long long POW(long long a, long long b)
{
    long long Tich = 1;
    for (int i = 1; i <= b; i++)
        Tich *= a;
    return Tich;
}
long long GCD(long long a, long long b)
{
    if (a == 0 || b == 0)
        return a + b;
    return GCD(b, a % b);
}
long long LCM(long long a, long long b)
{
    long long gcd = GCD(a, b);
    long long lcm = a * b / gcd;
    return lcm;
}

int main()
{
    long long Pass = LONG_LONG_MAX;
    long long n, k;
    cin >> n >> k;
    for (int i = 0; i <= 8; i++)
    {
        Pass = min(Pass, LCM(n, POW(10, k)));
    }
    cout << Pass;
    return 0;
}