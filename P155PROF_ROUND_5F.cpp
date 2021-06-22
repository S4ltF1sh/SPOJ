//P155PROF - ROUND 5F - Dãy số Fibonacci 2
// F1 = x; F2 = y; Fi = Fi-1 + Fi+1.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long MOD = 1000000007;
    long long x, y, n;
    cin >> x >> y >> n;
    long long F[6] = {0};
    F[0] = x % MOD;
    F[1] = y % MOD;
    for (int i = 2; i < 6; i++)
    {
        long long tmp = F[i - 1] - F[i - 2];
        tmp %= MOD;
        F[i] = tmp;
    }
    n -= 1;
    n % 6;
    if (F[n] >= 0)
        cout << F[n];
    else
        cout << MOD + F[n];
    return 0;
}