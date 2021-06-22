//CPPPRI10 - PRIME 10 (ex sai) (still AC :v)
//smith
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
long long Sum_Chu_So(long long n)
{
    if (n < 10)
        return n;
    long long Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    return Sum;
}
long long Sum_Nhan_Tu(long long n)
{
    long long Sum = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        Sum += 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                Sum += Sum_Chu_So(i);
            }
        }
    }
    if (n > 1)
        Sum += Sum_Chu_So(n);
    return Sum;
}
void Run()
{
    long long n;
    cin >> n;
    if (Sum_Chu_So(n) == Sum_Nhan_Tu(n) && isPrime(n) == false)
        cout << "YES\n";
    else
        cout << "NO\n";
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