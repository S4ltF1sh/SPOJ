//CPPPRI11 - PRIME 11 
//https://vi.wikipedia.org/wiki/Số_hoàn_thiện
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
long long POW(long long n, long long x)
{
    long long POW = n;
    for (long long i = 2; i <= x; i++)
    {
        POW *= n;
    }
    return POW;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int Check = 0;
        for (long long i = 2; i < 20; i++)
        {
            if (isPrime(i) && isPrime(POW(2, i) - 1))
            {
                if (POW(2, 2 * i) - POW(2, i) == 2 * n)
                {
                    cout << 1 << endl;
                    Check = 1;
                    break;
                }
            }
        }
        if (Check == 0)
            cout << 0 << endl;
    }
    return 0;
}