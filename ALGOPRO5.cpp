//ALGOPRO5 - Lucky number
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long POW(long long n, long long x)
{
    long long PoW = n;
    for (long long i = 2; i <= x; i++)
    {
        PoW *= n;
    }
    return PoW;
}
int main()
{
    long long n;
    cin >> n;
    unsigned long long Count = 0;
    for (long long i = 1; i <= n; i++)
    {
        Count += POW(2, i);
    }
    cout<<Count;
}