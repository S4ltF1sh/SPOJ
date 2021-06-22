//P154SUMI - ROUND 4I - Bộ 3 số Pytago
//for trau :))
// n <= 1e4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long Count = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = i; j <= n; j++)
        {
            long long Check = sqrt(i * i + j * j);
            if (Check * Check - j * j == i * i && Check <= n)
            {
                Count++;
            }
        }
    }
    cout << Count;
    return 0;
}