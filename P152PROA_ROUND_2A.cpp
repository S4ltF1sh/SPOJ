//P152PROA - ROUND 2A - Nguyên tố cùng nhau
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long UCLN(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    return UCLN(b, a % b);
}
bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void Run()
{
    long long n;
    cin >> n;
    long long Count = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (UCLN(i, n) == 1)
            Count++;
    }
    if (isPrime(Count) == true)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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